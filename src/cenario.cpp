#include <string>
#include "cenario.h"
#include "thanos.h"

using namespace std;

/**
 * 
 * @method { Metodo construtor da classe Cenario }
 * @param { void }
 * @return { void }
 * 
*/

Cenario::Cenario(string name, string mensagem, set<int> ids_herois_beneficiados) {
	this->name = name;
	this->mensagem = mensagem;
	this->ids_herois_beneficiados = ids_herois_beneficiados;
}

/**
 * 
 * @method { Metodo que retorna Herois que tem bonus de ataque em um Cenario }
 * @param { void }
 * @return { void }
 * 
*/
std::set<int> Cenario::get_herois_com_bonus(){
	return std::set<int>();
}

/**
 * 
 * @method { Metodo retorna nome do Cenario }
 * @param { void }
 * @return { void }
 * 
*/
std::string Cenario::get_name(){
	return std::string();
}

/**
 * 
 * @method { Metodo retorna mensagem do Cenario }
 * @param { void }
 * @return { void }
 * 
*/
std::string Cenario::get_mensagem(){
	return std::string();
}
