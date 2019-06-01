#include <string>
#include "cenario.h"
#include "thanos.h"

/**
 * 
 * @method { Metodo construtor da classe Cenario }
 * @param { void }
 * @return { void }
 * 
*/
Cenario::Cenario(){
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
