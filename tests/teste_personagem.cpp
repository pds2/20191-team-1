#include "doctest.h"
#include <cmath>
#include "personagem.h"

#define VIDA 100
#define ATAQUE 10
#define DEFESA 80
#define NOME "PERSONAGEM"
#define VIVO true

TEST_CASE("1 - [Personagem] - Construtor/Getters ") {
    Personagem personagem = Personagem(100, 10, 80, "Heroi1");

    CHECK_EQ(personagem.get_pt_vida(), VIDA);
    CHECK_EQ(personagem.get_pt_ataque(), ATAQUE);
    CHECK_EQ(personagem.get_pt_defesa(), DEFESA);
    CHECK_EQ(personagem.get_vivo(), VIVO);
}

TEST_CASE("2 - [Personagem] - Construtor/THROWS") {
    CHECK_THROWS(Personagem(-100, 10, 80, "PERSONAGEM"));
    CHECK_THROWS(Personagem(100, -10, 80, "PERSONAGEM"));
    CHECK_THROWS(Personagem(100, 10, -80, "PERSONAGEM"));
}

TEST_CASE("3 - [Personagem] - Diminui vida") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");
	personagem.diminui_vida(10);

    CHECK_EQ(personagem.get_pt_vida(), VIDA-10);
}

TEST_CASE("4 - [Personagem] - Diminui vida/Negativo") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");

    CHECK_THROWS(personagem.diminui_vida(-10));
}

TEST_CASE("7 - [Personagem] - Personagem morto") {
	Personagem personagem = Personagem(100, 10, 80, "PERSONAGEM");
	personagem.diminui_vida(personagem.get_pt_vida());

    CHECK_EQ(personagem.get_vivo(),!VIVO);
}