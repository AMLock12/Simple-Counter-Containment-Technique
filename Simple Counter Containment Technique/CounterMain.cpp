#pragma once
#include <iostream>
#include "CounterClass.cpp" // The counter is the counting functions 
#include "UserInterface.cpp" //Interface with the Counter to execute the user's actions and display the results


using namespace std;


int main()
{
    Counter c; // Counter Object
    MemoryCounter m;
    UserInterface anInterface(&c,&m); // User Interface Object
    anInterface.executeSelection();
    return 0;
}