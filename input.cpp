#include "input.h"

using namespace std;

input::input()
{
    cout << "New input has been created" << endl;
}

void input::user_and_password_input(pair<string, string> &user_and_password) {
    string username;
    string password;

    cout << "Please input your username: ";
    cin >> username;
    user_and_password.first = username;

    cout << endl
         << "Please input your password: ";
    cin >> password;
    user_and_password.second = password;
}

string input::username_input() {
    string username;

    cout << "Please input your username: ";
    cin >> username;

    return username;
}

bool input::password_input(string password) {
    string password_input;
    for(int i = 2; i > -1; i--) {
        cout << "Please input your password: ";
        cin >> password_input;

        if(password_input == password) {
            return true;
        }
        else {
            cout << "Wrong password, " << i << " tries left" << endl;
        }
    }
    cout << "Password has been wrong three times, returning" << endl;
    return false;
}