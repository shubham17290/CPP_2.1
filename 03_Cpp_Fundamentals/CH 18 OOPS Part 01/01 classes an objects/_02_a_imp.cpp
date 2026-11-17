#include <iostream>
using namespace std;

class user {
  private:
    string username;
    string password;
    string bio;

  public:
    user(string u = "", string p = "", string b = "") : username(u), password(p), bio(b) {}

    void deactivate() { cout << "Deleting account!" << endl; }

    void editBio(const string &newBio) {
        bio = newBio;
        cout << "Bio updated!" << endl;
    }

    void showBio() const { cout << "Bio: " << bio << endl; }
};

int main() {
    user u1("alice", "s3cret", "hello world");
    u1.deactivate();
    u1.editBio("new bio text");
    u1.showBio();
    return 0;
}
