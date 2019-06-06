#include "partida.h"

void Partida::set_dificuldade(){
    system("clear");
    char opcao;
    //tela_dificuldade();
    do{
        //todo - colocar a tela dificuldade quando estiver pronta
        cout << "Aqui vem o texto da tela dificuldade. Digite F, M ou D"<<endl;
        cin >> opcao;
        cout << "você digitou: " << opcao << endl;
        opcao = tolower(opcao);
        cout << "você digitou: " << opcao << endl;
        if (opcao != 'f' && opcao != 'm' && opcao != 'd')
            cout << "Por favor, digite uma opção válida" << endl;
    }while(opcao != 'f' && opcao != 'm' && opcao != 'd');

    this->dificuldade = opcao;
}


char Partida::get_dificuldade(){
    return this->dificuldade;
}

