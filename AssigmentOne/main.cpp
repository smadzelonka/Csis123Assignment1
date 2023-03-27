//
//  Sean
//  Madzelonka
//  0266099
//  03/26/23.
//  Assignment 1 - Creating A Menu
//  Created by Sean Madzelonka on 3/26/23.
//

#include <iostream>
#include <cstdlib>

using namespace std;
#include "menu.hpp"

void func1();
void func2();
void func3();
void Exit();
void waitKey();

Menu m; // create the Menu object in the global scope of main.cpp

int main() {
//    Menu m;
    m.addMenu("1. Function 1", func1);
    m.addMenu("2. Function 2", func2);
    m.addMenu("3. Function 3", func3);
    m.addMenu("4. Exit", Exit);
    m.runMenu();
}

void func1(){
//    Menu m;
    cout << "Hello from function 1" << endl;
    m.waitKey(); // call waitKey function
}

void func2(){
//    Menu m;
    cout << "Hello from function 2" << endl;
    m.waitKey(); // call waitKey function
}

void func3(){
//    Menu m;
    cout << "Hello from function 3" << endl;
    m.waitKey(); // call waitKey function
}

void Exit(){
    cout << "Good Bye" << endl;
    exit(0);
}
