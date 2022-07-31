#include <iostream>
#include <string>
#include <utility>

#include "menu.h"

using namespace std;

int main(int argc, const char *argv[]) {
    
    menu menu;

    while(true) {
        menu.main_menu();

        if(menu.user_signed_in()) {
            menu.user_menu();
        }
    }


    return 0;
}