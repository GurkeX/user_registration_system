#include "input.h"

using namespace std;

input::input()
{
    cout << "New input has been created" << endl;
}

void input::user_and_password_input() {
    string username;
    string password;

    cout << "Please input your username: ";
    cin >> username;
    user_and_password.first = username;

    cout << endl
         << "Please input your password: ";
    cin >> password;
    user_and_password.second = password;

    newuser(user_and_password);
}