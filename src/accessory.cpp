#include "accessory.h"

/*
* Constructor of Accessory
*/
Accessory::Accessory(std::string name, int quantity, int type, float power){
    this->name = name;
    this->get_quantity = quantity;
    this->get_type = type;
    this->get_power = power;
}

/*
* Return the power of Accessory
*/
int Accessory::get_power(){
    return this->power;
}

/*
* Return the quantity of Accessorys
*/
int Accessory::get_quantity(){
    return this->quantity;
}

/*
* Return the type of Accessory
*/
int Accessory::get_type(){
    return this->type;
}

/*
* Return the name of Accessory
*/
std::string Accessory::get_name(){
    return this->name;
}