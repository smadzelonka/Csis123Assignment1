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

int main() {
    Menu m;
    m.addMenu("1. Function 1", func1);
    m.addMenu("2. Function 2", func2);
    m.addMenu("3. Function 3", func3);
    m.addMenu("4. Exit", Exit);
    m.runMenu();
}

void func1(){
    char c;
    cout << "Hello from function 1" << endl;
    waitKey(); // call waitKey function
}

void func2(){
    char c;
    cout << "Hello from function 2" << endl;
    waitKey(); // call waitKey function
}

void func3(){
    char c;
    cout << "Hello from function 3" << endl;
    waitKey(); // call waitKey function
}

void Exit(){
    cout << "Good Bye" << endl;
    exit(0);
}
