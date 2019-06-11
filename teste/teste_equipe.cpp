#include "doctest.h"
#include <iostream>
#include "equipe.h"

#define NUM_HEROIS_VIVOS 0
#define ID_HEROI 0
#define ADD_HEROI1 0
#define ADD_HEROI2 -1
#define TIME_COMPLETO false

TEST_CASE("1 - [Equipe] - Construtor/Getters ") {
    Equipe equipe = Equipe();

    CHECK_EQ(equipe.get_time_completo(), TIME_COMPLETO);
    CHECK_EQ(equipe.get_num_herois_vivos(), NUM_HEROIS_VIVOS);
    CHECK_EQ(equipe.get_id_portador_pedra(), ID_HEROI);
}

TEST_CASE("2 - [Equipe] - Adiciona Equipe") {
	Equipe equipe = Equipe();
	equipe.adiciona_heroi(ADD_HEROI1);

    CHECK_EQ(equipe.get_num_herois_vivos(), NUM_HEROIS_VIVOS+1);
}

TEST_CASE("3 - [Equipe] - Adiciona Heroi/Repitido") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.adiciona_heroi(0));
    CHECK_THROWS(equipe.adiciona_heroi(0));
}

TEST_CASE("4 - [Equipe] - Adiciona Heroi/THROWS") {
    Equipe equipe = Equipe();

    CHECK_THROWS(equipe.adiciona_heroi(ADD_HEROI2));
}

TEST_CASE("5 - [Equipe] - Remove Heroi") {
    Equipe equipe = Equipe();
    
    for(int i=1;i<=5;i++)
        equipe.adiciona_heroi(i);

    equipe.remove_heroi(i);    
    CHECK_EQ(equipe.get_num_herois_vivos , 4));
}

TEST_CASE("6 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi(ADD_HEROI1));
}

TEST_CASE("7 - [Equipe] - Remove Heroi/THROWS") {
    Equipe equipe = Equipe();
    
    CHECK_THROWS(equipe.remove_heroi());
}



/*


TEST_CASE("4 - [Equipe] - Diminui vida/Negativo") {
	Equipe equipe = Equipe();
	equipe.diminui_vida();

    CHECK_THROWS(equipe.get_pt_vida(), VIDA-10);
}

TEST_CASE("5 - [Equipe] - Realiza ataque") {
	Equipe equipe = Equipe();

    CHECK_THROWS(equipe.realiza_ataque(), ATAQUE);
}

TEST_CASE("6 - [Equipe] - Ataque com bonus") {
	Equipe equipe = Equipe();

    CHECK_EQ(equipe.realiza_ataque(), ceil(ATAQUE*0.5));
}

TEST_CASE("7 - [Equipe] - Equipe vivo") {
	Equipe equipe = Equipe();

    CHECK_EQ(equipe.get_vivo(), VIVO);
}

TEST_CASE("8 - [Equipe] - Equipe morto") {
	Equipe equipe = Equipe();
	equipe.diminui_vida(equipe.get_vivo);

    CHECK_EQ(equipe.get_vivo(),!VIVO);
}

Equipe::Equipe(){
}

void Equipe::adiciona_heroi(int id){
    this->herois.insert(id);
}

void Equipe::remove_heroi(int id){
    this->herois.erase(id); 
}

int Equipe::quantidade_heroi(){
    return herois.size();
}

void Equipe::aplica_dano_time(const int id_heroi, const double dano){
    
}

void Equipe::aplica_bonus_ataque(){
}

void Equipe::recupera_vida_time(){
}

void Equipe::troca_pedra(const int id_destinatario){
}

set<int> get_herois(){
    return this->equipe;
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
*/