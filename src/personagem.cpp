#include <iostream>
#include "personagem.h"


Personagem::Personagem(int pt_vida, int pt_ataque, int pt_defesa, std::string nome){
	if(pt_vida <= 0)
        throw "Pontos de vida do Personagem deve ser maior que Zero (0)";
    else if(pt_ataque <= 0) 
        throw "Pontos de ataque do Personagem deve ser maior que Zero (0)";
    else if(pt_defesa <= 0)
        throw "Pontos de defesa do Personagem deve ser maior que Zero (0)";
    else{
        this->nome = nome;
        this->pt_vida = pt_vida;
        this->pt_ataque = pt_ataque;
        this->pt_defesa = pt_defesa;
        this->vivo = true;
    }
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

bool Personagem::get_vivo(){
    return this->vivo;
}

/*
 *  @method {}
 *  @param {} 
 *  @return {}
*/
void Personagem::diminui_vida(const int dano_recebido){

    int dano = dano_recebido - this->pt_defesa;

    if(dano < 0) {
        dano = 0;
    } else{        
        this->pt_vida -= dano;
        if (this->pt_vida <=0)
            this->vivo = false;
    }
}
