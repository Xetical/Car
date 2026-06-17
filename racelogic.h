#ifndef RACELOGIC_H
#define RACELOGIC_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include "car.h"
#include "garage.h"

using namespace std;

class RaceLogic {

    private:
    bool raceWon;
    int userCarChoice;
    int modifier;

    
    public:
    RaceLogic();
    void setRaceWon(Car &computerObj, Car &userObj, Garage &garageObj);
    bool getRaceWon();
    void displayOptions(Garage &garageObj);
    void setUserCarChoice(Garage &garageObj);
    int getUserChoice();
    Car getUserObj(Garage &garageObj);
    void setModifier(Car &computerObj, Car &userObj);
    void displayCurrentStats(Car &computerObj, Car &userObj);
    


};
#endif