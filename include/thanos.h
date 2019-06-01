#ifndef THANOS_H
#define THANOS_H
#include <string>
#include "personagem.h"

class Thanos: public Personagem{

private:
   

public:
	Thanos();
	void realiza_ataque(int dano_causado);
	void diminui_vida(int dano_recebido)
};

#endif