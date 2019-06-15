#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem {

protected:
    std::string nome;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;

public:
    Personagem(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    bool get_vivo();
    std::string get_name();
    void diminui_vida(const int dano_recebido);

    virtual const int realiza_ataque() = 0;
};

#endif