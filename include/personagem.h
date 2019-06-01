#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string.h>
using namespace std;

class Personagem {

protected:
    
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;
    //std::string nome;

public:
    Personagem();

    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
   // string get_name();
    void diminui_vida(int dano_recebido);
    void realiza_ataque(int ataque_recebido);
};

#endif