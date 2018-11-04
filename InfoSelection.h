// Interactive America
// InfoSelection.h
// Jordan Pounds

#ifndef InfoSelection_h
#define InfoSelection_h

#include <iostream>
#include <iomanip>
#include "StatesClass.h"
using namespace std;

class InfoSelection1 : public StatesClass
{
public:
    int is1Func()
    {
        cout << "\n";
        cout << setw(16) << "State" << setw(18) << "Capital"
        << setw(20) << "Area (sq mi)" << setw(18) << "Population" << endl;
        cout << "\n";
        
        for (int x = 1; x < 51; ++x)
        {
            cout << setw(16) << states[x].state << setw(19) << states[x].capital
            << setw(16) << states[x].areaSize << setw(20) << states[x].populationSize << endl;
            cout << "\n";
        }
        return 0;
    }
};

class InfoSelection2 : public StatesClass
{
public:
    int is2Func()
    {
        cout << "Select the number corresponding to the state you would like to learn about." << endl;
        cout << "Alternatively, enter 0 to return to the main menu." << endl;
        cout << "\n";
        cout << "1: Alabama      11: Hawaii     21: Massachusetts   31: New Mexico       41: South Dakota  \n"
                "2: Alaska       12: Idaho      22: Michigan        32: New York         42: Tennessee     \n"
                "3: Arizona      13: Illinois   23: Minnesota       33: North Carolina   43: Texas         \n"
                "4: Arkansas     14: Indiana    24: Mississippi     34: North Dakota     44: Utah          \n"
                "5: California   15: Iowa       25: Missouri        35: Ohio             45: Tennessee     \n"
                "6: Colorado     16: Kansas     26: Montana         36: Oklahoma         46: Virginia      \n"
                "7: Connecticut  17: Kentucky   27: Nebraska        37: Oregon           47: Washington    \n"
                "8: Delaware     18: Louisiana  28: Nevada          38: Pennsylvania     48: West Virginia \n"
                "9: Florida      19: Maine      29: New Hampshire   39: Rhode Island     49: Wisconsin     \n"
                "10. Georgia     20: Maryland   30: New Jersey      40: South Carolina   50: Wyoming       \n";
        cout << "\n";
        int intVal;
        cin >> intVal;
        
        // Non-integer (incorrect input):
        
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            is2Func();
            if (intVal == 0)
            {
                return 0;
            }
            else if (intVal > 0 && intVal < 51)
            {
                cout << "State: " << states[intVal].state << endl;
                cout << "Capital: " << states[intVal].capital << endl;
                cout << "Area size: " << states[intVal].areaSize << endl;
                cout << "Population size: " << states[intVal].populationSize << endl;
                cout << "\n";
                cin >> intVal;
            }
            else if (intVal < 0 || intVal > 50)
            {
                is2Func();
                if (intVal == 0)
                {
                    return 0;
                }
            }
        }
        
        // 0 (correct input):
        
        while (intVal == 0)
        {
            return 0;
        }
        
        // Integer between 1 and 50 (correct input):
        
        if (intVal > 0 && intVal < 51)
        {
            while (intVal > 0 && intVal < 51)
            {
                cout << "State: " << states[intVal].state << endl;
                cout << "Capital: " << states[intVal].capital << endl;
                cout << "Area size: " << states[intVal].areaSize << endl;
                cout << "Population size: " << states[intVal].populationSize << endl;
                cout << "\n";
                cin >> intVal;
                if (intVal == 0)
                {
                    return 0;
                }
                else if (intVal < 0 || intVal > 50)
                {
                    is2Func();
                    if (intVal == 0)
                    {
                        return 0;
                    }
                }
                else if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    is2Func();
                    if (intVal == 0)
                    {
                        return 0;
                    }
                }
            }
        }
        
        // Integer less than 0 or greater than 50 (incorrect input):
        
        else if (intVal < 0 || intVal > 50)
        {
            is2Func();
            if (intVal == 0)
            {
                return 0;
            }
            else if (intVal > 0 && intVal < 51)
            {
                cout << "State: " << states[intVal].state << endl;
                cout << "Capital: " << states[intVal].capital << endl;
                cout << "Area size: " << states[intVal].areaSize << endl;
                cout << "Population size: " << states[intVal].populationSize << endl;
                cout << "\n";
                cin >> intVal;
            }
            else if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                is2Func();
                if (intVal == 0)
                {
                    return 0;
                }
            }
        }

        return 0;
    }
};

#endif
