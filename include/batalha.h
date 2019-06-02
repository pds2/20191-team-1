#ifndef BATALHA_H
#define BATALHA_H

#include <string.h>
#include <cenario.h>


using namespace std;

class Batalha {

	private:
		bool turno;
		bool jogo_rolando;
		Cenario *cenario;
	
	public:
		Batalha();
		void set_cenario();
		void processa_morte_heroi();
		void troca_cenario();
		void turno_jogador();
		void turno_thanos();

};

#endif
