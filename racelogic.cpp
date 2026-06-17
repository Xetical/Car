#include "car.h"
#include "garage.h"
#include "racelogic.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <thread>
#include <chrono>

using namespace std;


RaceLogic::RaceLogic() {

    raceWon = false;
    userCarChoice = -1;
    modifier = rand() % 30 + 1;

}

void RaceLogic::setModifier(Car &computerObj, Car &userObj) {

    int computerBoost = rand() % 30 + 1;
    int userBoost = rand() % 30 + 1;
    
    cout << "Modifier starting.." << endl << endl;
    this_thread::sleep_for(chrono::seconds(3));
    computerObj.modifyPowerLevel(computerBoost);
    userObj.modifyPowerLevel(userBoost);
    cout << "Modified Computer power level: " <<  computerObj.getPowerLevel() << endl;
    cout << "Modified User power level: " << userObj.getPowerLevel() << endl;

}


void RaceLogic::setRaceWon(Car &computerObj, Car &userObj, Garage &garageObj) {


    cout << "Ending Race.. ";

    if (computerObj.getPowerLevel() > userObj.getPowerLevel()) {
        cout << endl << endl;
        cout << "The computer won with a power level of " << computerObj.getPowerLevel() << endl;
        raceWon = true;
    }
    else {
        cout << endl << endl;
        raceWon = false;
        cout << "You won with a power level of " << userObj.getPowerLevel() << endl;
    }

}




bool RaceLogic::getRaceWon() {
    
    return raceWon;

}

void RaceLogic::setUserCarChoice(Garage &garageObj) {
    cout << "Enter your vehicle choice: " << endl;
    cin >> userCarChoice;
    if (userCarChoice == garageObj.getComputerChoice()) {
        cout << "Input must be different than the Computer Choice." << endl << "Exitting.." << endl;
        exit(0);
    } else if (cin.fail()) {
        cout << "Invalid Input." << endl << "Exitting.." << endl;
        exit(0);
    }
    
}

void RaceLogic::displayOptions(Garage &garageObj) {

    cout << "Choose a vehicle from the list below: " << endl;
for (pair<const int, Car> x : garageObj.getDatabase()) {
    cout << "[" << x.first << "]: " << x.second.getModel() << endl;
}


}

int RaceLogic::getUserChoice() {
    return userCarChoice;
}

Car RaceLogic::getUserObj(Garage &garageObj) {
    return ((*garageObj.getDatabase().find(userCarChoice)).second);
}



void RaceLogic::displayCurrentStats(Car& ComputerObj, Car& userObj) {

    cout << endl << endl;

    cout << "Current Game Stats:" << endl;
    cout << "Computer Power Level: " << ComputerObj.getPowerLevel() << endl;
    cout << "User Power Level: " << userObj.getPowerLevel() << endl;



}