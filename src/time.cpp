#include "time.h"
#include "heroi.h"
#include <vector>
#include <iostream>

using namespace std;

Time::Time()
{
}

void Time::adiciona_heroi(int id)
{
	this->herois.insert(id);
}

void Time::remove_heroi(int id)
{
	this->herois.erase(id); 
	
}
int Time::quantidade_heroi()
{
	return herois.size();
}
void Time::aplica_dano_time(const int id_heroi, const double dano)
{
	
}

void Time::aplica_bonus_ataque()
{
}

void Time::recupera_vida_time()
{
}

void Time::troca_pedra(const int id_destinatario)
{
}
