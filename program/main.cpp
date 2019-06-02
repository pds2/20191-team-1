#include <iostream>
#include "telas.h"
#include "partida.h"

int main() {

	Telas telas;
	telas.tela_inicial();

	Partida *partida = new Partida();
	partida->set_dificuldade(telas.tela_dificuldade());
	partida->set_time();
	
	//Começa batalha
	//Inicia rodada
	//partida->set_time(telas.tela_personagem);

	
	std::cout<< "Fim de execução! Good Bye!" << std::endl;
    return 0;
}