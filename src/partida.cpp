#include <string>
#include "time.h"
#include "telas.h"
#include "partida.h"
#include <iostream>


using namespace std;

Partida::Partida() {
	this->ganhador = false;
	this-> taxa_recuperacao = 0;
	this->time = nullptr;
	this->thanos = nullptr;
	this->batalha = nullptr;
}


void Partida::roda_partida() {
	//TODO: gerenciar a partida
}

double Partida::get_taxa_recuperacao() {
	return this->taxa_recuperacao;
}

char Partida::get_dificuldade() {
	return this->dificuldade;
}

void Partida::set_dificuldade(char dificuldade) {
	this->dificuldade = dificuldade;
	if(dificuldade == 'F') {
		this->taxa_recuperacao = 0.5;
	} else if(dificuldade == 'M') {
		this->taxa_recuperacao = 0.25;
	}
}

void Partida::set_time() {
	Time time;
	Telas telas;
	telas.tela_personagem();
	while(time.quantidade_heroi() < 5){
		int id;
		char opcao;
		cin>>id>>opcao;
		opcao = toupper(opcao);
		while(opcao != 'A' && opcao != 'R' && opcao != 'D'){
			cout<<"Opcao invalida, favor digite novamente!"<<endl;
			cin>>opcao;
			opcao = toupper(opcao);
		}
		if(opcao == 'A') {
			time.adiciona_heroi(id);
		}else if(opcao == 'R') {
			time.remove_heroi(id);
		}else if(opcao == 'D') {
			telas.tela_descricao_persoangem(id);
		}
	}
 	this->time = &time;
}

void Partida::set_batalha(Batalha* batalha) {
	this->batalha = batalha;
}

void Partida::set_thanos(Thanos* thanos){
	this->thanos = thanos;
}