// --------------------------------------------------------------------------------------------
// ASCII arts were generated with http://patorjk.com/software/taag/#p=display&f=Graffiti&t=
// --------------------------------------------------------------------------------------------
#include <map>
#include <iostream>
#include "telas.h"
#include "heroi.h"
#include "constants.h"

//------------ GLOBALS------------------


//------------FUNCTIONS---------------

void limpa_tela() {
    int clear = system("clear");
    if(clear != 0){
        std::cout<<"Algo de errado não está certo!"<<std::endl;
    }
}

void tela_inicial(){
    limpa_tela();
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
    limpa_tela();
    std::cout<<  "====== COMO JOGAR ====="<< std::endl;
    std::cout<<  "\n";
    std::cout<< "Seu objetivo é derrotar o poderoso Thanos antes que ele pegue a pedra do poder. "<< std::endl;
    std::cout<< "Com o controle de 5 grandes herois, você poderar atacar e alterar a posse da  pedra. "<< std::endl;
    std::cout<< "Planeje suas açoes e salve a humanidade! Aperte qualquer tecla para continuar"<< std::endl;

    // =========MENU=============
    std::cout<< "MENU"<< std::endl;
    std::cout<< "Aperte 1 - Voltar à Tela Inicial"<< std::endl;
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
    limpa_tela();

    std::cout<< "\n"
                "  _____  _  __ _            _     _           _      \n"
                " |  __ \\(_)/ _(_)          | |   | |         | |     \n"
                " | |  | |_| |_ _  ___ _   _| | __| | __ _  __| | ___ \n"
                " | |  | | |  _| |/ __| | | | |/ _` |/ _` |/ _` |/ _ \\\n"
                " | |__| | | | | | (__| |_| | | (_| | (_| | (_| |  __/\n"
                " |_____/|_|_| |_|\\___|\\__,_|_|\\__,_|\\__,_|\\__,_|\\___|\n"
                "                                                     \n"
                "                                                     " << std::endl;


    std::cout<< "\n\nSELECIONE A DIFICULDADE DO JOGO"<< std::endl;

    std::cout<< " F - Facil. A cada herói morto, recupere 10% dos pontos de vida"<< std::endl;
    std::cout<< " M - Medio. A cada herói morto, recupere 5% dos pontos de vida"<< std::endl;
    std::cout<< " D - Dificil. Não recupera pontos de vida!\n"<< std::endl;

}

void tela_monta_equipe(){

    limpa_tela();

    // === HEADER ===========================
    std::cout << "\n ======== MONTE SUA EQUIPE ========" << std::endl;
    std::cout << "Para enfrentar o Thanos, você vai precisar de muita ajuda!" << std::endl;
    std::cout << "Sua equipe pode ter até 5 heróis" << std::endl;
    std::cout << "\n Cada herói tem vantagens e desvantagens\n"
                 " Consulte cada um!\n" << std::endl;

    // === LISTA DE PERSONAGENS =============
    std::map<int, dado_heroi> MY_DADOS_HEROIS = {
            {1,  dado_heroi(80,20,5,"Sem Historia no momento", "Capitã Marvel")},
            {2,  dado_heroi(70,30,5,"Sem Historia no momento", "Capitão América")},
            {3,  dado_heroi(90,10,5,"Sem Historia no momento", "Homem de Ferro")},
            {4,  dado_heroi(90,10,5,"Sem Historia no momento", "Thor")},
            {5,  dado_heroi(70,30,5,"Sem Historia no momento", "Homem Aranha")},
            {6,  dado_heroi(90,10,5,"Sem Historia no momento", "Hulk")},
            {7,  dado_heroi(60,40,5,"Sem Historia no momento", "Doutor Estranho")},
            {8,  dado_heroi(60,40,5,"Sem Historia no momento", "Visao")},
            {9,  dado_heroi(90,10,5,"Sem Historia no momento", "Pantera Negra")},
            {10,  dado_heroi(70,30,5,"Sem Historia no momento", "Viuva Negra")}
    };

    for (const auto& iterator : MY_DADOS_HEROIS) {
        const dado_heroi& heroi = iterator.second;
        std::string nome = heroi._nome;
        std::cout <<"ID: " <<iterator.first << " | " << nome << std::endl;
    }
}

void mostra_equipe(std::set<Heroi> equipe) {
    std::cout << "1 " << "2 " << "3 " << "4 " << "5 " << std::endl;

    //todo - qnd tiver algum elemento dentro, completar aqui em baixo
    for (auto it = equipe.begin(); it != equipe.end(); it++) {
        std::cout << "1 " << "2 " << "3 " << "4 " << "5 " << std::endl;
    }
}

