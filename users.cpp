#include "users.h"

using namespace std;

users::users()
{
    user_logged_in = false;
    cout << "New users has been created" << endl;
}

bool users::user_signed_in() {
    if(user_logged_in) {
        return true;
    }
    else {
        return false;
    }
}

void users::new_user() {
    user_and_password_input(user_and_password);

    ofstream user_file("/home/riko/Documents/user_registration_system/users/" + user_and_password.first + ".txt");

    if(user_file.is_open()) {
        user_file << user_and_password.second << endl;
        user_file.close();
    }
    else {
        cout << "Unable to open users file" << endl;
    }

    cout << "New user " << user_and_password.first << " has been created" << endl;
}


void users::user_login() {
    active_username = username_input();

    ifstream user_file("/home/riko/Documents/user_registration_system/users/" + active_username + ".txt");

    if(user_file.is_open()) {
        user_file >> active_password;
        if(correct_password_check(active_password)) {
            cout << "You have successfully logged in " << active_username << endl;
            user_file.close();
            user_logged_in = true;
            return;
        }
        else {
            user_file.close();
            return;
        }
        
    }
    else {
        cout << "Account does not exist yet" << endl; 
    }    
}

void users::change_password() {
    string new_password;
    if(correct_password_check(active_password)) {
        new_password = new_password_input();
        ofstream user_file("/home/riko/Documents/user_registration_system/users/" + active_username + ".txt", std::ofstream::out | std::ofstream::trunc);
        if(user_file.is_open()) {
            user_file << new_password;
            user_file.close();
            cout << "Password has been changed successfully!" << endl;
        }
        else {
            cout << "Account does not exist yet" << endl;
        }
    }
}