#include "personagem.h"

//=======================
//======= COMPLETA ======
//=======================

Personagem::Personagem(int pt_vida, int pt_ataque, int pt_defesa, std::string nome){
	this->nome = nome;
    this->pt_vida = pt_vida;
    this->pt_ataque = pt_ataque;
    this->pt_defesa = pt_defesa;
    this->vivo = true;
}


int Personagem::get_pt_vida(){
    return this->pt_vida;
}

int Personagem::get_pt_ataque(){
    return this->pt_ataque;
}

int Personagem::get_pt_defesa(){
    return this->pt_defesa;
}

std::string Personagem::get_name(){
    return this->nome;
}

void Personagem::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;

    if (this->pt_vida <=0){
        this->vivo = false;
    }
}
