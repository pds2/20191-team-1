#ifndef THANOS_H
#define THANOS_H
#include <string>
#include "personagem.h"

class Thanos: public Personagem{
	public:
		Thanos();
		void realiza_ataque(const int dano_causado);
		void diminui_vida(const int dano_recebido);
};

#endif