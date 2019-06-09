#include <vector>
#include <iostream>
#include "equipe.h"
#include "heroi.h"
#include "telas.h"

void Equipe::monta_equipe(){

    //mostrar tela monta_equipe()
    //coletar input

    //while true
        //IF - Controle de fluxo - teclas de inserção, consulta, remoção e completo
        //SE pedir pra consultar,
            // chamar tela decricao_personagem(id)
        //else, if pedir pra adicionar
            //chama adciona_heroi()
        //else,SE pedir pra prosseguir
            //se len.time == 5
                //return
            //else,
                //mostra mensagem de que a equipe não está completa

    tela_monta_equipe(this);
    while(true){

    }

}
void Equipe::mostra_equipe(){
    std::cout << "1 " << "2 " << "3 " << "4 " << "5 "<< std::endl;
    for(auto it = this->equipe.begin(); it!= this->equipe.end(); it++ ){
        std::cout << "1 " << "2 " << "3 " << "4 " << "5 " << std::endl;
    }

}



//void Equipe::adiciona_heroi(int id){
//	this->herois.insert(id);
//}
//
//void Equipe::remove_heroi(int id){
//	this->herois.erase(id);
//}
//
//int Equipe::quantidade_heroi(){
//	return this->herois.size();
//}
//
//void Equipe::aplica_dano_Equipe(const int id_heroi, const double dano){
//
//}
//
//void Equipe::aplica_bonus_ataque(){
//}
//
//void Equipe::recupera_vida_Equipe(){
//}
//
//void Equipe::troca_pedra(const int id_destinatario){
//}
//
//std::set<int> Equipe::get_herois(){
//	return this->herois;
//}
//
//bool Equipe::get_Equipe_completo(){
//	return this->esta_completo;
//}
//
//int Equipe::get_num_herois_vivos(){
//	return this->herois_vivos;
//}
//
//int Equipe::get_id_portador_pedra(){
//	return this->portador_pedra;
//}
