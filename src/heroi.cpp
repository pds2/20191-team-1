#include "heroi.h"

/**
 *
 * @method { Metodo construtor da classe Heroi }
 * @param { const int pt_vida - Pontos de vida do Heroi }
 * @param { const int pt_ataque - Pontos de ataque do Heroi }
 * @param { const int defesa - Pontos de defesa do Heroi }
 * @return { void }
 *
*/
Heroi::Heroi(const int pt_vida, const int pt_ataque, const int defesa){
    this->pt_vida = pt_vida;
    this->pt_ataque = pt_ataque;
    this->pt_defesa = pt_defesa;
    this->bonus_ataque = 0.05;//Utilizar constantes
    this->vivo = true;
}

/**
 *
 * @method { Metodo que reduz a vida do Heroi }
 * @param { const int dano_recebido - Pontos de danos ao Heroi }
 * @return { void }
 *
*/
void Heroi::diminui_vida(const int dano_recebido){

}

/**
 *
 * @method { Metodo que reduz a vida do Heroi }
 * @param { const int dano_recebido - Pontos de danos ao Heroi }
 * @return { void }
 *
*/
const int Heroi::realiza_ataque(){
    return 1;
}

/**
 *
 * @method { Metodo que retorna bonus de ataque do Heroi }
* @param { void }
 * @return { void }
 *
*/
int Heroi::get_ataque_com_bonus() {
//	return this->pt_ataque * (1 + this->bonus_ataque);
    return 1;
}

/**
 *
 * @method { Metodo que verifica se Heroi esta vivo }
 * @param { void }
 * @return { bool - Heroi vivo ou nao }
 *
*/
bool Heroi::get_vivo() {
//	return this->vivo;
    return true;
}

// Inicio Gets alternativos 
/*
 * Avaliar se é melhor implementar na interface ou criar um tipo abastrado
*/

/**
 *
 * @method { Metodo que retorna pontos de vida do Heroi}
 * @param { void }
 * @return { int - Pontos de vida do Heroi }
 *
*/
int Heroi::get_pt_vida(){
    return this->pt_vida;
}

/**
 *
 * @method { Metodo que retorna pontos de ataque do Heroi}
 * @param { void }
 * @return { int - Pontos de ataque do Heroi }
 *
*/
int Heroi::get_pt_ataque(){
    return this->pt_ataque;
}

/**
 *
 * @method { Metodo que retorna pontos de ataque do Heroi}
 * @param { void }
 * @return { int - Pontos de ataque do Heroi }
 *
*/
int Heroi::get_pt_defesa(){
    return this->pt_defesa;
}

// FIm Gets alternativos

