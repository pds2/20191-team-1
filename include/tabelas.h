#ifndef TABELAS_H
#define TABELAS_H

#include "heroi.h"
#include "cenario.h"

#include <map>
using namespace std;

class Tabelas {
	private:
		
	public:
		Tabelas();
		map<int, Heroi> dados_heroi;
		map<int, Cenario> dados_cenarios;
	//map<int, Ataque_Thano> dados_ataque_thanos;
	//TODO: mapear ascii art
};

#endif