#ifndef HEROI_H
#define HEROI_H


#include "personagem.h"

using namespace std;

class Heroi : public Personagem {
//class Heroi{
//todo: resolver essa herança

private:
    //int id; //todo: decidir se vai precisar controlar o ID
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;
    double bonus_ataque;

public:
    Heroi(int pt_vida, int pt_ataque, int pt_defesa, string nome);
    Heroi(int pt_vida, int pt_ataque, int pt_defesa);

    // polimorfismos
    void diminui_vida(const unsigned int dano_recebido);
    const int realiza_ataque();

    //extensões
    int get_ataque_com_bonus();
    bool get_vivo();

    // Inicio Gets alternativos 
    /*
     * Avaliar se é melhor implementar na interface ou criar um tipo abastrado
    */
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();

    // FIm Gets alternativos

};

#endif