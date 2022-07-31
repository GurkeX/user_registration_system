#include "users.h"

using namespace std;

users::users()
{
    cout << "New users has been created" << endl;
}

void users::new_user() {
    user_and_password_input(user_and_password);

    ofstream users_file("/home/riko/Documents/user_registration_system/users/" + user_and_password.first + "_account.txt");

    if(users_file.is_open()) {
        users_file << user_and_password.second << endl;
        users_file.close();
    }
    else {
        cout << "Unable to open users file" << endl;
    }

    cout << "New user " << user_and_password.first << " has been created" << endl;
}


void users::user_login() {
    string username;
    string password;

    username = username_input();

    ifstream users_file("/home/riko/Documents/user_registration_system/users/" + username + "_account.txt");

    if(users_file.is_open()) {
        users_file >> password;
        if(password_input(password)) {
            cout << "You have successfully logged in " << username << endl;
            users_file.close();
            return;
        }
        else {
            users_file.close();
            return;
        }
        
    }
    else {
        cout << "Account does not exist yet" << endl; 
    }    
}
