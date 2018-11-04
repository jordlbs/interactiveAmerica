// Interactive America
// MainMenu.h
// Jordan Pounds

#ifndef MainMenu_h
#define MainMenu_h

#include <iostream>
#include "MainMenu.h"
#include "InfoSelection.h"
using namespace std;

class MainMenu
{
public:
    void mainMenuMessage()
    {
        cout << "Enter 1 to request a table of information pertaining to "
        "all fifty states." << endl;
        cout << "Enter 2 to request information on an individual state." << endl;
        cout << "Enter 0 to exit." << endl;
        cout << "\n";
    }
public:
    int getMainMenu()
    {
        int intSelection;
        InfoSelection1 is1;
        InfoSelection2 is2;
        cin >> intSelection;
        
        // Non-integer (incorrect input):
        
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            mainMenuMessage();
            cin >> intSelection;
            if (cin.fail())
            {
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    mainMenuMessage();
                    cin >> intSelection;
                }
            }
            else if (intSelection == 0)
            {
                return 0;
            }
            else if (intSelection == 1)
            {
                is1.is1Func();
                mainMenuMessage();
                cin >> intSelection;
                if (intSelection == 2)
                {
                    is2.is2Func();
                    mainMenuMessage();
                }
            }
            else if (intSelection == 2)
            {
                is2.is2Func();
                mainMenuMessage();
                if (intSelection == 1)
                {
                    is1.is1Func();
                    mainMenuMessage();
                }
            }
            else if ((intSelection != 1 || intSelection != 2) && (intSelection != 0))
            {
                mainMenuMessage();
                cin >> intSelection;
                if (cin.fail())
                {
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        mainMenuMessage();
                        cin >> intSelection;
                    }
                }
            }
        }
        
        while (intSelection == 0)
        {
            return 0;
        }
        
        // 1 (table of states):
        
        while (intSelection == 1)
        {
            is1.is1Func();
            if (cin.fail())
            {
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    mainMenuMessage();
                    cin >> intSelection;
                }
            }
            else if (intSelection == 0)
            {
                return 0;
            }
            else if (intSelection == 2)
            {
                is2.is2Func();
                mainMenuMessage();
            }
            else if ((intSelection != 1 || intSelection != 2) && (intSelection != 0))
            {
                mainMenuMessage();
                cin >> intSelection;
                if (cin.fail())
                {
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        mainMenuMessage();
                        cin >> intSelection;
                    }
                }
            }
        }
        
        // 2 (individual states):
        
        while (intSelection == 2)
        {
            is2.is2Func();
            mainMenuMessage();
            cin >> intSelection;
            if (cin.fail())
            {
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    mainMenuMessage();
                    cin >> intSelection;
                }
            }
            else if (intSelection == 0)
            {
                return 0;
            }
            else if (intSelection == 1)
            {
                is1.is1Func();
            }
            else if ((intSelection != 1 || intSelection != 2) && (intSelection != 0))
            {
                mainMenuMessage();
                cin >> intSelection;
                if (cin.fail())
                {
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        mainMenuMessage();
                        cin >> intSelection;
                    }
                }
            }
        }
        
        // Incorrect input:
        
        while ((intSelection != 1 || intSelection != 2) && (intSelection != 0)) 
        {
            mainMenuMessage();
            cin >> intSelection;
            if (cin.fail())
            {
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    mainMenuMessage();
                    cin >> intSelection;
                }
            }
            else if (intSelection == 0)
            {
                return 0;
            }
            else if (intSelection == 1)
            {
                is1.is1Func();
                
            }
            else if (intSelection == 2)
            {
                is2.is2Func();
                mainMenuMessage();
                cin >> intSelection;
            }
        }
        
        // }
        return 0;
    }
};
#endif
