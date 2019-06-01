#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
#include "time.h"
#include "thanos.h"
#include "batalha.h"

class Partida {

	private:
		char dificuldade;
		double taxa_recuperacao;
		Time time;
		Thanos thanos;
		Batalha batalha;
		bool ganhador;

	public:
		Partida();
		void roda_partida();
		void set_dificuldade(char dificuldade);
		void get_taxa_recuperacao();
};

#endif