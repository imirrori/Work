#ifndef MENU_H
#define MENU_H

struct MenuPoint
{
    char name[255];
    void (*fun)();
};

struct Menu
{
    MenuPoint menu_point[2];
    int current_point;
};

void init_menu(Menu* menu);
void print_menu(Menu menu);
bool move_menu(Menu* menu, int key);

#endif // MENU_H
