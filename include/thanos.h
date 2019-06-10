#ifndef THANOS_H
#define THANOS_H
#include "personagem.h"


//=======================
//======= COMPLETA ======
//=======================

class Thanos: public Personagem {

public:
    Thanos(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();
    void sofre_ataque(const int dano);
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    bool get_vivo();
};

#endif