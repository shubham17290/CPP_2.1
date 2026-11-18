// Simple console calculator
// Supports: + - * / and parentheses with proper precedence

#include "calculator_core.h"

#include <iostream>
#include <string>

int main() {
    std::cout << "=== C++ Calculator ===" << std::endl;
    std::cout << "Enter an expression (+ - * /, parentheses supported)." << std::endl;
    std::cout << "Type 'q' or 'exit' to quit." << std::endl;

    std::string line;
    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, line)) {
            break; // EOF
        }
        if (line.empty()) {
            continue;
        }
        if (line == "q" || line == "exit") {
            break;
        }
        try {
            double result = evaluate(line);
            std::cout << "= " << result << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
