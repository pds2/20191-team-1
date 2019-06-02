#include <iostream>
#include "telas.h"
#include "partida.h"

int main(){
	Telas telas;
	telas.tela_inicial();

	Partida *partida = new Partida();
	partida->set_dificuldade(telas.tela_dificuldade());
	telas.tela_personagem();
	//partida->set_time();
	//Proxima parte setTime
	//Começa batalha
	//Inicia rodada
	//partida->set_time(telas.tela_personagem);

	
	std::cout<< "Fim de execução! Good Bye!" << std::endl;
    return 0;
}