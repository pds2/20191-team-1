#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "personagem.h"



class Heroi: public Personagem {

	private:
		int id;
		double bonus_ataque;
	

	public:
		Heroi();
		int get_ataque();
		int get_ataque_com_bonus();
		bool get_vivo();
};

#endif