#ifndef CENARIO_H
#define CENARIO_H

#include <string>
#include <set>
#include <heroi.h>

class Cenario {

private:
	std::string name;
	std::string mensagem;
	std::set<int> herois_com_bonus;

public:
	Cenario();
	std::set<int> get_herois_com_bonus();
	std::string get_name();
	std::string get_mensagem();

};

#endif
