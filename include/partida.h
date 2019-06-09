#ifndef INC_20191_TEAM_1_PARTIDA_H
#define INC_20191_TEAM_1_PARTIDA_H

#include <iostream>
#include "equipe.h"


class Partida{
    char dificuldade;
    Equipe equipe;

public:
    Partida();
    char get_dificuldade();
    void set_dificuldade();
    void roda_partida();


};



#endif
