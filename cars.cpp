#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "car.h"
#include <unordered_set>
#include <map>
#include <cctype>
#include "garage.h"



 
Car::Car() {


}

Car::Car(int hp, int w, string carModel) {

    horsepower = hp;
    weight = w;
    model = carModel;

    setPowerLevel();


}
void Car::setModel(const string& userinput) {
    string input = userinput;
    for (char& x : input) {
       x = toupper(x);
    }
    model = input;
}

void Car::setPowerLevel() {

    powerLevel = (horsepower/weight) + rand() % 30;

}

double Car::getPowerLevel() {

    return powerLevel;

}

string Car::getModel() {
    return model;
}
int Car::getHorsepower() {

    return horsepower;

}
void Car::setHorsepower(const int& userinput) {

    horsepower = userinput;

}
void Car::modifyHorsepower(const int& userinput) {

    horsepower += userinput;


}
int Car::getWeight() {

    return weight;

}
void Car::setWeight(const int& userinput) {

    weight = userinput;

}


void Car::modifyPowerLevel(const int& userinput) {

    powerLevel += userinput;

}








