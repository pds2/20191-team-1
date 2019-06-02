#ifndef TABELAS_H
#define TABELAS_H

#include <map>
#include <set>
#include <string>

using namespace std;

struct dados_heroi { 
    int id;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    string nome;
	double bonus_ataque;
}; 

struct dados_cenario {
	int id;
	string name;
	string mensagem;
	set<int> herois_com_bonus;
};

struct dados_ataque_thanos{
	bool atingeTodoTime;
	int dano;
	string mensagem;
};

class Tabelas {

private:
	map<int, dados_heroi> set_herois_disponiveis;
	map<int, dados_cenario> set_cenarios_disponiveis;
	map<int, dados_ataque_thanos> set_ataques_thanos_disponiveis;
	//TODO: mapear ascii art

public:
	void popular_set_herois_disponiveis();
	void popular_set_cenarios_disponiveis();
	void popular_set_ataques_thanos_disponiveis();

};

#endif