#ifndef HERO_H
#define HERO_H
#include <string>
#include "personage.h"

class Hero: public Personage{

private:
    std::string name;
    int force;
    int agility;
    float life;

public:
    Hero(std::string, int force, int agility, int life);

    int get_life();
    int get_agility();
    int get_force();
    std::string get_name();
};

#endif