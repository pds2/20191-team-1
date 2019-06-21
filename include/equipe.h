#ifndef Equipe_H
#define Equipe_H

#include <vector>
#include <string>
#include "heroi.h"

/**
 * Definição do contrato da classe Equipe.h
 */

class Equipe {

private:
	bool esta_completo;
	int herois_vivos;
	int portador_pedra;
	std::vector<Heroi> equipe_selecionada;

public:
    Equipe();
	void monta_equipe(Equipe& equipe);//
    void adiciona_heroi(const int id_heroi);
	void remove_heroi(const int id_heroi);
	void mostra_equipe();//
	int sofre_ataque(const int dano);//
	int realiza_ataque();//
	int get_num_herois_vivos();
	void set_portador_pedra(const int id_heroi);
 	bool portador_pedra_esta_vivo();
	int get_id_portador_pedra();
	int get_herois_selecionados();//Mudar nome do metodo
	std::string get_nome_heroi(const int id_heroi);//
	bool get_status_heroi(const int id_heroi);//
	bool get_equipe_completa();

};

#endif
