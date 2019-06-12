#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "equipe.h"
#include "heroi.h"
#include "telas.h"
#include "constants.h"
#include "util.h"

//Importar de arquivos - Sugestao - Ewerton
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
    int id = 0;
    char opcao = '\0';
    while(equipe_selecionada.size() < 5) {
        tela_monta_equipe();
        mostra_equipe();
        std::cout<< "\nOpção: ";
        std::cin>>opcao;
        opcao = toupper(opcao);
        
        try{
            if (opcao == 'S') {
                std::cout << "ID: ";
                std::cin >> id;
                std::cout << "Adiciona heroi" << std::endl;
                this->adiciona_heroi(id);
            } else if (opcao == 'R') {
                limpa_tela();
                mostra_equipe();
                std::cout << "Digite o Slot do heroi que deseja remover do seu time";
                std::cin >> id;
                std::cout << "Remove heroi" << std::endl;
                this->remove_heroi(id);
            }else{
                throw std::invalid_argument("Opção Inválida");
            }
        }catch(const std::invalid_argument& e){
            std::cout<<"Opção invalida, favor digitar uma opção valida!"<<std::endl;
            std::cin>>opcao;
        } 
    }
    this->portador_pedra = gera_inteiro(0,4);
}

void Equipe::adiciona_heroi(const int id_heroi){
    std::map<int, dado_heroi>::const_iterator itMap = MY_DADOS_HEROIS.find(id_heroi);
    Heroi *heroi = new Heroi(itMap->second._pt_vida, itMap->second._pt_ataque, itMap->second._pt_defesa, itMap->second._nome);

    this->equipe_selecionada.push_back(*heroi);
    std::cout<<equipe_selecionada.size()<<std::endl;
    
    if(equipe_selecionada.size() == 5)
        this->esta_completo = true;
}

void Equipe::mostra_equipe() {
     std::cout<<"====== Seus Herois Ativos ======= : "<<std::endl;
    for(unsigned int i = 0; i < equipe_selecionada.size(); i++){
        if(equipe_selecionada[i].get_vivo() == true){
            std::cout<<"Slot: "<< i+1<<" Nome: "<<equipe_selecionada[i].get_name()<<std::endl;
            std::cout<<"Atributos: "<<"vida - "<<equipe_selecionada[i].get_pt_vida();
            std::cout<<" ataque - "<<equipe_selecionada[i].get_pt_ataque();
            std::cout<<" defesa - "<<equipe_selecionada[i].get_pt_defesa()<<std::endl;
        }
    }
    if(equipe_selecionada.size() >= 5){
        std::cout<<"O portador da pedra é "<<equipe_selecionada[portador_pedra -1].get_name() <<std::endl;
    }
}

int Equipe::realiza_ataque(){
    limpa_tela();
    mostra_equipe();
    std::cout<< "\nMENU"<< std::endl;
    std::cout<< "Selecione a Opção"<< std::endl;
    std::cout<< "  Digite A  para escolher um herói para atacar"<< std::endl;
    std::cout<< "  Digite M  para mover a pera para outro herói"<< std::endl;
    bool aguardando_escolha = true;
    char opcao = '\0';
    int id = 0;
    std::cin >> opcao;
    opcao = toupper(opcao);

    while(aguardando_escolha){
        try{
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
                throw std::invalid_argument("Opção Inválida");
            }
        }catch(const std::invalid_argument& e){
            std::cout<<"Opção invalida, favor digitar uma opção valida!"<<std::endl;
            std::cin >> opcao;
            opcao = toupper(opcao);
        }
    }
    return 0;
}

int Equipe::sofre_ataque(int dano){
    int alvo = 0; 
    do{
        alvo = gera_inteiro(0,4);
    }while (equipe_selecionada[alvo].get_vivo() == false);
    equipe_selecionada[alvo].diminui_vida(dano);
    return alvo;
}

void Equipe::set_portador_pedra(const int id_heroi){
    this->portador_pedra = id_heroi;
}

int Equipe::get_id_portador_pedra(){
    return this->portador_pedra;
}

int Equipe::get_herois_selecionados(){//Mudar nome do metodo
    return this->equipe_selecionada.size();
}

int Equipe::get_num_herois_vivos(){
    return this->herois_vivos;
}

//Este metodo é realmente necessario ?
std::string Equipe::get_nome_heroi(const int id_heroi){
    return equipe_selecionada[id_heroi].get_name();
}

bool Equipe::get_equipe_completa(){
	return this->esta_completo;
}

bool Equipe::portador_pedra_esta_vivo(){//Melhorar condicao de verificacao
    if(this->equipe_selecionada.size())
        return equipe_selecionada[portador_pedra].get_vivo();
    else 
        return false;
}

void Equipe::remove_heroi(const int id_heroi){
    if(this->equipe_selecionada.size())
        equipe_selecionada.erase(equipe_selecionada.begin()+id_heroi);
    else
        throw "A equipe nao possui Herois";
}

bool Equipe::get_status_heroi(const int id_heroi){
    return equipe_selecionada[id_heroi].get_vivo();
}