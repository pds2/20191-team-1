#ifndef Equipe_H
#define Equipe_H

#include <set>

class Equipe {

private:

	bool esta_completo;
	int herois_vivos;
	int portador_pedra;
    void mostra_equipe();

public:
    std::set<int> equipe;
    void monta_equipe();
    void adiciona_heroi(const int id_heroi);
	void remove_heroi(const int id_heroi);

	//	int quantidade_heroi();

	//Inicio

//   	 std::set<int> get_herois();
//	bool get_Equipe_completo();
//	int get_num_herois_vivos();
//	int get_id_portador_pedra();
	
	//Fim
};

#endif
