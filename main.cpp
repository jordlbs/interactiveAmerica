// Interactive America
// Jordan Pounds
/*
 An array of structs assemble the state name, capital name,
 area size, and population size belonging to each of the fifty
 states. A for loop iterates the array values so that
 information pertaining to each of the fifty states can be
 displayed in a table. Information on individual states is
 made available through while and if else statements.
 */

#include <iostream>
#include "MainMenu.h"
using namespace std;

int main()
{
    cout << "Welcome to Interactive America." << endl;
    cout << "Enter 1 to request a table of information pertaining to "
    "all fifty states." << endl;
    cout << "Enter 2 to request information on an individual state." << endl;
    cout << "Enter 0 to exit." << endl;
    cout << "\n";
    MainMenu m;
    m.getMainMenu();
    
    return 0;
}

