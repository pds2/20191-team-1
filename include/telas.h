#ifndef TELAS_H
#define TELAS_H

#include "time.h"

class Telas {

	public:
		void tela_inicial();
		void tela_como_jogar();
		char tela_dificuldade();
		void tela_personagem();
		void tela_resultado_ataque_jogador();
		void tela_descricao_persoangem(int id);
		void tela_morte_heroi_sem_pedra();
		void tela_batalha();
		void tela_vitoria_thanos();
		void tela_resultado_ataque_thanos();
		void tela_vitoria_jogador();

};

#endif