#ifndef HEROI_H
#define HEROI_H

#include <bits/stdc++.h>
#include "personagem.h"

using namespace std;

class Heroi : public Personagem {

	private:
		int id;
		double bonus_ataque;
	

	public:
		Heroi(int id);
	    void realiza_ataque();
		void get_bonus_ataque();
		void get_vivo();
};

#endif