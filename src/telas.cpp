// --------------------------------------------------------------------------------------------
// ASCII arts were generated with http://patorjk.com/software/taag/#p=display&f=Graffiti&t=
// --------------------------------------------------------------------------------------------

#include "telas.h"

using namespace std;

void Telas::tela_inicial(){
    //Quem chama tela: main()

    system("clear");
    cout << "\n"
            " _____          _                             _               _____ _                           \n"
            "/__   \\___   __| | ___  ___    ___ ___  _ __ | |_ _ __ __ _  /__   \\ |__   __ _ _ __   ___  ___ \n"
            "  / /\\/ _ \\ / _` |/ _ \\/ __|  / __/ _ \\| '_ \\| __| '__/ _` |   / /\\/ '_ \\ / _` | '_ \\ / _ \\/ __|\n"
            " / / | (_) | (_| | (_) \\__ \\ | (_| (_) | | | | |_| | | (_| |  / /  | | | | (_| | | | | (_) \\__ \\\n"
            " \\/   \\___/ \\__,_|\\___/|___/  \\___\\___/|_| |_|\\__|_|  \\__,_|  \\/   |_| |_|\\__,_|_| |_|\\___/|___/\n"
            "                                                                                                " << endl;

    cout<<"=============================="<<endl;
    cout<<"Bem vindo a TODOS CONTRA THANOS!\n"
          "um mini jogo desenvolvido para a disciplina Programação e Desenvolvimento de Software\n\n"
    <<endl;

    cout<<"MENU"<<endl;
    cout<<"Aperte 1 - Como jogar"<<endl;
    cout<<"Aperte 2 - Iniciar o jogo"<<endl;
    cout<<"Aperte 3 - Sair"<<endl;
    cout<<"\nOpção: ";

}

void Telas::tela_como_jogar(){
    system("clear");

    cout<< "====== COMO JOGAR ====="<<endl;
    cout<< "\n";
    cout<<"Seu objetivo é derrotar o poderoso Thanos antes que ele pegue a pedra do poder. "<<endl;
    cout<<"Com o controle de 5 grandes herois, você poderar atacar e alterar a posse da  pedra. "<<endl;
    cout<<"Planeje suas açoes e salve a humanidade! Aperte qualquer tecla para continuar"<<endl;

    // =========MENU=============
    cout<<"MENU"<<endl;
    cout<<"Aperte 1 - Voltar à Tela Inicial"<<endl;
    cout<<"Aperte 2 - Iniciar o jogo"<<endl;
    cout<<"Aperte 3 - Sair"<<endl;
    cout<<"\nOpção: ";
    int opcao;
    cin>>opcao;
    if(opcao == 1){
        tela_inicial();

    }else if (opcao == 2){
        cout << "Você selecionou 2 - começar" << endl;
        tela_dificuldade();
    }else if (opcao == 3){
        system("exit");
    }else{
        cout<<"Opção invalida, digite novamente"<<endl;
    }
}



void Telas::tela_dificuldade() {
    system("clear");
    cout<<"Selecione a dificuldade do jogo"<<endl;
    cout<<"Digite F para Facil"<<endl;
    cout<<"Digite M para Medio"<<endl;
    cout<<"Digite D para Dificil"<<endl;
    char opcao;
    cin>>opcao;
    opcao = toupper(opcao);
    while(opcao != 'F' && opcao != 'M' && opcao != 'D'){
        cout<<"Opcao invalida, favor digite novamente!"<<endl;
        cin>>opcao;
        opcao = toupper(opcao);
    }
}




//void Telas::tela_personagem(){
//    system("clear");
//    cout<<"Descrição dos personagens e seus respectivos IDs"<<endl;
//    cout<<"1 - Capitã Marvel"<<endl;
//    cout<<"2 - Thor"<<endl;
//    cout<<"3 - Loki"<<endl;
//    cout<<"Digite o numero do ID + A para adicionar na sua party"<<endl;
//    cout<<"Digite o numero do ID + R para remover da sua party"<<endl;
//    cout<<"Digite o numero do ID + D para ver a destrição do personagem"<<endl;
//
//}
//
//void Telas::tela_resultado_ataque_jogador(){
//    system("clear");
//}
//
//void Telas::tela_descricao_persoangem(int id){
//    system("clear");
//}
//
//void Telas::tela_morte_heroi_sem_pedra(){
//    system("clear");
//}
//
//void Telas::tela_batalha(){
//    system("clear");
//}
//
//void Telas::tela_vitoria_thanos(){
//    system("clear");
//}
//
//void Telas::tela_resultado_ataque_thanos(){
//    system("clear");
//}
//
//void Telas::tela_vitoria_jogador(){
//    system("clear");
//}