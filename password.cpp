#include <iostream>
using namespace std;

int main() {
    string password = "1234";     // correct password
    string userInput;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput == password) {
            cout << "Access granted!";
            return 0;
        } else {
            attempts++;
            cout << "Wrong password.: " << attempts << endl;
        }
    }

    cout << "Password blocked.";

    return 0;
}