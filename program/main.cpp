#include <iostream>
#include <set>
#include "heroi.h"
#include "thanos.h"
#include "telas.h"
#include "partida.h"
#include "util.h"

int main() {

    inicio_jogo();
    Partida partida = Partida();
    partida.set_dificuldade();
    partida.roda_partida();

    return 0;
}
