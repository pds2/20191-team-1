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
    //Heroi(int pt_vida, int pt_ataque, int pt_defesa);

    // polimorfismos
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();

    int get_ataque_com_bonus();
    bool get_vivo();

};

#endif