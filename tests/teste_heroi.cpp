#include "doctest.h"
#include <iostream>
#include "heroi.h"

//using namespace  std;

#define VIDA 100
#define ATAQUE 10
#define DEFESA 80
#define VIVO true


TEST_CASE("1 - [Heroi] - Construtor/Getters ") {
    Heroi heroi = Heroi(100, 10, 80);

    CHECK_EQ(heroi.get_pt_vida(), VIDA);
    CHECK_EQ(heroi.get_pt_ataque(), ATAQUE);
    CHECK_EQ(heroi.get_pt_defesa(), DEFESA);
}

TEST_CASE("2 - [Heroi] - Construtor/THROWS") {
    CHECK_THROWS(Heroi(-100, 10, 80));
    CHECK_THROWS(Heroi(100, -10, 80));
    CHECK_THROWS(Heroi(100, 10, -80));
}

TEST_CASE("3 - [Heroi] - Diminui vida") {
	Heroi heroi = Heroi(100, 10, 80);
	heroi.diminui_vida(10);

    CHECK_EQ(heroi.get_pt_vida(), VIDA-10);
}

TEST_CASE("4 - [Heroi] - Diminui vida/Negativo") {
	Heroi heroi = Heroi(100, 10, 80);
	heroi.diminui_vida(-10);

    CHECK_THROWS(heroi.get_pt_vida(), VIDA-10);
}

TEST_CASE("5 - [Heroi] - Realiza ataque") {
	Heroi heroi = Heroi(100, 10, 80);

    CHECK_THROWS(heroi.realiza_ataque(), ATAQUE);
}

TEST_CASE("6 - [Heroi] - Ataque com bonus") {
	Heroi heroi = Heroi(100, 10, 80);

    CHECK_EQ(heroi.realiza_ataque(), ceil(ATAQUE*0.5));
}

TEST_CASE("7 - [Heroi] - Heroi vivo") {
	Heroi heroi = Heroi(100, 10, 80);

    CHECK_EQ(heroi.get_vivo(), VIVO);
}

TEST_CASE("8 - [Heroi] - Heroi morto") {
	Heroi heroi = Heroi(100, 10, 80);
	heroi.diminui_vida(heroi.get_vivo);

    CHECK_EQ(heroi.get_vivo(),!VIVO);
}