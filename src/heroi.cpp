#include <cmath>
#include <iostream>
#include "heroi.h"
#include "personagem.h"
#include "constants.h"

; //todo descobrir pq tá pedindo esse ; aqui!!

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem(pt_vida, pt_ataque, pt_defesa, nome),
    bonus_ataque(0.5)
{}

const int Heroi::realiza_ataque(){
    //TODO
    double dano_realizado = 10.0;
    return dano_realizado;
}

int Heroi::get_ataque_com_bonus() {
    std::cout << this->pt_ataque << std::endl;
	return this->pt_ataque * ceill(1 + this->bonus_ataque);
}