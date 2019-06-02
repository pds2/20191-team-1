#include "partida.h"
#include <string>
Partida::Partida()
{
	this->ganhador = false;
	this-> taxa_recuperacao = 0;
	this->time = nullptr;
	this->thanos = nullptr;
	this->batalha = nullptr;
}


void Partida::roda_partida()
{
	//TODO: gerenciar a partida
}

double Partida::get_taxa_recuperacao() {
	return this->taxa_recuperacao;
}

char Partida::get_dificuldade() {
	return this->dificuldade;
}

void Partida::set_dificuldade(char dificuldade){
	this->dificuldade = dificuldade;
	if(dificuldade == 'F') {
		this->taxa_recuperacao = 0.5;
	} else if(dificuldade == 'M') {
		this->taxa_recuperacao = 0.25;
	}
}

void Partida::set_time(Time* time) {
 	this->time = time;
}

void Partida::set_batalha(Batalha* batalha) {
	this->batalha = batalha;
}

void Partida::set_thanos(Thanos* thanos){
	this->thanos = thanos;
}