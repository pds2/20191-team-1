#ifndef TIME_H
#define TIME_H

#include <set>

class Time {

private:
	std::set<int> herois;
	bool esta_completo;
	int herois_vivos;
	int portador_pedra;

public:
	Time();
	~Time();
	void adiciona_heroi(const int id_heroi);
	void remove_heroi(const int id_heroi);
	int quantidade_heroi();
	void aplica_dano_time(const int id_heroi, const double dano);
	void aplica_bonus_ataque();
	void recupera_vida_time();
	void troca_pedra(const int id_destinatario);
 

    //Sugestao de metodos - Ewerton   
    //Inicio

    std::set<int> get_herois();
	bool get_time_completo();
	int get_num_herois_vivos();
	int get_id_portador_pedra();
	
	//Fim
};

#endif
