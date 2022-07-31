#include "menu.h"

using namespace std;

menu::menu()
{
    cout << "New menu has been created!" << endl;
}

void menu::main_menu() {
    bool valid_input = false;
    int user_input;

    while(!valid_input) {
        user_input = 0;
        cout << "(1) Create new account" << endl
            << "(2) Log in to existing account" << endl
            << "(3) EXIT" << endl
            << endl
            << "Input: ";

        cin >> user_input;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input, please try again" << endl;
        }
        else if(!cin.fail()) {
            switch (user_input)
            {
            case 1:
                new_user();
                valid_input = true;
                break;

            case 2:
                user_login();
                valid_input = true;
                break;
            
            case 3:
                exit(0);
                break;
            
            default:
                cout << "Invalid input, please try again" << endl;
                break;
            }
        }
    }
}