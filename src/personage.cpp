#include "personage.h"

/*
* Constructor of Personage
*/
Personage::Personage(std::string name, int force, int agility, int life){
    this->name = name;
    this->force = force;
    this->agility = agility;
    this->life = life;
}

/*
* Return the life of Personage
*/
int Personage::get_life(){
    return this->life;
}

/*
* Return the agility of Personage
*/
int Personage::get_agility(){
    return this->agility;
}

/*
* Return the force of Personage
*/
int Personage::get_force(){
    return this->force;
}

/*
* Return the name of Personage
*/
std::string Personage::get_name(){
    return this->name;
}