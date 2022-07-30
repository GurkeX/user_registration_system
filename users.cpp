#include "users.h"

#include <iostream>
#include <string>
#include <utility>
#include <fstream>
#include <sstream>

using namespace std;

users::users()
{
    cout << "New users has been created" << endl;
}

void users::newuser(pair<string, string> user_and_password) {
    stringstream return_message;

    ofstream users_file("/home/riko/Documents/user_registration_system/users_file.txt", std::ofstream::app);

    if(users_file.is_open()) {
        users_file << user_and_password.first<< " " << user_and_password.second << endl;
        users_file.close();
    }
    else {
        cout << "Unable to open users file" << endl;
    }

    cout << "New user " << user_and_password.first << " has been created" << endl;

    //return return_message.str();
}