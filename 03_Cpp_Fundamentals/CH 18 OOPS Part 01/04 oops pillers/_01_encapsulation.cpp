#include <iostream>
using namespace std;

class BankAccount {
  private:
    float balance = 1000; // 🔒 data hiding - cannot be touched from outside

  public:
    // controlled way to READ balance
    float getBalance() { return balance; }

    // controlled way to CHANGE balance
    void deposit(float amt) {
        if (amt > 0)
            balance += amt; // validation = safe
    }
};

int main() {
    BankAccount acc;

    cout << "Balance: " << acc.getBalance() << endl; // ✅ via method

    acc.deposit(500);
    cout << "After deposit: " << acc.getBalance() << endl;

    // acc.balance = 999999;  // ❌ ERROR - private, cannot access directly

    return 0;
}
