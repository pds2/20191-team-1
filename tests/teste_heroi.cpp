#include "doctest.h"
#include <cmath>
#include <iostream>
#include "heroi.h"

#define VIDA 100
#define ATAQUE 10
#define DEFESA 80
#define NOME "HEROI"
#define VIVO true

/* 
*   @method {Para testar o metodo construtor e sets Heroi}
*/
TEST_CASE("1 - [Heroi] - Construtor/Getters ") {
    Heroi heroi = Heroi(100, 10, 80, "Heroi1");

    CHECK_EQ(heroi.get_pt_vida(), VIDA);
    CHECK_EQ(heroi.get_pt_ataque(), ATAQUE);
    CHECK_EQ(heroi.get_pt_defesa(), DEFESA);
    CHECK_EQ(heroi.get_vivo(), VIVO);
}

/* 
*   @method {Para testar o metodo exceptions do construtor Heroi}
*/
TEST_CASE("2 - [Heroi] - Construtor/THROWS") {
    CHECK_THROWS(Heroi(-100, 10, 80, "HEROI"));
    CHECK_THROWS(Heroi(100, -10, 80, "HEROI"));
    CHECK_THROWS(Heroi(100, 10, -80, "HEROI"));
}

/* 
*   @method {Para testar o metodo que reduz vida do Heroi}
*/
TEST_CASE("3 - [Heroi] - Diminui vida") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");
    //80 referente aos pontos de defesa
	heroi.diminui_vida(10 + 80);

    CHECK_EQ(heroi.get_pt_vida(), VIDA-10);
}

/* 
*   @method {Para testar erro no metodo que reduz vida do Heroi, danos negativos não curam}
*/
TEST_CASE("4 - [Heroi] - Diminui vida/Negativo") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");
    heroi.diminui_vida(-10);
    CHECK_EQ(heroi.get_pt_vida(), VIDA);
}

/* 
*   @method {Para testar o metodo de araque do Heroi}
*/
TEST_CASE("5 - [Heroi] - Realiza ataque") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");

    CHECK(heroi.realiza_ataque() >= ATAQUE);
    CHECK(heroi.realiza_ataque() <= (ATAQUE*60));
}

/* 
*   @method {Para testar o metodo que verifica status de vida do Heroi}
*/
TEST_CASE("6 - [Heroi] - Heroi morto") {
	Heroi heroi = Heroi(100, 10, 80, "HEROI");
	heroi.diminui_vida(heroi.get_pt_vida()+heroi.get_pt_defesa());

    CHECK_EQ(heroi.get_vivo(),!VIVO);
}