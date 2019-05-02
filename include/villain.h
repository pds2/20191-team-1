#ifndef VILLAIN_H
#define VILLAIN_H
#include <string>
#include "personagem.h"

class Villain: public Personagem{

private:
    std::string name;
    int force;
    int agility;
    float life;

public:
    Villain(std::string, int force, int agility, int life);

    int get_life();
    int get_agility();
    int get_force();
    std::string get_name();
};

#endif