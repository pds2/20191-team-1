#include "heroi.h"

Heroi::Heroi() {

}

int Heroi::get_ataque() {
	return this->pt_ataque;
}

int Heroi::get_ataque_com_bonus() {
	return this->pt_ataque * (1 + this->bonus_ataque);
}

bool Heroi::get_vivo() {
	return this->vivo;
}



