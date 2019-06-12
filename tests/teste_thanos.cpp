#include "doctest.h"
#include "thanos.h"

#define VIDA 100
#define NOME "THANOS"
#define ATAQUE 10
#define DESESA 20
#define VIVO true

TEST_CASE("1 - [Thanos] - Construtor/Getters ") {
    Thanos thanos = Thanos(100,10,20,"THANOS");

    CHECK_EQ(thanos.get_pt_vida() , VIDA);
    CHECK_EQ(thanos.get_name() , NOME);
    CHECK_EQ(thanos.get_pt_ataque() , ATAQUE);
    CHECK_EQ(thanos.get_pt_defesa() , DESESA);
    CHECK_EQ(thanos.get_vivo() , VIVO);
}

TEST_CASE("2 - [Thanos] - Diminui vida") {
	Thanos thanos = Thanos(100,10,20,"THANOS");
	thanos.diminui_vida(10);

    CHECK_EQ(thanos.get_pt_vida(), VIDA-10);
}

TEST_CASE("3 - [Thanos] - Diminui vida/Negativo") {
	Thanos thanos = Thanos(10,10,20,"Thanos");
	
    CHECK_THROWS(thanos.diminui_vida(-10));
}

/*TEST_CASE("4 - [Thanos] - Realiza ataque") {
	Thanos thanos = Thanos(10,10,20,"Thanos");

    CHECK_EQ(thanos.realiza_ataque(), ATAQUE);
}*/

TEST_CASE("5 - [Thanos] - Thanos morto") {
	Thanos thanos = Thanos(10,10,20,"Thanos");
	thanos.diminui_vida(thanos.get_pt_vida());

    CHECK_EQ(thanos.get_vivo(),!VIVO);
}