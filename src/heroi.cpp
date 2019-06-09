#include "heroi.h"
#include "constants.h"

; //todo descobrir pq tá pedindo esse ; aqui!!

// Metodo se repete em duas classes da mesma forma
/*void Heroi::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;

    if (this->pt_vida <=0){
        this->vivo = false;
    }
}*/

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem(pt_vida, pt_ataque, pt_defesa, nome),bonus_ataque(BONUS_ATAQUE){} //ONDE TA SENDO DEFINIDO ESSE BONUS_ATAQUE?

const int Heroi::realiza_ataque(){
    //TODO
    double dano_realizado = 10.0;
    return dano_realizado;
}

int Heroi::get_ataque_com_bonus() {
	return this->pt_ataque * (1 + this->bonus_ataque);
}

bool Heroi::get_vivo() {
	return this->vivo;
}

int Heroi::get_pt_vida(){
    return this->pt_vida;
}

int Heroi::get_pt_ataque(){
    return this->pt_ataque;
}

int Heroi::get_pt_defesa(){
    return this->pt_defesa;
}

