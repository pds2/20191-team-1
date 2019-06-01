#ifndef BATALHA_H
#define BATALHA_H

#include <bits/stdc++.h>
#include <cenario.h>


using namespace std;

class Batalha {

	private:
		bool turno;
		bool jogo_rolando;
		Cenario cenario;
	
	public:
		Batalha(bool turno, bool jogo_rolando, Cenario cenario);
		bool chama_turno();
		void processa_morte_heroi();
		void troca_cenario();
		void turno_jogador();
		void turno_heroi();

};

#endif