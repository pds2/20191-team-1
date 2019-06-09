#include <map>
#include "personagem.h"
#include "thanos.h"
#include "randomize.h"

Thanos::Thanos(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome)
{}

// Metodo se repete em duas classes da mesma forma
/*void Thanos::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;
    
    // Inserir thow caso valor negativo - Ewerton 
    if (this->pt_vida <=0){
        this->vivo = false;
    }
}*/

const int Thanos::realiza_ataque(){
    //1 - decidir qual ataque
    int qual_ataque = gera_inteiro(1, 6);

    //2 - buscar os dados do ataque selecionado
    std::map<int, std::pair<int, bool>> ataque_thanos = {
        {1, std::make_pair(20, true)},
        {2, std::make_pair(40, false)},
        {3, std::make_pair(10, true)},
        {4, std::make_pair(05, true)},
        {5, std::make_pair(05, false)},
        {6, std::make_pair(10, false)}
    };

    std::pair<int, bool> dados_ataque =ataque_thanos[qual_ataque];

    //3 - rodar o dado pra ver o ataque efetivo
    int dano_causado = gera_inteiro(1, dados_ataque.second);

    // Batlaha::turno_vilao deve decidir em quem vai ser o dano
    return dano_causado;
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