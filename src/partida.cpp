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
    //tela_dificuldade();
    do{
        //todo - colocar a tela dificuldade quando estiver pronta
        std::cout << "Aqui vem o texto da tela dificuldade. Digite F, M ou D"<< std::endl;
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

