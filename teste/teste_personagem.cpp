#include "doctest.h"
#include <iostream>

#include "personagem.h"

TEST_CASE("1 - [Personagem] - Construtor") {
    Personagem personagem = Personagem(200, 15, 25, "personagem");
    CHECK_EQ(personagem.get_pt_vida(), 200);
    CHECK_EQ(personagem.get_pt_ataque(), 15);
    CHECK_EQ(personagem.get_pt_defesa(), 25);
    CHECK_EQ(personagem.get_name(), "personagem");
}