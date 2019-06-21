// --------------------------------------------------------------------------------------------
// ASCII arts were generated with http://patorjk.com/software/taag/#p=display&f=Graffiti&t=
// --------------------------------------------------------------------------------------------
#include <map>
#include <iostream>
#include "util.h"
#include "telas.h"
#include "heroi.h"
#include "constants.h"

/*
*   Classe que contém as funções que exibem todas as telas do jogo
*/

void tela_resultado_ataque_jogador(int dano_causado, int hp_thanos){
    limpa_tela();
    std::cout << "                                                         `                                         \n"
                 "                                      -s+`              -ohh            `-o/                   .-.  \n"
                 "         `-`                         :hyyh+`         `/yyyyN.        `:oyydd:::::::::   .-/+oshms.  \n"
                 "          :yyo+:-`                  +hyyyyhh/`     -oyyyyyymo     ./syhyhydd.----../hosyyyyyhms.    \n"
                 "           .ohyyyyyo+:-`          `ohyyyyyyyhy: `/syyyyyyyyso:+:/yyso/:-hymd.......dyyyyyyddo.      \n"
                 "            `:yyyyyyyyyyso/:.`   `syyyyyyyyyyyhsyyyyyyyhyys-..-hh:--....myhy....../dyyyydd+.        \n"
                 "              .ohyyyyyyyyyyyyyso/yyyyhssoosyhyyyyyhyso/-/hs....sh:.....:dyyy......hhyhdd+`          \n"
                 "               `:yyyyyyyyyyyyyyyyyhs/-------/shyyh:--...-hs..../d:...-./dyyy.....-dyhms-.`          \n"
                 "     ``..--::/++oyyyhhyyssyhyyyyyy/--........-/hyh/......oy.....d:...-.+hyyy...-.+dyhhyyyyyssoo+++. \n"
                 "   .+syyyyyyyyyyyys+/:-----:yyyyy:-.-........../hyy......-y.-...s/...-.ohyyy.....shyyyyyyyyyhdhy+-` \n"
                 "     `.:osyhyhs+:--.........:dyh:.....-.--......ohh/......o...../+.....ohyys.....yyyyyyyhhhyo:.`    \n"
                 "         `.:+y+...-.........-dh+......-oyyo-....-dyh..-...-.....-/.....ohyyy:/++ohyyyhdhs/.`        \n"
                 "         `.:+ys.....-/+/....+dh-......yhyyhs.....dyh/............-...-.ohyyyyhhhhhyydh+-`           \n"
                 "     `.:+syhyyh....-:dy:.../dys......+dyyyyh:....dyyy.........-........+hyyys/:::/yyyyyyso/-.       \n"
                 "  .:+syhyyyyyyh-....-/-.--+dyyo......hyyyyyh/...-dyyh:........+......../dyy:--....shyhhhhyyo:`      \n"
                 "  :osyyyyyyyyyh/.....-..-shyyys......hyyyyyh:...ohyyho........y:.......-dyo.....-+mhyo/:.`          \n"
                 "    `.-/oyyhyyys......-+hhyyyyy-.....ohyyyy+...:dyyyyh-.......yo..--:/oshyyo//+syhhy+-`             \n"
                 "         `-:+yhy.....:yhyyyyyyh+.-...-/oo+:...-hhyyyyh:...-:/+hy/oyyhhyyyyyyhhhyyyyyyhs+-`          \n"
                 "            -yyd.-...+hyyyyyyyyh/............:hhyyyyyys:+syyhhyyhyyyyyyyyyyyyyyyyyyyyyyyhs+-`       \n"
                 "          .+hyyd-....-dyyyyyyyyyh+-..-....--+hhyyyyyyyhhhyyyyyyyyyyyyyyyyyydhyyyyyyyyyhhhhhhyo-.    \n"
                 "        `:yyyyyh/.....hyyyyyyyyyyhyo/::::+shhyyyyyhyyyyyyyyyyyhmsyyyyyyyyyydy```...--:::://++oso/`  \n"
                 "       .ohyyyyyyo..--:yyyyyyyyyyyyhdyhhhhhyyyyyyyhdsyyyyyyyyyydd -/oyyyyyyyym/                      \n"
                 "     `/yyhhhhhhhs:++/ohyyyyyyyyyydm/.+yyyyyyyyyyhN: -+yyyyyyyymo    `:+yyyyyhm.                     \n"
                 "    `+hyso+/-.` `.`   ohyyyyyyyydh.   `:syyyyyyyms    `:syyyyyN-        -/syydh                     \n"
                 "                       syyyyyyhmo`       -+yyyydm`       .+yyhm            `:+d/                    \n"
                 "                       `yyyyydd:           `/yhN-           :ss                .                    \n"
                 "                        `yyhmy`               -:                                                    " <<  std::endl;

    std::cout << "\n" << "Você atacou Thanos causando " <<  dano_causado << " de dano "<< std::endl;
    std::cout << "Faltam " << hp_thanos << " pra você derrotar Thanos!"<< std::endl;
    std::cout << std::endl;
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
    std::cout<< "Aperte A - Iniciar o jogo"<< std::endl;
    std::cout<< "Aperte C - Como jogar"<< std::endl;
    std::cout<< "Aperte Q - Sair"<< std::endl;
    std::cout<< "\nOpção: ";

}

