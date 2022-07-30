#include "menu.h"

#include <iostream>

using namespace std;

menu::menu()
{
    cout << "New menu has been created!" << endl;
}

void menu::first_menu() {
    bool valid_input = false;
    int user_input;

    while(!valid_input) {
        user_input = 0;
        cout << "(1) Create new user" << endl
            << "(2) Log in to existing user" << endl
            << "(3) EXIT" << endl
            << endl
            << "Input: ";

        cin >> user_input;

        if(!cin.fail()) {
            switch (user_input)
            {
            case 1:
                user_and_password_input();
                valid_input = true;
                break;

            case 2:
                //user_login();
                valid_input = true;
                break;
            
            case 3:
                exit(0);
                break;
            
            default:
                break;
            }
        }
        else if(user_input < 1 || user_input > 3) {
            cout << "Invalid input, please try again" << endl;
        }
        else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input, please try again" << endl;
        }
    }
}