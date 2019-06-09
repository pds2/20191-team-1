#include "partida.h"
#include "equipe.h"

Partida::Partida(){
    this->equipe = Equipe();
}


void Partida::roda_partida(){
    this->equipe.monta_equipe();
}


void Partida::set_dificuldade(){
    system("clear");
    char opcao;
    do{
        //todo - colocar a tela dificuldade quando estiver pronta
        //tela_dificuldade();
        std::cout<< "Selecione a dificuldade do jogo: "<< std::endl;
        std::cout<< "Digite F para Facil"<< std::endl;
        std::cout<< "Digite M para Medio"<< std::endl;
        std::cout<< "Digite D para Dificil"<< std::endl;
        std::cin >> opcao;
        std::cout << "você digitou: " << opcao << std::endl;
        opcao = tolower(opcao);
        std::cout << "você digitou: " << opcao << std::endl;
        if (opcao != 'f' && opcao != 'm' && opcao != 'd')
            std::cout << "Por favor, digite uma opção válida" << std::endl;
    }while(opcao != 'f' && opcao != 'm' && opcao != 'd');

    this->dificuldade = opcao;
}


char Partida::get_dificuldade(){
    return this->dificuldade;
}