void tela_como_jogar() {
    limpa_tela();
    std::cout << "\n"
                 "   _____                          _                        \n"
                 "  / ____|                        (_)                       \n"
                 " | |     ___  _ __ ___   ___      _  ___   __ _  __ _ _ __ \n"
                 " | |    / _ \\| '_ ` _ \\ / _ \\    | |/ _ \\ / _` |/ _` | '__|\n"
                 " | |___| (_) | | | | | | (_) |   | | (_) | (_| | (_| | |   \n"
                 "  \\_____\\___/|_| |_| |_|\\___/    | |\\___/ \\__, |\\__,_|_|   \n"
                 "                                _/ |       __/ |           \n"
                 "                               |__/       |___/            " << std::endl;
    std::cout << "\n";
    std::cout
            << " Seu objetivo é derrotar o poderoso Thanos antes que ele pegue a pedra do poder, que está escondida com algum dos nossos heróis. "
            << std::endl;
    std::cout
            << " Você enfrentará Thanos em uma batalha de turnos. Se o herói que esta com a pedra morrer, Thanos vence o jogo "
            << std::endl;
    std::cout << " Derrote Thanos antes que isso aconteça! " << std::endl;
    std::cout << "  " << std::endl;
    std::cout << " No seu turno, você deverá escolher:" << std::endl;
    std::cout << "     1 - Qual herói você quer usar" << std::endl;
    std::cout << "     2 - Se você deseja atacar ou passar a pedra pra outro herói" << std::endl;
    std::cout << "\nPlaneje suas açoes e salve a galáxia!" << std::endl;

    // =========MENU=============
    std::cout << "\nMENU" << std::endl;
    std::cout << "Aperte A - Avançar para o jogo" << std::endl;
    std::cout << "Aperte S - Voltar para a Tela Inicial" << std::endl;
    std::cout << "Aperte Q - Para sair" << std::endl;
    std::cout << "\nOpção: ";
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
    std::cout << "\nOpção: ";
}

void tela_monta_equipe(){

    limpa_tela();

    // === HEADER ===========================
    std::cout << "\n \n"
                 "  __  __             _                                            _            \n"
                 " |  \\/  |           | |                                          (_)           \n"
                 " | \\  / | ___  _ __ | |_ ___   ___ _   _  __ _    ___  __ _ _   _ _ _ __   ___ \n"
                 " | |\\/| |/ _ \\| '_ \\| __/ _ \\ / __| | | |/ _` |  / _ \\/ _` | | | | | '_ \\ / _ \\\n"
                 " | |  | | (_) | | | | ||  __/ \\__ \\ |_| | (_| | |  __/ (_| | |_| | | |_) |  __/\n"
                 " |_|  |_|\\___/|_| |_|\\__\\___| |___/\\__,_|\\__,_|  \\___|\\__, |\\__,_|_| .__/ \\___|\n"
                 "                                                         | |       | |         \n"
                 "                                                         |_|       |_|         " << std::endl;
    std::cout << "\n Para enfrentar o Thanos, você vai precisar de muita ajuda!" << std::endl;
    std::cout << " Sua equipe pode ter até 5 heróis. Consulte as vantagens e desvantagens e seja sábio nas escolhas!\n" << std::endl;


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

    // === MENU ==============================
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione a Opção"<< std::endl;
    std::cout<< "  Digite S para Selecionar o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite R para Remover o herói para a sua equipe"<< std::endl;

}

