#include "doctest.h"
#include "partida.h"

using namespace  std;

Partida partida;

TEST_CASE("1 - [Partida] - Construtor") {

    CHECK_EQ(partida.get_turno(), true);
    CHECK_EQ(partida.get_esta_ativo(), true);
}

TEST_CASE("2 - [Partida] - Setters and Getters") {
    partida.set_turno(false);
    CHECK_EQ(partida.get_turno(), false);

    partida.set_esta_ativo(true);
    CHECK_EQ(partida.get_esta_ativo(), true);

}

//Partida::Partida();

//void Partida::roda_partida();

//double Partida::get_taxa_recuperacao();

//char Partida::get_dificuldade();

//void Partida::set_dificuldade(char dificuldade);

//void Partida::set_time();

//void Partida::set_batalha(Batalha* batalha);

//void Partida::set_thanos(Thanos* thanos);
