#include <iostream>
#include <set>
#include "heroi.h"
#include "thanos.h"
#include "telas.h"
#include "partida.h"

int main() {

//    tela_inicial();

    Heroi heroi= Heroi(80,20,5,"Capitã Marvel");
    std::cout << heroi.get_nome() << std::endl;

//    int opcao;
//    do
//    {
//        std::cin>>opcao;
//        if (opcao == 1)
//            tela_como_jogar();
//        else if (opcao == 2)
//            std::cout << "Você selecionou 2 - começar" << std::endl;
//        else if (opcao == 3)
//            exit (EXIT_SUCCESS);
//        else
//            std::cout << "Opção invalida, digite novamente" << std::endl;
//    }while(opcao != 2);
//
//
//
//    Partida partida = Partida();
//    partida.set_dificuldade();
//    partida.roda_partida();

    return 0;
}
