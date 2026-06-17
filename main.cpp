
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "car.h"
#include <unordered_map>
#include <map>
#include "garage.h"
#include "racelogic.h"
using namespace std;

int main() {
    srand(time(0));
    Garage myGarage;
    Car myCar;
    RaceLogic myRace;
    int userinput;
    char userChoice;

    Car Lexus(300, 3000, "ES 300H");
    myGarage.setDatabase(Lexus);

    
    Car Ferrari(800, 2000, "Ferrari California");
    myGarage.setDatabase(Ferrari);

    Car BMW(300, 3000, "M4 Competition");
    myGarage.setDatabase(BMW);
    cout << endl;
    cout << endl << endl;

    cout << "Game starting.." << endl;


    cout << "The power level of a BMW is " << 
    BMW.getPowerLevel() << endl << "While the power level of a Lexus is "
    << Lexus.getPowerLevel() << endl << endl;

    myGarage.setComputerChoice();




    cout << "The computer chose: " << myGarage.displayComputerChoice() << endl << endl;


    myRace.displayOptions(myGarage);
    myRace.setUserCarChoice(myGarage);
    myRace.getUserObj(myGarage);

    myRace.displayCurrentStats(myGarage.getComputerObj(), myGarage.getUserCarObj(myRace));

        cout << "Would you like to set a modifier? y/n" << endl;
        cin >> userChoice;

        if (userChoice == 'y' || userChoice == 'Y') {
            
            myRace.setModifier(myGarage.getComputerObj(), myGarage.getUserCarObj(myRace));
        }
    
    
    myRace.setRaceWon(myGarage.getComputerObj(), myGarage.getUserCarObj(myRace), myGarage);




}



