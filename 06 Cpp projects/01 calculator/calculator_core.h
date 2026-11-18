#pragma once
// Shared expression-parsing core for the calculator applications.
#include <cctype>
#include <sstream>
#include <stdexcept>
#include <string>

class Parser {
public:
    explicit Parser(const std::string& input) : ss_(input) {}

    double parse() {
        double result = parseExpression();
        skipWhitespace();
        if (ss_.peek() != EOF) {
            throw std::runtime_error("Unexpected character in expression");
        }
        return result;
    }

private:
    std::stringstream ss_;

    void skipWhitespace() {
        while (ss_.peek() != EOF && std::isspace(ss_.peek())) {
            ss_.get();
        }
    }

    // expression = term (('+' | '-') term)*
    double parseExpression() {
        double result = parseTerm();
        while (true) {
            skipWhitespace();
            int c = ss_.peek();
            if (c == '+' || c == '-') {
                ss_.get();
                double rhs = parseTerm();
                result = (c == '+') ? result + rhs : result - rhs;
            } else {
                break;
            }
        }
        return result;
    }

    // term = factor (('*' | '/') factor)*
    double parseTerm() {
        double result = parseFactor();
        while (true) {
            skipWhitespace();
            int c = ss_.peek();
            if (c == '*' || c == '/') {
                ss_.get();
                double rhs = parseFactor();
                if (c == '*') {
                    result *= rhs;
                } else {
                    if (rhs == 0.0) {
                        throw std::runtime_error("Division by zero");
                    }
                    result /= rhs;
                }
            } else {
                break;
            }
        }
        return result;
    }

    // factor = number | '(' expression ')' | ('+' | '-') factor
    double parseFactor() {
        skipWhitespace();
        int c = ss_.peek();
        if (c == EOF) {
            throw std::runtime_error("Unexpected end of expression");
        }
        if (c == '(') {
            ss_.get();
            double result = parseExpression();
            skipWhitespace();
            if (ss_.peek() != ')') {
                throw std::runtime_error("Missing closing parenthesis");
            }
            ss_.get();
            return result;
        }
        if (c == '+' || c == '-') {
            ss_.get();
            double value = parseFactor();
            return (c == '-') ? -value : value;
        }
        if (std::isdigit(c) || c == '.') {
            double value;
            ss_ >> value;
            if (ss_.fail()) {
                throw std::runtime_error("Invalid number");
            }
            return value;
        }
        throw std::runtime_error(std::string("Unexpected character: ") + static_cast<char>(c));
    }
};

inline double evaluate(const std::string& expression) {
    Parser parser(expression);
    return parser.parse();
}
