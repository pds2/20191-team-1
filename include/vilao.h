#ifndef VILAO_H
#define VILAO_H
#include <string>

class Vilao {

private:
    std::string name;
    int force;
    int agility;
    float life;

public:
    Vilao(std::string, int force, int agility, int life);

    int get_life();
    int get_agility();
    int get_force();
    std::string get_name();
};

#endif