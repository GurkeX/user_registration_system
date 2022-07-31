#pragma once

#include "input.h"

#include <fstream>
#include <iostream>
#include <utility>
#include <string>


class users : public input
{
private:
    bool user_logged_in;
    std::pair<std::string, std::string> user_and_password;
    std::string active_username;
    std::string active_password;

public:
    users();

    bool user_signed_in();

    void new_user();

    void user_login();

    void change_password();
};