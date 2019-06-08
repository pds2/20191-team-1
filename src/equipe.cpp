#include "equipe.h"
#include "heroi.h"
#include <vector>
#include <iostream>

Equipe::Equipe(){
	this->esta_completo = false;
	this->herois_vivos = 0;
	this->portador_pedra = 0;
}

void Equipe::adiciona_heroi(int id){
	this->herois.insert(id);
}

void Equipe::remove_heroi(int id){
	this->herois.erase(id); 
}

int Equipe::quantidade_heroi(){
	return this->herois.size();
}

void Equipe::aplica_dano_equipe(const int id_heroi, const double dano){
	
}

void Equipe::aplica_bonus_ataque(){
}

void Equipe::recupera_vida_Equipe(){
}

void Equipe::troca_pedra(const int id_destinatario){
}

std::set<int> Equipe::get_herois(){
	return this->herois;
}

bool Equipe::get_equipe_completa(){
	return this->esta_completo;
}

int Equipe::get_num_herois_vivos(){
	return this->herois_vivos;
}

int Equipe::get_id_portador_pedra(){
	return this->portador_pedra;
}
