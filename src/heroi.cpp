#include <cmath>
#include "heroi.h"
#include "personagem.h"
#include "constants.h"

#define BONUS 0.5

/*
 *  @method {Construtor do tipo Herois}
 *  @param {int pt_vida - Pontos de vida do Heroi} 
 *  @param {int pt_ataque - Pontos de ataque do Heroi} 
 *  @param {int pt_defesa - Pontos de defesa do Heroi} 
 *  @param {std::string nome - Nome do heroi} 
 *  @return {void}
*/
Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome),
    bonus_ataque(BONUS)
{}

const int Heroi::realiza_ataque() {
    return this->get_pt_ataque() * gera_inteiro(1, 6);
}


int Heroi::get_ataque_com_bonus(){
	return ceill(this->pt_ataque * (1 + this->bonus_ataque));
}
