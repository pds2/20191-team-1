#include <iostream>
#include <set>
#include "heroi.h"
#include "thanos.h"
#include "telas.h"
#include "partida.h"
#include "util.h"

/**
 * No main do programa é chamado a função que exibe a tela inicial, logo após instanciamos um objeto da
 * classe partida e chamamos o método para definir dificuldade e o método que inicializa o jogo.
 */

int main() {

    inicio_jogo();
    Partida partida = Partida();
    partida.set_dificuldade();
    partida.roda_partida();

    return 0;
}
