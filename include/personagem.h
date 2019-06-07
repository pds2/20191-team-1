#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <string>

//=======================
//======= COMPLETA ======
//=======================

using namespace std;

class Personagem {

protected:
    string nome;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;

public:
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    string get_name();
    void diminui_vida(const unsigned int dano_recebido);
    virtual const int realiza_ataque() = 0;
};

#endif