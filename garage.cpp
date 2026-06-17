#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "car.h"
#include <unordered_set>
#include <map>
#include <cctype>
#include "garage.h"
#include "racelogic.h"



Garage::Garage() {
    ID = 0;


}
string Garage::displayComputerChoice() {
    
   return database.find(computerChoice)->second.getModel();
}

void Garage::setComputerChoice() {
    computerChoice = rand() % database.size();
}

int Garage::getComputerChoice() {
    return computerChoice;
}

Car& Garage::getComputerObj() {

    return database.find(computerChoice)->second;

}




map<int, Car> Garage::getDatabase() {
    
    return database;
}
void Garage::setDatabase(Car &carObj) {
    for (pair<const int, Car> &x: database) {
        if (carObj.getModel() == x.second.getModel()) {
            cout << "Input already exists: " << x.second.getModel();
            return;
        }
    }
    database[ID] = carObj;
    ID++;
    
}

void Garage::setUserChoice(const int& userinput) {
    userChoice = userinput;
}


int Garage::getUserChoice() {
    return userChoice;
}


Car& Garage::getUserCarObj(RaceLogic &raceObj) {

    return (*database.find(raceObj.getUserChoice())).second;
    

}