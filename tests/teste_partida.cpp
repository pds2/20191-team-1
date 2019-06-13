#include "doctest.h"
#include "partida.h"


TEST_CASE("1 - [Partida] - Construtor") {
    Partida partida;

    CHECK_EQ(partida.get_turno(), true);
    CHECK_EQ(partida.get_esta_ativo(), true);
    CHECK_EQ(partida.get_esta_ativo(), true);
}

TEST_CASE("2 - [Partida] - Setters and Getters") {
    Partida partida;

    partida.set_turno(false);
    CHECK_EQ(partida.get_turno(), false);

    partida.set_esta_ativo(true);
    CHECK_EQ(partida.get_esta_ativo(), true);

}