void tela_resultado_ataque_thanos(std::string heroi, int dano_causado, std::string nome_ataque){
    limpa_tela();

    std::cout << "\n"
                 "                                                        +mN-                                        \n"
                 "                              -y:                     .hh`oy                                        \n"
                 "                              `Myds-                 /m+  .N`                                       \n"
                 "                               d+ :yd+`            `yd.    d+                                       \n"
                 "                               sh   `+dh/`        :ms      +d                          .            \n"
                 "                               /N`     -sms-    `sm:       `N.                   `:+syN/            \n"
                 "                               .M/        /hmo.-mh`         hs             `-+syyo/. hs             \n"
                 "                                my          .omN/           :N        ./ohhyo:`     yh              \n"
                 "                                hN             ``-:-.        N/ .:oydds+-`         om`              \n"
                 "                                +M-          .oo+:.-:++/`    sNmhs/.              /N-               \n"
                 "                                -Ms         os.        .+o+. `.                  :N/                \n"
                 "                                `Nm      `+y:      -      `:+++-                .No                 \n"
                 "          -dmsssssssssyyyyyyyyhhhhh`   -sy:        s.         `/h.             `mh                  \n"
                 "           `om+`                     :hy-      :++..m`+s/       :d+++/:.      `dm`                  \n"
                 "             .hNo`                 /ds.          `+yNmo         :d+//:.:+/    hN.                   \n"
                 "               :mNs`             :ds.              .My          ho:`     -s  oMNyo/-`               \n"
                 "   oyhyyyyysssoosNMMy////::::---hy.               `dMo         -s         s.  `.:+sydmdyo/-`        \n"
                 "     `````..-----::::///+++++oMM/                 hMMd         o-         //          `-:+syhhs+:.  \n"
                 "                             .M+                 -MMMM/        h`         s.                  `:hms.\n"
                 "                             -M.                 +MMMMdo`      ms++++++oso.                 -oo+.   \n"
                 ":+oyyyssssssssoooooooo+/:.    m-                 oMMm. .oo/:::/s        `/o             `/oo/`      \n"
                 "-/:::---------------.`        :h                 dMM/     `...`           o.         .+oo-          \n"
                 "  `.-----::::::-----..`      . ss              `yMMM/                     +-      :oo/`             \n"
                 "                             o+ //           -oNMMMMNo:-....```          `y   .+so:                 \n"
                 "                             `N         `-+yhy++MMMMNo/://///+++++++++o+os.  .hMs`                  \n"
                 "                              N`        --`   -hdMMM/                  :o      .yNs`                \n"
                 "                             `N`             -/ :MMM:                   s`       `oNs`              \n"
                 "                             /N                `dyMMd-`                 y          `+ms.            \n"
                 "                             ds               `h: NMy+/++////////-`   `o-             /ds.          \n"
                 "                            /M.               o.  ds            `.:+sy+`                :hs.        \n"
                 "  `:/+++ooooossssssssoooo+/:+M:                   hs                 h                    -ys.      \n"
                 "  :o++//::::::------::::mMd//+ds-                  /my+:.           -y  `....------:::://///oNs.    \n"
                 "                       oMm`    -oyys:`            `+h/`-omh++++`   .d`  oMNdhhhysssoo++///::--.`    \n"
                 "                      -Mm.         ./osso:.     `-:`     /o/- `   /y.   `Mm                         \n"
                 "                     `mN.               `-/ooooooosssso+////+//+++-      hM-                        \n"
                 "                     hN-            `-+sd+                `              :Mo                        \n"
                 "                    +N:        `:+ymMNhsmN`              sMd+`            Nd                        \n"
                 "                   -N:    .:ohmNds+:`   :Mo            .dN/:yNh/`         oM`                       \n"
                 "                  `m/./shmhs+:`          yN`          /Nh.    :ymy:       .M/                       \n"
                 "                  ymhs+:`                .Ny        `yN+         :yms-     dh                       \n"
                 "                  `                       +M.      .md.             :ydo.  /M`                      \n"
                 "                                           mh     +No                  :yh+.N:                      \n"
                 "                                           :M-  `yd-                      :yNy                      \n"
                 "                                            yd -mo                           -                      \n"
                 "                                            `Nyd-                                                   \n"
                 "                                             +s`                                                    " << std::endl;

    std::cout << "\n Thanos atacou "<< heroi<< " com " << nome_ataque << " causando " << dano_causado<< " de dano! \n"<<std::endl;
    pause();
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
    std::cout << "Você não foi capaz de enganar Thanos... e perdeu a última pedra do infinito." << std::endl;
    std::cout << "Que tal tentar novamente?\n\n" << std::endl;
}

