#pragma once

#include <fstream>
#include <iostream>
#include <utility>
#include <string>


class users
{
private:

public:
    users();

    void newuser(std::pair<std::string, std::string> user_and_password);

};