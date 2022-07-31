#pragma onces

#include <iostream>
#include <utility>
#include <string>

class input
{
private:

public:
    input();

    void user_and_password_input(std::pair<std::string, std::string> &user_and_password);

    std::string username_input();

    bool correct_password_check(std::string password);

    std::string new_password_input();

};