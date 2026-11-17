/*create a user class with properties : id(private) , username(public)  & password(private) .
its id should be initialized in a parameterised constructor.
it should have a getter & setter for password.*/
#include <iostream>
using namespace std;

class User {
  private:
    int id;          // 🔒 private
    string password; // 🔒 private

  public:
    string username; // 🌐 public

    // parameterized constructor → initializes id (and username/password)
    User(int id, string username, string password) {
        this->id = id;
        this->username = username;
        this->password = password;
    }

    // getter for password
    string getPassword() { return password; }

    // setter for password
    void setPassword(string newPassword) { password = newPassword; }

    // just to show id (since it's private, we need a getter to read it)
    int getId() { return id; }
};

int main() {
    User u1(101, "alice", "old123");

    // username is public → direct access
    cout << "Username : " << u1.username << endl;

    // id is private → via getter
    cout << "ID       : " << u1.getId() << endl;

    // password is private → via getter
    cout << "Password : " << u1.getPassword() << endl;

    // change password via setter
    u1.setPassword("new456");
    cout << "New Pass : " << u1.getPassword() << endl;

    // u1.password = "hack";   // ❌ ERROR - private
    // u1.id = 999;            // ❌ ERROR - private

    return 0;
}
