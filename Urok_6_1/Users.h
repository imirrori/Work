#ifndef USERS_H
#define USERS_H

struct User
{
    char* _name;
    char* _second_name;
};

User* create_user(const char* name, const char* second_name);
void destroy_user(User* user);
void print_user(User* user);
bool is_equal_user(User* user, const char* name, const char* second_name);

#endif // USERS_H
