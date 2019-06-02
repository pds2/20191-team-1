
#ifndef CENARIO_H
#define CENARIO_H

#include <set>
#include <string>
#include <heroi.h>

using namespace std;

class Cenario {

	private:
		string name;
		string mensagem;
		set<int> ids_herois_beneficiados;

	public:
		Cenario(string name, string mensagem, set<int> ids_herois_beneficiados);
		set<int> get_herois_com_bonus();
		string get_name();
		string get_mensagem();

};

#endif