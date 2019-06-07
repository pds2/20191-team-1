#include "personagem.h"
#include "thanos.h"

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
    return 1;
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