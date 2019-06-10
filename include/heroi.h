#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "randomize.h"
#include "personagem.h"

class Heroi : public Personagem {

private:
    std::string _nome;
    int _pt_vida;
    int _pt_ataque;
    int _pt_defesa;
    bool _vivo;
    double bonus_ataque;


public:
    Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();
    int get_pt_vida() const;
    int get_pt_ataque() const;
    int get_pt_defesa() const;
    std::string get_nome() const;
    bool get_vivo() const;
};

#endif