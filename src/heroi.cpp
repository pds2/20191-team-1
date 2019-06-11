#include <string>
#include "heroi.h"
#include "telas.h"
#include "constants.h"

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome){}

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem(pt_vida, pt_ataque, pt_defesa, nome),bonus_ataque(BONUS_ATAQUE){} //ONDE TA SENDO DEFINIDO ESSE BONUS_ATAQUE?

const int Heroi::realiza_ataque() {
    int dado = gera_inteiro(1, 6);
    int dano = get_pt_ataque();
    return dado*dano;
}

void Heroi::diminui_vida(const unsigned int dano_recebido) {
    pt_vida = get_pt_vida() - dano_recebido;
    if(pt_vida <= 0) {
        this->vivo = false;  
    }
}

std::string Heroi::get_nome() const{
    return this->nome;
}

bool Heroi::get_vivo() const {
	return this->vivo;
}

int Heroi::get_pt_vida() const{
    return this->pt_vida;
}

int Heroi::get_pt_ataque() const{
    return this->pt_ataque;
}

int Heroi::get_pt_defesa() const{
    return this->pt_defesa;
}    