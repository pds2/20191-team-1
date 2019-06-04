#ifndef THANOS_H
#define THANOS_H

#include "personagem.h"

using namespace std;

class Thanos: public Personagem {
	public:
		Thanos();
        void diminui_vida(const int dano_recebido);
        const int realiza_ataque();
};

#endif