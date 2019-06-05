#include "time.h"
#include "heroi.h"
#include <vector>
#include <iostream>

using namespace std;

Time::Time(){
	this->esta_completo = false;
	this->herois_vivos = 0;
	this->portador_pedra = 0;
}

void Time::adiciona_heroi(int id){
	this->herois.insert(id);
}

void Time::remove_heroi(int id){
	this->herois.erase(id); 
}

int Time::quantidade_heroi(){
	return herois.size();
}

void Time::aplica_dano_time(const int id_heroi, const double dano){
	
}

void Time::aplica_bonus_ataque(){
}

void Time::recupera_vida_time(){
}

void Time::troca_pedra(const int id_destinatario){
}

set<int> get_herois(){
	return this->heroi;
}

bool get_time_completo(){
	return this->esta_completo;
}

int get_num_herois_vivos(){
	return this->herois_vivos;
}

int get_id_portador_pedra(){
	return this->portador_pedra;
}
