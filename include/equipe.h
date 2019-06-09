#ifndef Equipe_H
#define Equipe_H

#include <vector>
#include "heroi.h"

class Equipe {

private:
	bool esta_completo;
	int herois_vivos;
	int portador_pedra;

public:
    Equipe();
    std::vector<Heroi > equipe_selecionada;
    void monta_equipe(Equipe& equipe);
    void adiciona_heroi(const int id_heroi);
	void remove_heroi(const int id_heroi);
	void mostra_equipe();

//    void adiciona_heroi(const int id_heroi);
//	void remove_heroi(const int id_heroi);

	//	int quantidade_heroi();

	//Inicio

//   	 std::set<int> get_herois();
//	bool get_Equipe_completo();
//	int get_num_herois_vivos();
//	int get_id_portador_pedra();
	
	//Fim
};

#endif
