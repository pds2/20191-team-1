#ifndef INC_20191_TEAM_1_PARTIDA_H
#define INC_20191_TEAM_1_PARTIDA_H

#include <iostream>
#include "equipe.h"
#include "thanos.h"
#include "randomize.h"

class Partida {

private:
    char dificuldade;
    bool turno;
    bool esta_ativo;
    Equipe equipe;
    Thanos *thanos;

public:
    Partida();
    void roda_partida();
    void turno_jogador();
    void turno_thanos();
    char get_dificuldade();
    void set_dificuldade();
	bool get_turno();
	void set_turno(bool turno);
	bool get_esta_ativo();
	void set_esta_ativo(bool esta_ativo);
};



#endif
