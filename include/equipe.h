#ifndef Equipe_H
#define Equipe_H

#include <set>

class Equipe {

private:
	std::set<int> herois;
	bool esta_completo;
	int herois_vivos;
	int portador_pedra;

public:
	Equipe();
	void adiciona_heroi(const int id_heroi);
	void remove_heroi(const int id_heroi);
	int quantidade_heroi();
	void aplica_dano_equipe(const int id_heroi, const double dano);
	void aplica_bonus_ataque();
	bool get_equipe_completa();
	void recupera_vida_Equipe();
	void troca_pedra(const int id_destinatario);
 

	//Sugestao de metodos - Ewerton   
	//Inicio

   	std::set<int> get_herois();
	int get_num_herois_vivos();
	int get_id_portador_pedra();
	
	//Fim
};

#endif
