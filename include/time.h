#ifndef TIME_H
#define TIME_H

#include <vector>
#include "heroi.h"

using namespace std;

class Time {

	private:
		vector<Heroi> herois;
		bool esta_completo;
		int herois_vivos;
		int  portador_pedra;


	public:
		Time();
		void adiciona_heroi();
		void remove_heroi(const int id_heroi);
		void aplica_dano_time(const int id_heroi, const double dano);
		void aplica_bonus_ataque();
		void recupera_vida_time();
		void troca_pedra(const int id_destinatario);
    
};

#endif