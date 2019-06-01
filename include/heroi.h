#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "personagem.h"

using namespace std;

class Heroi : public Personagem {

	private:
		int id;
		double bonus_ataque;
	

	public:
		Heroi();
	    void realiza_ataque();
		void get_bonus_ataque();
		void get_vivo();
};

#endif