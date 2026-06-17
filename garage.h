#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include "car.h"
#include "racelogic.h"

using namespace std;

class Garage {

    private:
    map<int, Car> database;
    int computerChoice;
    int userChoice;
    int ID;
 
    public:
    Garage();
    void setUserChoice(const int& userinput);
    int getUserChoice();
    string displayComputerChoice();
    int getComputerChoice();
    void setComputerChoice();
    map<int, Car> getDatabase();
    void setDatabase(Car &carObj);
    Car& getComputerObj();
    Car& getUserCarObj(RaceLogic &raceObj);

};

#endif