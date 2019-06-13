#include "doctest.h"
#include <cmath>
#include "personagem.h"

#define VIDA 100
#define ATAQUE 10
#define DEFESA 80
#define NOME "PERSONAGEM"
#define VIVO true

/* 
*   @method {Para testar o metodo construtor e sets Personagem}
*/
TEST_CASE("1 - [Personagem] - Construtor/Getters ") {
    Personagem personagem = Personagem(100, 10, 80, "Heroi1");

    CHECK_EQ(personagem.get_pt_vida(), VIDA);
    CHECK_EQ(personagem.get_pt_ataque(), ATAQUE);
    CHECK_EQ(personagem.get_pt_defesa(), DEFESA);
    CHECK_EQ(personagem.get_vivo(), VIVO);
}

/* 
*   @method {Para testar o metodo exceptions do construtor Personagem}
*/
TEST_CASE("2 - [Personagem] - Construtor/THROWS") {
    CHECK_THROWS(Personagem(-100, 10, 80, "PERSONAGEM"));
    CHECK_THROWS(Personagem(100, -10, 80, "PERSONAGEM"));
    CHECK_THROWS(Personagem(100, 10, -80, "PERSONAGEM"));
}

/* 
*   @method {Para testar o metodo que reduz vida do Personagem}
*/
TEST_CASE("3 - [Personagem] - Diminui vida") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");
	personagem.diminui_vida(10);

    CHECK_EQ(personagem.get_pt_vida(), VIDA-10);
}

/* 
*   @method {Para testar erro no metodo que reduz vida do Personagem}
*/
TEST_CASE("4 - [Personagem] - Diminui vida/Negativo") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");

    CHECK_THROWS(personagem.diminui_vida(-10));
}

/* 
*   @method {Para testar o metodo que verifica status de vida do Personagem}
*/
TEST_CASE("6 - [Personagem] - Personagem morto") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");
	personagem.diminui_vida(personagem.get_pt_vida());

    CHECK_EQ(personagem.get_vivo(),!VIVO);
}

