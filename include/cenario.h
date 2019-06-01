#ifndef CENARIO_H
#define CENARIO_H

#include <bits/stdc++.h>


using namespace std;

class Cenario {

private:
	string name;
	string mensagem;
	set<int> herois_com_bonus;

public:
	Cenario(string name, string mensagem, set<int> herois_com_bonus);
	set<int> get_herois_com_bonus();
	string get_name();
	string get_mensagem();

};

#endif
