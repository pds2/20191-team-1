#include "partida.h"
//#include "thanos.h"

//Partida::Partida(){
////    this->thanos = Thanos(200, 10, 5, "Thanos");
//}


void Partida::set_dificuldade(){
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

