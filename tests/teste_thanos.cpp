#include "doctest.h"
#include "thanos.h"

#define VIDA 100
#define NOME "Thanos"
#define ATAQUE 10
#define DESESA 20
#define VIVO true

/*
TEST_CASE("1 - [Thanos] - Construtor/Getters ") {
    Thanos thanos = Thanos();

    CHECK_EQ(thanos->get_pt_vida() , VIDA);
    CHECK_EQ(thanos->get_nome() , NOME);
    CHECK_EQ(thanos->get_pt_ataque() , ATAQUE);
    CHECK_EQ(thanos->get_pt_defesa() , DESESA);
    CHECK_EQ(thanos->get_vivo() , VIVO);
}

TEST_CASE("2 - [Thanos] - Diminui vida") {
	Thanos thanos = Thanos();
	thanos.diminui_vida(10);

    CHECK_EQ(thanos.get_pt_vida(), VIDA-10);
}

TEST_CASE("3 - [Thanos] - Diminui vida/Negativo") {
	Thanos thanos = Thanos();
	thanos.diminui_vida(-10);

    CHECK_THROWS(thanos.get_pt_vida(), VIDA-10);
}

TEST_CASE("4 - [Thanos] - Realiza ataque") {
	Thanos thanos = Thanos();

    CHECK_THROWS(thanos.realiza_ataque(), ATAQUE);
}

TEST_CASE("5 - [Thanos] - Thanos morto") {
	Thanos thanos = Thanos();
	thanos.diminui_vida(thanos.get_vivo);

    CHECK_EQ(thanos.get_vivo(),!VIVO);
}
*/