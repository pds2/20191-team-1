#ifndef THANOS_H
#define THANOS_H
#include "personagem.h"


class Thanos: public Personagem {

public:
    Thanos(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    void sofre_ataque(const int dano);

    const int realiza_ataque();
};

#endif