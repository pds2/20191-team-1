#ifndef THANOS_H
#define THANOS_H
#include "personagem.h"


//=======================
//======= COMPLETA ======
//=======================


using namespace std;

class Thanos: public Personagem {

public:
    Thanos();
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    bool get_vivo();
};

#endif