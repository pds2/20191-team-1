#include <cmath>
#include "heroi.h"
#include "personagem.h"
#include "constants.h"

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome){}

const int Heroi::realiza_ataque() {
    int dado = gera_inteiro(1, 6);
    int dano = get_pt_ataque();
    return dado*dano;
}

int Heroi::get_ataque_com_bonus(){
	return this->pt_ataque * ceill(1 + this->bonus_ataque);
}
