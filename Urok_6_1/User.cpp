#include "Users.h"

#include <string.h>
#include <stdio.h>

void copy_string(const char* str, char** dst)
{
    if (str != nullptr)
    {
        const size_t size = strlen( str );
        *dst = new char[ size + 1 ];
        strncpy( *dst, str, size );
    }
    else
    {
        *dst = nullptr;
    }
}

User* create_user(const char* name, const char* second_name)
{
    User* temp = new User;
    copy_string( name, &temp->_name );
    copy_string( second_name, &temp->_second_name );
    return temp;
}

void destroy_user(User* user)
{
    if (user != nullptr)
    {
        delete[] user->_second_name;
        delete[] user->_name;
        delete user;
    }
}

void print_user(User* user)
{
    if (user != nullptr)
    {
        printf("Name: %s; Second name: %s\n",
               user->_name == nullptr ? "" : user->_name,
               user->_second_name == nullptr ? "" : user->_second_name);
    }
}

bool is_equal_user(User* user, const char* name, const char* second_name)
{
    if (user == nullptr)
    {
        return false;
    }

    return !strcmp(user->_name, name) && !strcmp(user->_second_name, second_name);
}
