#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <bits/stdc++.h>

using namespace std;

class Personagem {

protected:
    string name;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;

public:
    Personagem(string name, int pt_vida, int pt_ataque, int pt_defesa, bool vivo);

    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    string get_name();
    void diminui_vida(int dano_recebido);
    void realiza_ataque(int ataque_recebido);
};

#endif