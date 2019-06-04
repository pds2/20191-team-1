#ifndef PARTIDA_H
#define PARTIDA_H

#include "time.h"
#include "thanos.h"
#include "batalha.h"
#include "telas.h"
#include "partida.h"
#include <iostream>

using namespace std;

class Partida {

	private:
		char dificuldade;
		bool ganhador;
		double taxa_recuperacao;
		Time *time;
		Thanos *thanos;
		Batalha *batalha;


	public:
		Partida();
		void roda_partida();
		void set_dificuldade(char dificuldade);
		void set_time();
		void set_thanos(Thanos *thanos);
		void set_batalha(Batalha *batalha);
		double get_taxa_recuperacao();
		char get_dificuldade();
};

#endif