#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
using namespace std;

class Garage;

class Car {

    private:
    int horsepower;
    int weight;
    string model;
    double powerLevel;


    public:
    Car();
    int getHorsepower();
    void setHorsepower(const int& userinput);
    int getWeight();
    void setWeight(const int& userinput);
    string getModel();
    void setModel(const string& userinput);
    void setPowerLevel();
    double getPowerLevel();
    void modifyHorsepower(const int& userinput);
    void modifyPowerLevel(const int& userinput);

};




#endif
