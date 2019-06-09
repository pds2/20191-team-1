// --------------------------------------------------------------------------------------------
// ASCII arts were generated with http://patorjk.com/software/taag/#p=display&f=Graffiti&t=
// --------------------------------------------------------------------------------------------

#include <map>
#include "telas.h"
#include "constants.h"
#include "heroi.h"


using namespace std;

void tela_inicial(){

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

void tela_como_jogar(){
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
    
    int opcao;
    std::cin>>opcao;
    if(opcao == 1){
        tela_inicial();
    }else if (opcao == 2){
        std::cout << "Você selecionou 2 - começar" << std::endl;
        tela_dificuldade();
    }else if (opcao == 3){
        exit (EXIT_SUCCESS);
    }else{
        std::cout<< "Opção invalida, digite novamente"<< std::endl;
    }
}



void tela_dificuldade() {
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

void tela_monta_equipe(std::set<int> equipe){
    system("clear");

    //todo- descobrir como fazer pra não dar pau nesse import
    //todo - mostrar a lista completa de personagens com os ID
    std::map<int, Heroi> dados_heroi= {
            {1, Heroi(80,20,5,"Capitã Marvel")},
            {2, Heroi(70,30,5,"Capitão América")},
            {3, Heroi(90,10,5,"Homem de Ferro")},
            {4, Heroi(90,10,5,"Thor")},
            {5, Heroi(70,30,5,"Homem Aranha")},
            {6, Heroi(90,10,5,"Hulk")},
            {7, Heroi(60,40,5,"Doutor Estranho")},
            {8, Heroi(60,40,5,"Visao")},
            {9, Heroi(90,10,5,"Pantera Negra")},
            {10,Heroi(70,30,5,"Viuva Negra")}
    };

    //todo - escrever um texto decente pra isso aqui
    std::cout << "\n ======== MONTE SUA EQUIPE ========" << std::endl;
    std::cout << "Para enfrentar o Thanos, você vai precisar de muita ajuda!" << std::endl;
    std::cout << "Sua equipe pode ter até 5 heróis" << std::endl;
    std::cout << "\n Cada herói tem vantagens e desvantagens\n"
                 " Consulte cada um!\n" << std::endl;

    for (const auto& iterator : dados_heroi) {
        const Heroi& heroi = iterator.second;
        string nome = heroi.get_nome();
        std::cout <<"ID: " <<iterator.first << " | " << nome << std::endl;
    }

    //====== Tela mostrar equipe ======
    //fazer um método que plota a equipe que tá pronta
    std::cout << "\nSua equipe:" << std::endl;
    std::cout << "Falta implementar um método privado que mostra o vetor equipe" << std::endl;

    // =========MENU=============
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione o ID"<< std::endl;
    std::cout<< "  Digite C para consultar detalhes do herói"<< std::endl;
    std::cout<< "  Digite S para selecionar o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite R para remover o herói para a sua equipe"<< std::endl;
    std::cout<< "\nID: ";

    int opcao;
    std::cin>>opcao;
    if(opcao == 1){
        tela_inicial();
    }else if (opcao == 2){
        std::cout << "Você selecionou 2 - começar" << std::endl;
        tela_dificuldade();
    }else if (opcao == 3){
        exit (EXIT_SUCCESS);
    }else{
        std::cout<< "Opção invalida, digite novamente"<< std::endl;
    }

}






//void tela_personagem(){
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
//void tela_resultado_ataque_jogador(){
//    system("clear");
//}
//
//void tela_descricao_persoangem(int id){
//    system("clear");
//}
//
//void tela_morte_heroi_sem_pedra(){
//    system("clear");
//}
//
//void tela_batalha(){
//    system("clear");
//}
//
//void tela_vitoria_thanos(){
//    system("clear");
//}
//
//void tela_resultado_ataque_thanos(){
//    system("clear");
//}
//
//void tela_vitoria_jogador(){
//    system("clear");
//}