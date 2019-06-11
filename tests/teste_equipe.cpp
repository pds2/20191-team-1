#include "doctest.h"
#include <iostream>
#include "equipe.h"

#define NUM_HEROIS_VIVOS 0
#define ID_HEROI 0
#define ADD_HEROI1 0
#define ADD_HEROI2 -1
#define TIME_COMPLETO false

/*
TEST_CASE("1 - [Equipe] - Construtor/Getters ") {
    Equipe equipe = Equipe();

    CHECK_EQ(equipe.get_equipe_completa(), TIME_COMPLETO);
    CHECK_EQ(equipe.get_num_herois_vivos(), NUM_HEROIS_VIVOS);
    CHECK_EQ(equipe.get_id_portador_pedra(), ID_HEROI);
}

TEST_CASE("2 - [Equipe] - Adiciona Equipe") {
	Equipe equipe = Equipe();
	equipe.adiciona_heroi(ADD_HEROI1);

    CHECK_EQ(equipe.get_num_herois_vivos(), NUM_HEROIS_VIVOS+1);
}

TEST_CASE("3 - [Equipe] - Adiciona Heroi/Repitido") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.adiciona_heroi(0));
    CHECK_THROWS(equipe.adiciona_heroi(0));
}

TEST_CASE("4 - [Equipe] - Adiciona Heroi/THROWS") {
    Equipe equipe = Equipe();

    CHECK_THROWS(equipe.adiciona_heroi(ADD_HEROI2));
}

TEST_CASE("5 - [Equipe] - Remove Heroi") {
    Equipe equipe = Equipe();
    int i = 0;
    for(i=1;i<=5;i++)
        equipe.adiciona_heroi(i);

    equipe.remove_heroi(i);    
    CHECK_EQ(equipe.get_num_herois_vivos() , 4);
}

TEST_CASE("6 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi(ADD_HEROI1));
}
*/
/*TEST_CASE("7 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi());
}*/