#include "personagem.h"
#include "heroi.h"


//Heroi::Heroi(int pt_vida, int pt_ataque, int defesa, string name){
Heroi::Heroi(const int pt_vida, const int pt_ataque, const int defesa){
    this->pt_vida = pt_vida;
    this->pt_ataque = pt_ataque;
    this->pt_defesa = pt_defesa;
    this->bonus_ataque = 0.05;
    this->vivo = true;
}

void Heroi::diminui_vida(const int dano_recebido){

}

const int Heroi::realiza_ataque(){
    return 1;
}

int Heroi::get_ataque_com_bonus() {
//	return this->pt_ataque * (1 + this->bonus_ataque);
    return 1;
}

bool Heroi::get_vivo() {
//	return this->vivo;
    return true;
}



