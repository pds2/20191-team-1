#include <string>
#include "heroi.h"
#include "constants.h"


double BONUS_ATAQUE = 0.05;

// Metodo se repete em duas classes da mesma forma
/*void Heroi::diminui_vida(const unsigned int dano_recebido){
    this->pt_vida -= dano_recebido;

    if (this->pt_vida <=0){
        this->vivo = false;
    }
}*/

Heroi::Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome):
    Personagem( pt_vida, pt_ataque, pt_defesa, nome)
{
    this->bonus_ataque = BONUS_ATAQUE;
}


const int Heroi::realiza_ataque(){
    //TODO
    double dano_realizado = 10.0;
    return dano_realizado;
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
