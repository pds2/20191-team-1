#ifndef ACCESSORY_H
#define ACCESSORY_H
#include <string>

class Accessory{

private:
    std::string name;
    int type;
    int quantity;
    float power;

public:
    Accessory(std::string, int type, int quantity, float power);

    int get_type();
    int get_quantity();
    int get_power();
    std::string get_name();
};

#endif