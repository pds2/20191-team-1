#ifndef TIME_H
#define TIME_H

#include <set>
#include "heroi.h"

using namespace std;

class Time {

	private:
		set<int> herois;
		bool esta_completo;
		int herois_vivos;
		int  portador_pedra;

	public:
		Time();
		void adiciona_heroi(int id_heroi);
		void remove_heroi(int id_heroi);
		int quantidade_heroi();
		void aplica_dano_time(const int id_heroi, const double dano);
		void aplica_bonus_ataque();
		void recupera_vida_time();
		void troca_pedra(const int id_destinatario);
    
};

#endif