#include <cmath>
#include "heroi.h"
#include "personagem.h"
#include "constants.h"

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome),
    bonus_ataque(0.5)
{}

const int Heroi::realiza_ataque() {
    return this->get_pt_ataque() * gera_inteiro(1, 6);
}

int Heroi::get_ataque_com_bonus(){
	return ceill(this->pt_ataque * (1 + this->bonus_ataque));
}
