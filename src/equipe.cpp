#include <vector>
#include <iostream>
#include <string>
#include "equipe.h"
#include "heroi.h"
#include "telas.h"
#include "constants.h"


Equipe::Equipe(){
    this->esta_completo = false;
    this->herois_vivos = 5;
    this->portador_pedra = 0;
}

void Equipe::monta_equipe(Equipe& equipe){

    tela_monta_equipe();

    // === MOSTRA EQUIPE ATUAL ==============
    std::cout << "\nSua equipe:" << std::endl;

//    mostra_equipe(equipe);

    // === MENU ==============================
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione a Opção"<< std::endl;
    std::cout<< "  Digite C para Consultar detalhes do herói"<< std::endl;
    std::cout<< "  Digite S para Selecionar o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite R para Remover o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite F para Finalizar montagem da equipe"<< std::endl;


    std::map<int, dado_heroi> MY_DADOS_HEROIS = {
            {1,  dado_heroi(80,20,5,"Sem Historia no momento", "Capitã Marvel")},
            {2,  dado_heroi(70,30,5,"Sem Historia no momento", "Capitão América")},
            {3,  dado_heroi(90,10,5,"Sem Historia no momento", "Homem de Ferro")},
            {4,  dado_heroi(90,10,5,"Sem Historia no momento", "Thor")},
            {5,  dado_heroi(70,30,5,"Sem Historia no momento", "Homem Aranha")},
            {6,  dado_heroi(90,10,5,"Sem Historia no momento", "Hulk")},
            {7,  dado_heroi(60,40,5,"Sem Historia no momento", "Doutor Estranho")},
            {8,  dado_heroi(60,40,5,"Sem Historia no momento", "Visao")},
            {9,  dado_heroi(90,10,5,"Sem Historia no momento", "Pantera Negra")},
            {10,  dado_heroi(70,30,5,"Sem Historia no momento", "Viuva Negra")}
    };

    int id;
    char opcao;

    while(true) {
        std::cout<< "\nOpção: ";
        std::cin>>opcao;
        opcao = toupper(opcao);
        if (opcao == 'C') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Consulta heroi" << std::endl;
            // tela_consulta(id);
        } else if (opcao == 'S') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Adiciona heroi" << std::endl;

            //acha o heroi certo pelo ID
            std::string aux = MY_DADOS_HEROIS[id]->_nome;

            //passa os parâmetros para a função adiciona
            this->adiciona_heroi(heroi_selecionado._pt_vida);
        } else if (opcao == 'R') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Remove heroi" << std::endl;
            //remove_heroi(id);
        } else if (opcao == 'F') {
            if (this->esta_completo) {
                return;
            } else
                std::cout << "Oh não, sua equipe ainda não está completa!" << std::endl;
            //remove_heroi();
        } else {
            std::cout << "Opção invalida, digite novamente" << std::endl;
        }
    }
}

void Equipe::adiciona_heroi(const int id_heroi){
    //recebe as info necessárias para inicializar o objeto
    //instancia Heroi
    //adiciona no set

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
