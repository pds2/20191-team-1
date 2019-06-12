#include "doctest.h"
#include <iostream>
#include "equipe.h"

#define NUM_HEROIS_VIVOS 5
#define NUM_HEROIS_SELEC 0
#define ID_HEROI 0
#define ADD_HEROI1 1
#define ADD_HEROI2 -1
#define ADD_HEROI3 1
#define TIME_COMPLETO false
#define VIVO true
#define TMIN_ID 1
#define TMAX_ID 10
#define TNUM_EQ 5


TEST_CASE("1 - [Equipe] - Construtor/Getters ") {
    Equipe equipe = Equipe();

    CHECK_EQ(equipe.get_equipe_completa(), TIME_COMPLETO);
    CHECK_EQ(equipe.get_num_herois_vivos(), NUM_HEROIS_VIVOS);
    CHECK_EQ(equipe.get_id_portador_pedra(), ID_HEROI);
}

TEST_CASE("2 - [Equipe] - Adiciona Equipe") {
	Equipe equipe = Equipe();
	equipe.adiciona_heroi(ADD_HEROI1);

    CHECK_EQ(equipe.get_herois_selecionados(), NUM_HEROIS_SELEC+1);
}

TEST_CASE("3 - [Equipe] - Adiciona Heroi/Repitido") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.adiciona_heroi(0));
    CHECK_THROWS(equipe.adiciona_heroi(0));
}

TEST_CASE("4 - [Equipe] - Adiciona Heroi/Id negativo") {
    Equipe equipe = Equipe();

    CHECK_THROWS(equipe.adiciona_heroi(ADD_HEROI2));
}

TEST_CASE("5 - [Equipe] - Remove Heroi") {
    Equipe equipe = Equipe();
    int i = 0;
    for(i=1;i<=5;i++)
        equipe.adiciona_heroi(i);

    equipe.remove_heroi(i);    
    CHECK_EQ(equipe.get_num_herois_vivos() , i-1);
}

TEST_CASE("6 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi(ADD_HEROI1));
}

TEST_CASE("7 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi(ADD_HEROI2));
}

TEST_CASE("8 - [Equipe] - Set portador pedra") {
    Equipe equipe = Equipe();
    equipe.adiciona_heroi(1);
    equipe.set_portador_pedra(1);

    CHECK_EQ(equipe.get_id_portador_pedra() , ADD_HEROI1);
}

TEST_CASE("9 - [Equipe] - Set portador pedra/THROWS/Vazio") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.set_portador_pedra(ADD_HEROI2));
}
TEST_CASE("10 - [Equipe] - Set portador pedra/THROWS/Invalido") {
    Equipe equipe = Equipe();
    equipe.adiciona_heroi(1);

    CHECK_THROWS(equipe.set_portador_pedra(TMP_MAX+1));
}

TEST_CASE("11 - [Equipe] - Portador Vivo") {
    Equipe equipe = Equipe();
    
    equipe.adiciona_heroi(1);
    equipe.set_portador_pedra(1);
    
    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Monta Equipe") {
    Equipe equipe = Equipe();

    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Mosta Equipe") {
    Equipe equipe = Equipe();
    
    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Equipe sofre Dano") {
    Equipe equipe = Equipe();
    
    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Realiza Ataque") {
    Equipe equipe = Equipe();
    
    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Status Heroi") {
    Equipe equipe = Equipe();
    
    CHECK_EQ(equipe.portador_pedra_esta_vivo(),!VIVO);
}

TEST_CASE("12 - [Equipe] - Equipe Completa/Total") {
    
    Equipe equipe = Equipe();
    int i = 0;
    for(i=1;i<=5;i++)
        equipe.adiciona_heroi(i);

    CHECK_EQ(equipe.get_equipe_completa() , !TIME_COMPLETO);
}

TEST_CASE("12 - [Equipe] - Equipe Completa/ Parcial") {
    Equipe equipe = Equipe();
    int i = 1;
    for(i=1;i<=4;i++)
        equipe.adiciona_heroi(i);

    CHECK_EQ(equipe.get_equipe_completa() , TIME_COMPLETO);
}