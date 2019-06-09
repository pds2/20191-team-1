#include "partida.h"

void Partida::set_dificuldade(){
    system("clear");
    char opcao;
    //tela_dificuldade();
    try{
        //todo - colocar a tela dificuldade quando estiver pronta
        std::cout << "Aqui vem o texto da tela dificuldade. Digite F, M ou D"<< std::endl;
        std::cin >> opcao;
        opcao = tolower(opcao);
        std::cout << "você digitou: " << opcao << std::endl;
        
        if (opcao != 'f' && opcao != 'm' && opcao != 'd')  
            throw std::invalid_argument("Opção Inválida");
        
    }catch(const std::invalid_argument& e){
        std::cout << "Por favor, digite uma opção válida" << std::endl; //Não ta aparecendo esse cout por causa do system("clear")
        Partida::set_dificuldade();
    }

    this->dificuldade = opcao;
}


char Partida::get_dificuldade(){
    return this->dificuldade;
}

