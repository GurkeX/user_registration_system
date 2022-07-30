cmake_minimum_required(VERSION 3.0.0)
project(user_registration_system VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB user_registration_system_SRC
     "*.h"
     "*.cpp"
)

add_executable(user_registration_system main.cpp ${user_registration_system_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
