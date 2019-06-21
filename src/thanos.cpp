#include <map>
#include <string>
#include "personagem.h"
#include "thanos.h"
#include "randomize.h"

/*
 *  @method {Método construtor da classe Thanos}
 *  @param {} 
 *  @return {}
*/
Thanos::Thanos(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome)
{}

/*
 *  @method {Seleciona de maneira aleatoria quais bonus Thanos vai obter com as pedras do infinito}
 *  @param {void} 
 *  @return {int - Dano causado}
*/
const int Thanos::realiza_ataque(){
    std::map<int, std::pair<int, std::string>> ataque_thanos = {
            {1, std::make_pair(1.2, "Soco de raspão")},
            {2, std::make_pair(1.3, "Soco na cara")},
            {3, std::make_pair(1.4, "Super luva do poder")},
    };

    int qual_ataque = gera_inteiro(1, ataque_thanos.size());
    std::pair<int, std::string> dados_ataque = ataque_thanos[qual_ataque];
    int dano_causado = gera_inteiro(1, dados_ataque.first) * pt_ataque;
    return dano_causado;
}

