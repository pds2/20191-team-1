#include "partida.h"
#include "telas.h"

void Partida::set_dificuldade(){
    char opcao;
    Telas telas;

    try{
        opcao = telas.tela_dificuldade();
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

