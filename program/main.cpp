#include <iostream>
#include "telas.h"
#include "partida.h"

int main(){
	Telas telas;
	telas.tela_inicial();

	Partida *partida = new Partida();
	partida->set_dificuldade(telas.tela_dificuldade());
	std::cout<< partida->get_taxa_recuperacao();

	//Todoist
	std::cout<< "Main vazio !, Teste!" << std::endl;
    return 0;
}