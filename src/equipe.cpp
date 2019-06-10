#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "equipe.h"
#include "heroi.h"
#include "telas.h"
#include "constants.h"

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


Equipe::Equipe(){
    this->esta_completo = false;
    this->herois_vivos = 5;
    this->portador_pedra = 0;
}

void Equipe::monta_equipe(Equipe& equipe){

    tela_monta_equipe();

    // === MOSTRA EQUIPE ATUAL ==============
    std::cout << "\nSua equipe:" << std::endl;

     mostra_equipe();

    // === MENU ==============================
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione a Opção"<< std::endl;
    std::cout<< "  Digite C para Consultar detalhes do herói"<< std::endl;
    std::cout<< "  Digite S para Selecionar o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite R para Remover o herói para a sua equipe"<< std::endl;
    std::cout<< "  Digite F para Finalizar montagem da equipe"<< std::endl;

    int id;
    char opcao;
    while(equipe_selecionada.size() < 5) {
        std::cout<< "\nOpção: ";
        std::cin>>opcao;
        opcao = toupper(opcao);
        if (opcao == 'C') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Consulta heroi" << std::endl;
        } else if (opcao == 'S') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Adiciona heroi" << std::endl;
             this->adiciona_heroi(id);
        } else if (opcao == 'R') {
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Remove heroi" << std::endl;
        } 
    }

    mostra_equipe();
}

void Equipe::adiciona_heroi(const int id_heroi){
    std::map<int, dado_heroi>::const_iterator itMap = MY_DADOS_HEROIS.find(id_heroi);
    Heroi *heroi = new Heroi(itMap->second._pt_vida, itMap->second._pt_ataque, itMap->second._pt_defesa, itMap->second._nome);
    this->equipe_selecionada.push_back(*heroi);
    std::cout<<equipe_selecionada.size()<<std::endl;
    if(equipe_selecionada.size() == 5){
        this->esta_completo = true;
    }
}

void Equipe::mostra_equipe() {
    system("clear");
    std::cout<<"Seus Herois escolhidos são: "<<std::endl;
    for(int i = 0; i < equipe_selecionada.size(); i++){
        if(equipe_selecionada[i].get_vivo() == true){
            std::cout<<"Nome: "<<equipe_selecionada[i].get_nome()<<std::endl;
            std::cout<<"id: "<< i+1 << std::endl;
            std::cout<<"Atributos: "<<"vida - "<<equipe_selecionada[i].get_pt_vida();
            std::cout<<" ataque - "<<equipe_selecionada[i].get_pt_ataque();
            std::cout<<" defesa - "<<equipe_selecionada[i].get_pt_defesa()<<std::endl;
        }
    }
}

int Equipe::realiza_ataque(){
    mostra_equipe();
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione a Opção"<< std::endl;
    std::cout<< "  Digite A  para escolher um herói para atacar"<< std::endl;
    std::cout<< "  Digite M  para mover a pera para outro herói"<< std::endl;
    bool aguardando_escolha = true;
    char opcao;
    int id;
    opcao = toupper(opcao);
    while(aguardando_escolha){
        if (opcao == 'A') {
            std::cout << "ID do heroi atacante: ";
            std::cin >> id;
            aguardando_escolha = false;
            return equipe_selecionada[id].realiza_ataque();
        } else if (opcao == 'S') {
            std::cout << "ID: ";
            std::cin >> id;
            aguardando_escolha = false;
            set_portador_pedra(id);
            return -1;
        } else {
            std::cout << "Opção Invalida, Por favor digite novamente! ";
            std::cin >> opcao;
            opcao = toupper(opcao);
        }
    }
}

void Equipe::sofre_ataque(int dano, int id_heroi){
    equipe_selecionada[id_heroi].diminui_vida(dano);
}

void Equipe::set_portador_pedra(const int id_heroi){
    this->portador_pedra = id_heroi;
}

bool Equipe::portador_pedra_esta_vivo(){

}