#ifndef HEROI_H
#define HEROI_H
#include "personagem.h"

//=======================
//======= COMPLETA ======
//=======================

class Heroi : public Personagem {

private:
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;
    double bonus_ataque;

public:
    Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    
    // polimorfismos
    const int realiza_ataque();
    int get_ataque_com_bonus();

};

#endif