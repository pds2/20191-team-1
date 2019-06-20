#include "doctest.h"
#include "thanos.h"

#define VIDA 100
#define NOME "THANOS"
#define ATAQUE 10
#define DESESA 20
#define VIVO true

/* 
*   @method {Para testar o metodo construtor e sets Thanos}
*/
TEST_CASE("1 - [Thanos] - Construtor/Getters ") {
    Thanos thanos = Thanos(100,10,20,"THANOS");

    CHECK_EQ(thanos.get_pt_vida() , VIDA);
    CHECK_EQ(thanos.get_name() , NOME);
    CHECK_EQ(thanos.get_pt_ataque() , ATAQUE);
    CHECK_EQ(thanos.get_pt_defesa() , DESESA);
    CHECK_EQ(thanos.get_vivo() , VIVO);
}

/* 
*   @method {Para testar o metodo exceptions do construtor Thanos}
*/
TEST_CASE("2 - [Thanos] - Diminui vida") {
	Thanos thanos = Thanos(100,10,20,"THANOS");
    //20 Referente a defesa, 10 ataque efetivo
	thanos.diminui_vida(10 + 20);

    CHECK_EQ(thanos.get_pt_vida(), VIDA-10);
}

/* 
*   @method {Para testar o metodo que reduz vida do Thanos, nao curar thanos}
*/
TEST_CASE("3 - [Thanos] - Diminui vida/Negativo") {
	Thanos thanos = Thanos(10,10,20,"Thanos");
    thanos.diminui_vida(-10);
	
    CHECK_EQ(thanos.get_pt_vida(), 10);
}
/* 
*   @method {Para testar o metodo que verifica status de vida do Thanos}
*/
TEST_CASE("5 - [Thanos] - Thanos morto") {
	Thanos thanos = Thanos(10,10,20,"Thanos");
	thanos.diminui_vida(thanos.get_pt_vida() + thanos.get_pt_defesa());

    CHECK_EQ(thanos.get_pt_vida(),0);
}