void tela_vitoria_jogador(){
    limpa_tela();

    std::cout << "\n"
                 " __     __                                            __                                           __                                ________  __                                                __ \n"
                 "|  \\   |  \\                                          |  \\                                         |  \\                              |        \\|  \\                                              |  \\\n"
                 "| $$   | $$  ______    _______   ______          ____| $$  ______    ______    ______    ______  _| $$_     ______   __    __        \\$$$$$$$$| $$____    ______   _______    ______    _______ | $$\n"
                 "| $$   | $$ /      \\  /       \\ /      \\        /      $$ /      \\  /      \\  /      \\  /      \\|   $$ \\   /      \\ |  \\  |  \\         | $$   | $$    \\  |      \\ |       \\  /      \\  /       \\| $$\n"
                 " \\$$\\ /  $$|  $$$$$$\\|  $$$$$$$|  $$$$$$\\      |  $$$$$$$|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\\\$$$$$$  |  $$$$$$\\| $$  | $$         | $$   | $$$$$$$\\  \\$$$$$$\\| $$$$$$$\\|  $$$$$$\\|  $$$$$$$| $$\n"
                 "  \\$$\\  $$ | $$  | $$| $$      | $$    $$      | $$  | $$| $$    $$| $$   \\$$| $$   \\$$| $$  | $$ | $$ __ | $$  | $$| $$  | $$         | $$   | $$  | $$ /      $$| $$  | $$| $$  | $$ \\$$    \\  \\$$\n"
                 "   \\$$ $$  | $$__/ $$| $$_____ | $$$$$$$$      | $$__| $$| $$$$$$$$| $$      | $$      | $$__/ $$ | $$|  \\| $$__/ $$| $$__/ $$         | $$   | $$  | $$|  $$$$$$$| $$  | $$| $$__/ $$ _\\$$$$$$\\ __ \n"
                 "    \\$$$    \\$$    $$ \\$$     \\ \\$$     \\       \\$$    $$ \\$$     \\| $$      | $$       \\$$    $$  \\$$  $$ \\$$    $$ \\$$    $$         | $$   | $$  | $$ \\$$    $$| $$  | $$ \\$$    $$|       $$|  \\\n"
                 "     \\$      \\$$$$$$   \\$$$$$$$  \\$$$$$$$        \\$$$$$$$  \\$$$$$$$ \\$$       \\$$        \\$$$$$$    \\$$$$   \\$$$$$$   \\$$$$$$           \\$$    \\$$   \\$$  \\$$$$$$$ \\$$   \\$$  \\$$$$$$  \\$$$$$$$  \\$$\n"
                 "                                                                                                                                                                                                    \n"
                 "                                                                                                                                                                                                    \n"
                 "                                                                                                                                                                                                    " << std::endl;
    std::cout << "Parabéns! Você salvou a galáxia da tirania de Thanos!" << std::endl;
    std::cout << "Que tal tentar agora em um modo mais difícil?\n\n" << std::endl;

}

void tela_vitoria_thanos(){
    limpa_tela();

    std::cout << "\n"
                 "  ______   __                                            __        ________  __                                                                                                                  \n"
                 " /      \\ |  \\                                          |  \\      |        \\|  \\                                                                                                                 \n"
                 "|  $$$$$$\\| $$____         _______    ______    ______  | $$       \\$$$$$$$$| $$____    ______   _______    ______    _______        __     __   ______   _______    _______   ______   __    __ \n"
                 "| $$  | $$| $$    \\       |       \\  |      \\  /      \\ | $$         | $$   | $$    \\  |      \\ |       \\  /      \\  /       \\      |  \\   /  \\ /      \\ |       \\  /       \\ /      \\ |  \\  |  \\\n"
                 "| $$  | $$| $$$$$$$\\      | $$$$$$$\\  \\$$$$$$\\|  $$$$$$\\| $$         | $$   | $$$$$$$\\  \\$$$$$$\\| $$$$$$$\\|  $$$$$$\\|  $$$$$$$       \\$$\\ /  $$|  $$$$$$\\| $$$$$$$\\|  $$$$$$$|  $$$$$$\\| $$  | $$\n"
                 "| $$  | $$| $$  | $$      | $$  | $$ /      $$| $$  | $$ \\$$         | $$   | $$  | $$ /      $$| $$  | $$| $$  | $$ \\$$    \\         \\$$\\  $$ | $$    $$| $$  | $$| $$      | $$    $$| $$  | $$\n"
                 "| $$__/ $$| $$  | $$      | $$  | $$|  $$$$$$$| $$__/ $$ __          | $$   | $$  | $$|  $$$$$$$| $$  | $$| $$__/ $$ _\\$$$$$$\\         \\$$ $$  | $$$$$$$$| $$  | $$| $$_____ | $$$$$$$$| $$__/ $$\n"
                 " \\$$    $$| $$  | $$      | $$  | $$ \\$$    $$ \\$$    $$|  \\         | $$   | $$  | $$ \\$$    $$| $$  | $$ \\$$    $$|       $$          \\$$$    \\$$     \\| $$  | $$ \\$$     \\ \\$$     \\ \\$$    $$\n"
                 "  \\$$$$$$  \\$$   \\$$       \\$$   \\$$  \\$$$$$$$  \\$$$$$$  \\$$          \\$$    \\$$   \\$$  \\$$$$$$$ \\$$   \\$$  \\$$$$$$  \\$$$$$$$            \\$      \\$$$$$$$ \\$$   \\$$  \\$$$$$$$  \\$$$$$$$  \\$$$$$$ \n"
                 "                                                                                                                                                                                                 \n"
                 "                                                                                                                                                                                                 \n"
                 "                                                                                                                                                                                                 " << std::endl;
    std::cout << "Você não foi capaz de enganar Thanos... e perdeu todos os seus heróis na batalha." << std::endl;
    std::cout << "Que tal tentar novamente?\n\n" << std::endl;

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
