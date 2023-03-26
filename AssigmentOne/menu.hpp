//
//  menu.hpp
//  AssigmentOne
//
//  Created by Sean Madzelonka on 3/26/23.
//

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
const int MAXCOUNT = 20;
struct menuItem
{
    void (*func) ();
    char decript [50];
};
class Menu
{ private:
    menuItem mi[MAXCOUNT];
    int count;
    void runSelection();
public:
    Menu();
    void addMenu(char *Description, void (*f) ());
    void runMenu();
};

void waitKey(); // declare waitKey function

#endif /* menu_hpp */