void tela_morte_heroi_sem_pedra(std::string nome_heroi){
    limpa_tela();

    std::cout << "                                    @@@@@@@@                                   \n"
                 "                                 @@@,,,,,,,@@                                  \n"
                 "                                @@/@,,,,,,,,@                                  \n"
                 "                                @&/@,,@,,,,,@                                  \n"
                 "                                ,@/@,,,,,,,,@@                                 \n"
                 "                                ,@/@,,,,,%@@@@@@@@@@@@@&@@@@@@@                \n"
                 "               @@@@@@@@@@&(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@                \n"
                 "             @@%,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@&@@@,,,,,,,@                \n"
                 "             @@,,,,,,,,,,,,,,,,,,,,,,,,@,(,,,,,,,,,,,,,,,,,,,,@                \n"
                 "             #@&,,,,,,,,,,,,,,,,,,,,,,,,,,,,*.,,,,,,,,,,@@,,,,@                \n"
                 "             .@@,,,,,,,,,,,*,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,@                \n"
                 "              @/@,,,,,,,,.,,,,,,,/@@@@@*,,,,,,@(%@@@@@&&%%%@@@                 \n"
                 "              @@@@@@@@@@@@@@@@@&@@/@,,,,,,,,,,@@@@@@@@@@@@                     \n"
                 "                                .&/@,,,,,,,,,,@@                               \n"
                 "                                 @/@,,,,,,,,,,&@(                              \n"
                 "                                 @/(,,,,,@,,,,,@@                              \n"
                 "                                 &//*,,,,@,,,,,@@                              \n"
                 "                                 @//@,,,,*,,,,,@@                              \n"
                 "                                 /@/@,,,,,,,,,,,@                              \n"
                 "                                  @/@,,,,,,,#,,,@@                             \n"
                 "                                  @/@,,,,,,,.,,,@@                             \n"
                 "                                  @/&,,,,,,,,,,,%&                             \n"
                 "                           @@     @//&,,,,,,,,,,,@                             \n"
                 "                          @,@    @@@/@,,,*@,,,@@,@@  @@@     @@@               \n"
                 "                   @@@   @,,,@@@,,,(/@,@,,,@,@,,&@@@/,,@( @@,,@%               \n"
                 "                    @@@@@(,,,*,,,,,,@@,,,,,,@(,,,,*,,,,@@(,,,@@                \n"
                 "                     @%,@,,,,,,,,,,,,,,,,@*,,,,,,,,,,,,,,,,,/@                 \n"
                 "                                                                             " << std::endl;

    std::cout << "                Oh não! " << nome_heroi << " morreu em batalha!\n" << std::endl;
    pause();
}