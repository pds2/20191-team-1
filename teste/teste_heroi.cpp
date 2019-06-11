#include "doctest.h"
#include <iostream>

#include "heroi.h"

TEST_CASE("1 - [Heroi] - Construtor") {
   Heroi heroi = Heroi(200, 15, 25, "heroi");
    CHECK_EQ(heroi.get_pt_vida(), 200);
    CHECK_EQ(heroi.get_pt_ataque(), 15);
    CHECK_EQ(heroi.get_pt_defesa(), 25);
}

TEST_CASE("2 - [Heroi] - Realiza ataque") {
     Heroi heroi = Heroi(200, 15, 25, "heroi");
     CHECK_EQ(heroi.realiza_ataque(), 10.0);

}

//TEST_CASE("3 - [Heroi] - Ataque com bonus()") {
//     Heroi heroi = Heroi(200, 15, 25, "heroi");
//     CHECK_EQ(heroi.get_ataque_com_bonus(), 15*(1+));
//}