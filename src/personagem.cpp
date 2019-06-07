#include "personagem.h"

//=======================
//======= COMPLETA ======
//=======================


int Personagem::get_pt_vida(){
    return this->pt_vida;
}

int Personagem::get_pt_ataque(){
    return this->pt_ataque;
}

int Personagem::get_pt_defesa(){
    return this->pt_defesa;
}

string Personagem::get_name(){
    return this->nome;
}

void Personagem::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;

    if (this->pt_vida <=0){
        this->vivo = false;
    }
}
