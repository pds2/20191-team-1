// --------------------------------------------------------------------------------------------
// ASCII arts were generated with http://patorjk.com/software/taag/#p=display&f=Graffiti&t=
// --------------------------------------------------------------------------------------------

#include "telas.h"

void Telas::tela_inicial(){
    //Quem chama tela: main()

    system("clear");
    std::cout << "\n"
            " _____          _                             _               _____ _                           \n"
            "/__   \\___   __| | ___  ___    ___ ___  _ __ | |_ _ __ __ _  /__   \\ |__   __ _ _ __   ___  ___ \n"
            "  / /\\/ _ \\ / _` |/ _ \\/ __|  / __/ _ \\| '_ \\| __| '__/ _` |   / /\\/ '_ \\ / _` | '_ \\ / _ \\/ __|\n"
            " / / | (_) | (_| | (_) \\__ \\ | (_| (_) | | | | |_| | | (_| |  / /  | | | | (_| | | | | (_) \\__ \\\n"
            " \\/   \\___/ \\__,_|\\___/|___/  \\___\\___/|_| |_|\\__|_|  \\__,_|  \\/   |_| |_|\\__,_|_| |_|\\___/|___/\n"
            "                                                                                                " << std::endl;

    std::cout<< "=============================="<< std::endl;
    std::cout<< "Bem vindo a TODOS CONTRA THANOS!\n"
          "um mini jogo desenvolvido para a disciplina Programação e Desenvolvimento de Software\n\n"
    << std::endl;

    std::cout<< "MENU"<< std::endl;
    std::cout<< "Aperte 1 - Como jogar"<< std::endl;
    std::cout<< "Aperte 2 - Iniciar o jogo"<< std::endl;
    std::cout<< "Aperte 3 - Sair"<< std::endl;
    std::cout<< "\nOpção: ";

}

void Telas::tela_como_jogar(){
    system("clear");

    std::cout<<  "====== COMO JOGAR ====="<< std::endl;
    std::cout<<  "\n";
    std::cout<< "Seu objetivo é derrotar o poderoso Thanos antes que ele pegue a pedra do poder. "<< std::endl;
    std::cout<< "Com o controle de 5 grandes herois, você poderar atacar e alterar a posse da  pedra. "<< std::endl;
    std::cout<< "Planeje suas açoes e salve a humanidade! Aperte qualquer tecla para continuar"<< std::endl;

    // =========MENU=============
    std::cout<< "MENU"<< std::endl;
    std::cout<< "Aperte 1 - Voltar à Tela Inicial"<< std::endl;
    std::cout<< "Aperte 2 - Iniciar o jogo"<< std::endl;
    std::cout<< "Aperte 3 - Sair"<< std::endl;
    std::cout<< "\nOpção: ";
    
    int opcao = 0;
    
    std::cin>>opcao;
    if(opcao == 1){
        tela_inicial();

    }else if (opcao == 2){
        std::cout << "Você selecionou 2 - começar" << std::endl;
        tela_dificuldade();
    }else if (opcao == 3){
        system("exit");
    }else{
        std::cout<< "Opção invalida, digite novamente"<< std::endl;
    }
}



void Telas::tela_dificuldade() {
    system("clear");
    std::cout<< "Selecione a dificuldade do jogo"<< std::endl;
    std::cout<< "Digite F para Facil"<< std::endl;
    std::cout<< "Digite M para Medio"<< std::endl;
    std::cout<< "Digite D para Dificil"<< std::endl;
    char opcao;
    std::cin>>opcao;
    opcao = toupper(opcao);
    while(opcao != 'F' && opcao != 'M' && opcao != 'D'){
        std::cout<< "Opcao invalida, favor digite novamente!"<< std::endl;
        std::cin>>opcao;
        opcao = toupper(opcao);
    }
}




//void Telas::tela_personagem(){
//    system("clear");
//    std::cout<< "Descrição dos personagens e seus respectivos IDs"<< std::endl;
//    std::cout<< "1 - Capitã Marvel"<< std::endl;
//    std::cout<< "2 - Thor"<< std::endl;
//    std::cout<< "3 - Loki"<< std::endl;
//    std::cout<< "Digite o numero do ID + A para adicionar na sua party"<< std::endl;
//    std::cout<< "Digite o numero do ID + R para remover da sua party"<< std::endl;
//    std::cout<< "Digite o numero do ID + D para ver a destrição do personagem"<< std::endl;
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