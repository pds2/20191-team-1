#ifndef PERSONAGE_H
#define PERSONAGE_H
#include <string>

class Personage{

protected:
    std::string name;
    int force;
    int agility;
    float life;

public:
    Personage(std::string, int force, int agility, int life);

    int get_life();
    int get_agility();
    int get_force();
    std::string get_name();
};

#endif