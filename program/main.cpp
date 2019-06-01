#include <iostream>
#include "telas.h"
#include "partida.h"

int main(){
	Telas telas;
	telas.tela_inicial();

	Partida *partida = new Partida();
	partida->set_dificuldade(telas.tela_dificuldade());
	//Cout para verificaçao se foi setado também a taxa de recuperaçao junto com dificuldade
	std::cout<<"Taxa de recuperação: " partida->get_taxa_recuperacao()<<endl;
	partida->set_time(telas.tela_personagem);

	//Todoist
	std::cout<< "Fim de execução! Good Bye!" << std::endl;
    return 0;
}