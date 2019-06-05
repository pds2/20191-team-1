#include "doctest.h"
#include <iostream>
#include "time.h"

//using namespace  std;

#define NUM_HEROIS_VIVOS 0
#define ID_HEROI 0
#define ADD_HEROI1 0
#define ADD_HEROI2 -1
#define TIME_COMPLETO false

TEST_CASE("1 - [Time] - Construtor/Getters ") {
    Time time = Time();

    CHECK_EQ(time.get_time_completo(), TIME_COMPLETO);
    CHECK_EQ(time.get_num_herois_vivos(), NUM_HEROIS_VIVOS);
    CHECK_EQ(time.get_id_portador_pedra(), ID_HEROI);
}

TEST_CASE("2 - [Time] - Adiciona Time") {
	Time time = Time();
	time.adiciona_heroi(ADD_HEROI1);

    CHECK_EQ(time.get_num_herois_vivos(), NUM_HEROIS_VIVOS+1);
}

TEST_CASE("3 - [Time] - Adiciona Heroi/Repitido") {
    Time time = Time();
    
    CHECK_THROWS(time.adiciona_heroi(0));
    CHECK_THROWS(time.adiciona_heroi(0));
}

TEST_CASE("4 - [Time] - Adiciona Heroi/THROWS") {
    Time time = Time();

    CHECK_THROWS(time.adiciona_heroi(ADD_HEROI2));
}

TEST_CASE("5 - [Time] - Remove Heroi") {
    Time time = Time();
    
    for(int i=1;i<=5;i++)
        time.adiciona_heroi(i);

    time.remove_heroi(i);    
    CHECK_EQ(time.get_num_herois_vivos , 4));
}

TEST_CASE("6 - [Time] - Remove Heroi/THROWS") {
    Time time = Time();
    
    CHECK_THROWS(time.remove_heroi(ADD_HEROI1));
}

TEST_CASE("7 - [Time] - Remove Heroi/THROWS") {
    Time time = Time();
    
    CHECK_THROWS(time.remove_heroi());
}






TEST_CASE("4 - [Time] - Diminui vida/Negativo") {
	Time time = Time();
	time.diminui_vida();

    CHECK_THROWS(time.get_pt_vida(), VIDA-10);
}

TEST_CASE("5 - [Time] - Realiza ataque") {
	Time time = Time();

    CHECK_THROWS(time.realiza_ataque(), ATAQUE);
}

TEST_CASE("6 - [Time] - Ataque com bonus") {
	Time time = Time();

    CHECK_EQ(time.realiza_ataque(), ceil(ATAQUE*0.5));
}

TEST_CASE("7 - [Time] - Time vivo") {
	Time time = Time();

    CHECK_EQ(time.get_vivo(), VIVO);
}

TEST_CASE("8 - [Time] - Time morto") {
	Time time = Time();
	time.diminui_vida(time.get_vivo);

    CHECK_EQ(time.get_vivo(),!VIVO);
}

Time::Time(){
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
    return this->time;
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
