#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {

    protected:
        //string nome;
        int pt_vida;
        int pt_ataque;
        int pt_defesa;
        bool vivo;
    public:
        Personagem();
        // Personagem(string nome, int pt_vida, int pt_ataque, int pt_defesa);
        int get_pt_vida();
        int get_pt_ataque();
        int get_pt_defesa();
        //string get_name();
        void diminui_vida(const int dano_recebido);
        void realiza_ataque(const int ataque_recebido);
};

#endif