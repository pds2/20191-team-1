#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "personagem.h"

using namespace std;

//class Heroi: public Personagem {
class Heroi{
//todo: resolver essa herança

private:
    //int id; //todo: decidir se vai precisar controlar o ID
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;
    double bonus_ataque;

public:
    //Heroi(int pt_vida, int pt_ataque, int defesa, string name, double bonus_ataque);
    Heroi(int pt_vida, int pt_ataque, int defesa);

    // polimorfismos
    void diminui_vida(const int dano_recebido);
    const int realiza_ataque();

    //extensões
    int get_ataque_com_bonus();
    bool get_vivo();
};

#endif