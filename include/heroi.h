#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "personagem.h"

//=======================
//======= COMPLETA ======
//=======================

class Heroi : public Personagem {

private:
    std::string nome;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;
    double bonus_ataque;


public:
    Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);

    // polimorfismos
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();
    int get_pt_vida() const;
    int get_pt_ataque() const;
    int get_pt_defesa() const;
    std::string get_nome() const;

    int get_ataque_com_bonus();
    bool get_vivo() const;

};

#endif