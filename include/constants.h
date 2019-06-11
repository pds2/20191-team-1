#ifndef INC_20191_TEAM_1_CONSTANTS_H
#define INC_20191_TEAM_1_CONSTANTS_H

#include <string>
#include <map>

struct dado_heroi {
 	std::string _historia;
 	std::string _nome;
    int _pt_vida;
    int _pt_ataque;
    int _pt_defesa;
    dado_heroi(int _pt_vida, int _pt_ataque, int _pt_defesa, std::string _historia, std::string _nome) :
              _historia(_historia), _nome(_nome), _pt_vida(_pt_vida), _pt_ataque(_pt_ataque), _pt_defesa(_pt_defesa) {}
 };

#endif //INC_20191_TEAM_1_CONSTANTS_H
