#include <iostream>
#include <set>
//#include "heroi.h"
#include "thanos.h"
#include "telas.h"
#include "partida.h"

int main() {

    Telas controle = Telas();
    controle.tela_inicial();

    int opcao = 0;
    do
    {
        std::cin>>opcao;
        if (opcao == 1)
            controle.tela_como_jogar();
        else if (opcao == 2)
            std::cout << "Você selecionou 2 - começar" << std::endl;
        else if (opcao == 3)
            exit (EXIT_SUCCESS);
        else
            std::cout << "Opção invalida, digite novamente" << std::endl;
    }while(opcao != 2);

    // A partir desse ponto, o controle fica com a Classe Partida
    Partida partida = Partida();
    partida.set_dificuldade();

    return 0;
}
