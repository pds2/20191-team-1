#include <map>
#include <string>
#include "personagem.h"
#include "thanos.h"
#include "randomize.h"

Thanos::Thanos(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome)
{}

const int Thanos::realiza_ataque(){

    std::map<int, std::pair<int, std::string>> ataque_thanos = {
            {1, std::make_pair(80, "Soco de raspão")},
            {2, std::make_pair(80, "Soco na cara")},
            {3, std::make_pair(80, "Super luva do poder")},
    };

    //1 - decidir qual ataque
    int qual_ataque = gera_inteiro(1, ataque_thanos.size());

    std::pair<int, std::string> dados_ataque = ataque_thanos[qual_ataque];

    //3 - rodar o dado pra ver o ataque efetivo
    int dano_causado = gera_inteiro(1, dados_ataque.first);

    // Batalha::turno_vilao deve decidir em quem vai ser o dano
    return dano_causado;
}
void Thanos::sofre_ataque(const int dano){
    pt_vida -= dano;
}
int Thanos::get_pt_vida(){
    return this->pt_vida;
}

int Thanos::get_pt_ataque(){
    return this->pt_ataque;
}

int Thanos::get_pt_defesa(){
    return this->pt_defesa;
}

bool Thanos::get_vivo() {
    return this->vivo;
}