#include "users.h"

using namespace std;

users::users()
{
    cout << "New users has been created" << endl;
}

void users::new_user() {
    user_and_password_input(user_and_password);

    ofstream users_file("/home/riko/Documents/user_registration_system/users_file.txt", std::ofstream::app);

    if(users_file.is_open()) {
        users_file << user_and_password.first<< " " << user_and_password.second << endl;
        users_file.close();
    }
    else {
        cout << "Unable to open users file" << endl;
    }

    cout << "New user " << user_and_password.first << " has been created" << endl;
}


void users::user_login() {
    string username;
    string word;
    string password;

    username = username_input();

    ifstream users_file("/home/riko/Documents/user_registration_system/users_file.txt");

    if(users_file.is_open()) {
        while(!users_file.eof()) {
            users_file >> word;
            if(username == word) {
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
        } 
    cout << "Account does not yet exist" << endl;
        
    }
    else {
        cout << "Unable to open users_file" << endl;
    }    
}
