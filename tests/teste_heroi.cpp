#include "doctest.h"
#include <cmath>
#include "heroi.h"

#define VIDA 100
#define ATAQUE 10
#define DEFESA 80
#define NOME "HEROI"
#define VIVO true

TEST_CASE("1 - [Heroi] - Construtor/Getters ") {
    Heroi heroi = Heroi(100, 10, 80, "Heroi1");

    CHECK_EQ(heroi.get_pt_vida(), VIDA);
    CHECK_EQ(heroi.get_pt_ataque(), ATAQUE);
    CHECK_EQ(heroi.get_pt_defesa(), DEFESA);
    CHECK_EQ(heroi.get_vivo(), VIVO);
}

TEST_CASE("2 - [Heroi] - Construtor/THROWS") {
    CHECK_THROWS(Heroi(-100, 10, 80, "HEROI"));
    CHECK_THROWS(Heroi(100, -10, 80, "HEROI"));
    CHECK_THROWS(Heroi(100, 10, -80, "HEROI"));
}

TEST_CASE("3 - [Heroi] - Diminui vida") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");
	heroi.diminui_vida(10);

    CHECK_EQ(heroi.get_pt_vida(), VIDA-10);
}

TEST_CASE("4 - [Heroi] - Diminui vida/Negativo") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");

    CHECK_THROWS(heroi.diminui_vida(-10));
}

TEST_CASE("5 - [Heroi] - Realiza ataque") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");

    CHECK_EQ(heroi.realiza_ataque(), ATAQUE);
}

TEST_CASE("6 - [Heroi] - Ataque com bonus") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");

    CHECK_EQ(heroi.get_ataque_com_bonus(), ceil(ATAQUE*1.5));
}

TEST_CASE("7 - [Heroi] - Heroi morto") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");
	heroi.diminui_vida(heroi.get_pt_vida());

    CHECK_EQ(heroi.get_vivo(),!VIVO);
}