// Interactive America
// StatesClass.h
// Jordan Pounds

#ifndef StatesClass_h
#define StatesClass_h

#include <iostream>
#include "InfoSelection.h"
using namespace std;

class StatesClass
{
public:    
    struct StatesInfo
    {
        string state;
        string capital;
        long areaSize;              // Square miles.
        long populationSize;
    };
    
    StatesInfo const states[51] =
    {
        { "NULL", "NULL", 0, 0 },
        { "Alabama", "Montgomery", 52419, 4863300 },
        { "Alaska", "Juneau", 663268, 739795 },
        { "Arizona", "Phoenix", 113990, 7016270 },
        { "Arkansas", "Little Rock", 53180, 3004279 },
        { "California", "Sacramento", 163696, 39536653 },
        { "Colorado", "Denver", 104094, 5607154 },
        { "Connecticut", "Hartford", 5567, 3588184 },
        { "Delaware", "Dover", 1982, 961939 },
        { "Florida", "Tallahassee", 65755, 21312211 },
        { "Georgia", "Atlanta", 59425, 10429379 },
        { "Hawaii", "Honolulu", 10931, 1427538 },
        { "Idaho", "Boise", 83797, 1716943 },
        { "Illinois", "Springfield", 57914, 12802023 },
        { "Indiana", "Indianapolis", 36418, 6666818 },
        { "Iowa", "Des Moines", 56272, 3145711 },
        { "Kansas", "Topeka", 82278, 2913123 },
        { "Kentucky", "Frankfort", 40409, 4454189 },
        { "Louisiana", "Baton Rouge", 52378, 4684333 },
        { "Maine", "Augusta", 35385, 1335907 },
        { "Maryland", "Annapolis", 12407, 6052177 },
        { "Massachusetts", "Boston", 10565, 6859819 },
        { "Michigan", "Lansing", 96716, 9962311 },
        { "Minnesota", "Saint Paul", 86936, 5576606 },
        { "Mississippi", "Jackson", 48430, 2984100 },
        { "Missouri", "Jefferson City", 69714, 6113532 },
        { "Montana", "Helena", 147040, 1050493 },
        { "Nebraska", "Lincoln", 77358, 1920076 },
        { "Nevada", "Carson City", 110577, 2998039 },
        { "New Hampshire", "Concord", 9349, 1342795 },
        { "New Jersey", "Trenton", 8722, 9032872 },
        { "New Mexico", "Santa Fe", 121699, 2088070 },
        { "New York", "Albany", 54555, 19849399 },
        { "North Carolina", "Raleigh", 53819, 10273419 },
        { "North Dakota", "Bismarck", 70762, 642200 },
        { "Ohio", "Columbus", 44825, 11536504 },
        { "Oklahoma", "Oklahoma City", 69899, 3751351 },
        { "Oregon", "Salem", 98466, 3831073 },
        { "Pennsylvania", "Harrisburg", 46055, 12702379 },
        { "Rhode Island", "Providence", 1214, 1048319 },
        { "South Carolina", "Columbia", 32020, 5024369 },
        { "South Dakota", "Pierre", 77163, 754844 },
        { "Tennessee", "Nashville", 42143, 6495978 },
        { "Texas", "Austin", 268581, 27000000 },
        { "Utah", "Salt Lake City", 84876, 2763885 },
        { "Vermont", "Montpelier", 9620, 625741 },
        { "Virginia", "Richmond", 42793, 7567465 },
        { "Washington", "Olympia", 71342, 6724540 },
        { "West Virginia", "Charleston", 24244, 1808344 },
        { "Wisconsin", "Madison", 65498, 5627967 },
        { "Wyoming", "Cheyenne", 97818, 563626 }
    };
};

#endif
