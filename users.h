#pragma once

#include "input.h"

#include <fstream>
#include <iostream>
#include <utility>
#include <string>


class users : public input
{
private:
std::pair<std::string, std::string> user_and_password;

public:
    users();

    void new_user();

    void user_login();
};