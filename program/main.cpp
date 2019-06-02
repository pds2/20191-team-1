#include <iostream>
#include "telas.h"
#include "partida.h"
#include "heroi.h"
#include "thanos.h"

using namespace std;
int main() {
//    int pt_vida, int pt_ataque, int defesa, string name
    Heroi viuva_negra = Heroi(10, 10, 5);
//    cout << viuva_negra.get_pt_vida() <<endl;

    Thanos thanos = Thanos();

//	Telas telas;
//	telas.tela_inicial();
//
//	Partida *partida = new Partida();
//	partida->set_dificuldade(telas.tela_dificuldade());
//	partida->set_time();
//
//	//Começa batalha
//	//Inicia rodada
//	//partida->set_time(telas.tela_personagem);
//
//
//	std::cout<< "Fim de execução! Good Bye!" << std::endl;
    return 0;
}