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
		Vilao Thanos;
		Batalha batalha;
		bool ganhador;

	public:
		Partida(Time time, Vilao Thanos, Batalha batalha);
		void set_taxa_recuperacao(const char dificuldade);
		void roda_partida();
		void get_taxa_recuperacao();
};

#endif