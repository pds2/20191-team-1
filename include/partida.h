#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
#include "time.h"
#include "thanos.h"
#include "batalha.h"

class Partida {

	private:
		char dificuldade;
		bool ganhador;
		double taxa_recuperacao;
		Time *time();
		Thanos *thanos();
		Batalha *batalha();
		

	public:
		Partida();
		void roda_partida();
		void set_dificuldade(char dificuldade);
		double get_taxa_recuperacao();
		char get_dificuldade();
};

#endif