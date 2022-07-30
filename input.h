#pragma once

#include "users.h"

#include <iostream>
#include <utility>
#include <string>

class input : public users
{
protected:
    std::pair<std::string, std::string> user_and_password;

public:
    input();

    void user_and_password_input();

};