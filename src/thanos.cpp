#include "personagem.h"
#include "thanos.h"

Thanos::Thanos(){
    //TODO
    //Ler o arquivo de tabelas.h
    //Trocar os valores chumbados abaixo

    this->nome = "Thanos";
    this->pt_vida = 100;
    this->pt_ataque = 10;
    this->pt_defesa = 20;
    this->vivo = true;
}

void Thanos::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;
    
    // Inserir thow caso valor negativo - Ewerton 
    if (this->pt_vida <=0){
        this->vivo = false;
    }
}

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