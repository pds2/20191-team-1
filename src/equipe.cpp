#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "equipe.h"
#include "heroi.h"
#include "telas.h"
#include "constants.h"
#include "util.h"

#define NUM_EQ 5 //número máximo de integrantes de uma equipe.
#define ID_PEDRA 0
#define MIN_ID 1 // O ID do personagem não pode ser menor que 0
#define MAX_ID 10 // O ID do personagem não pode ser maior que 10

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
}; //Map que armazena os dados (Nome e descrição) de cada Héroi.


/*
    *  @method {Metodo construtor do objeto Equipe}
    *  @param {void}
    *  @return {void}
*/

Equipe::Equipe(){

    this->esta_completo = false;
    this->herois_vivos = NUM_EQ;
    this->portador_pedra = ID_PEDRA;
}


/*
    *  @method {Metodo que monta equipe segundo escolhar do jogador}
    *  @param {Equipe& equipe - Referencia de um objeto do tipo Equipe}
    *  @return {void}
*/
void Equipe::monta_equipe(Equipe& equipe){


    int id = 0;
    char opcao = '\0';
    while(equipe_selecionada.size() < 5) {
        opcao = '\0';
        id = 0;

        tela_monta_equipe();
        mostra_equipe();
        
        std::cin.clear();
        std::cout<< "\nOpção: ";
        std::cin>>opcao;
        opcao = toupper(opcao);
        
        try{
            if (opcao == 'S') {
                std::cout << "ID: ";
                std::cin >> id;
                if(id >= 1 && id <= 10){
                    std::cout << "Adiciona heroi" << std::endl;
                    this->adiciona_heroi(id);
                }else{
                    std::cout << std::endl << "\tId do Heroi invalido" << std::endl;
                    pause();
                }
            } else if (opcao == 'R') {
                limpa_tela();
                mostra_equipe();
                std::cout << "Digite o Slot do heroi que deseja remover do seu time";
                std::cin >> id;
                if(id >= 0 && id <= 9){
                    std::cout << "Remove heroi" << std::endl;
                    this->remove_heroi(id-1);
                }else{
                    std::cout << std::endl << "\tId do Heroi invalido" << std::endl;
                    pause();
                }
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


/*
    *  @method {Metodo que adiciona uma Heroi a Equipe}
    *  @param {const int id_heroi - Id do Heroi a ser adicionado}
    *  @return {void}
*/
void Equipe::adiciona_heroi(const int id_heroi){

    if(this->equipe_selecionada.size() < NUM_EQ && id_heroi >= MIN_ID && id_heroi <= MAX_ID){
        std::map<int, dado_heroi>::const_iterator itMap = MY_DADOS_HEROIS.find(id_heroi);

        Heroi *heroi = new Heroi(itMap->second._pt_vida, itMap->second._pt_ataque, itMap->second._pt_defesa, itMap->second._nome);

        this->equipe_selecionada.push_back(*heroi);
        std::cout<<equipe_selecionada.size()<<std::endl;
        
        if(equipe_selecionada.size() == NUM_EQ)
            this->esta_completo = true;

    }else if(id_heroi < 1 || id_heroi > 10) {
        throw "Id do heroi invalido.";
    }
    else if(this->equipe_selecionada.size() == NUM_EQ )
        throw "Equipe esta completa.";
}


/*
*  @method {Exibe Herois selecionados para a Equipe}
*  @param {void}
*  @return {void}
*/
void Equipe::mostra_equipe() {

     std::cout<<"\n\n\n"
                "=====================================================\n"
                "                      SUA EQUIPE                     \n"
                "=====================================================\n"<<std::endl;

    for(unsigned int i = 0; i < equipe_selecionada.size(); i++){
        if(equipe_selecionada[i].get_vivo() == true){
            std::cout<<"Slot: "<< i+1<<" Nome: "<<equipe_selecionada[i].get_name()<<std::endl;
            std::cout<<"Atributos: "<<"vida - "<<equipe_selecionada[i].get_pt_vida();
            std::cout<<" ataque - "<<equipe_selecionada[i].get_pt_ataque();
            std::cout<<" defesa - "<<equipe_selecionada[i].get_pt_defesa();
            std::cout<<" Vivo - "<<equipe_selecionada[i].get_vivo()<<std::endl;
        }
    }
    if(equipe_selecionada.size() >= 5){
        std::cout<<"O portador da pedra é "<<equipe_selecionada[portador_pedra -1].get_name() <<std::endl;
    }
}


/*
*  @method {Realiza a escolha entre atacar ou trocar o portador da pedra }
*  @param {void} 
*  @return { int - Dano realizado pelo Heroi}
*/
int Equipe::realiza_ataque(){

    limpa_tela();
    mostra_equipe();
    std::cout<< std::endl << "MENU"<< std::endl;
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
            } else if (opcao == 'M') {
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

/*
 *  @method {Difere um ataque aleatorio sobre um Heroi aleatorio}
 *  @param {int dano - Dano inferido sobre a Equipe} 
 *  @return {int - Id do heroi afetado}
*/
int Equipe::sofre_ataque(int dano){
    int alvo = 0; 
    do{
        alvo = gera_inteiro(0,4);
    }while (equipe_selecionada[alvo].get_vivo() == false);

    equipe_selecionada[alvo].diminui_vida(dano);
    return alvo;
}

/*
 *  @method {Define o id do Heroi portador da pedra}
 *  @param {const int id_heroi - Id do novo portador da pedra} 
 *  @return {void}
*/
void Equipe::set_portador_pedra(const int id_heroi){

    //Verifica se id esta em intervalo valido ou se existe Heroi na Equipe
    if(this->equipe_selecionada.size() > 0 && id_heroi >= MIN_ID && id_heroi <= MAX_ID)
        this->portador_pedra = id_heroi;
    //Verifica se o Id e invalido
    else if(id_heroi < MIN_ID || id_heroi > MAX_ID)
        throw "Id do heroi invalido.";
    //Verifica se Equipe esta vazia
    else if(this->equipe_selecionada.size() == 0)
        throw "Equipe vazia.";
}

/*
 *  @method {Retorna id do portador da pedra}
 *  @param {void} 
 *  @return {int - Id do atual portador da pedra}
*/
int Equipe::get_id_portador_pedra(){
    return this->portador_pedra;
}

/*
 *  @method {Retorna quandidade de herois selecionados para Equipe}
 *  @param {void} 
 *  @return {int - Quanidade de herois na Equipe}
*/
int Equipe::get_herois_selecionados(){//Mudar nome do metodo
    return this->equipe_selecionada.size();
}

/*
 *  @method {Retorna a quatidade de Herois ainda vivos}
 *  @param {void} 
 *  @return {int - Numero de Herois vivos}
*/
int Equipe::get_num_herois_vivos(){
    return this->herois_vivos;
}

//||
/*
 *  @method {Retorna o nome de um Heroi da Equipe}
 *  @param {const int id_heroi - Id de um Heroi} 
 *  @return {std::string - Nome do Heori}
*/
std::string Equipe::get_nome_heroi(const int id_heroi){
    return equipe_selecionada[id_heroi].get_name();
}

/*
 *  @method {Checa se a Equipe esta completa}
 *  @param {void} 
 *  @return {bool - true[Equipe completa], false[Equipe incomleta]}
*/
bool Equipe::get_equipe_completa(){
	return this->esta_completo;
}

/*
 *  @method {Verifica se o Heroi portador da pedra esta vivo}
 *  @param {void} 
 *  @return {bool - true[Heroi morto], false[Heroi vivo]}
*/
bool Equipe::portador_pedra_esta_vivo(){//Melhorar condicao de verificacao
    if(this->equipe_selecionada.size())
        return equipe_selecionada[portador_pedra].get_vivo();
    else 
        return false;
}

/*
 *  @method {Remove um Heroi da Equipe}
 *  @param {const int id_heroi - Id do Heroi a ser removido da Equipe} 
 *  @return {void}
*/
void Equipe::remove_heroi(const int id_heroi){
    if(this->equipe_selecionada.size())
        equipe_selecionada.erase(equipe_selecionada.begin()+id_heroi);
}

/*
 *  @method {Retorna status de vida de um Heroi da Equipe}
 *  @param {const int id_heroi - Id de um Heroi} 
 *  @return {bool - true[Heroi morto], false[Heroi vivo]}
*/
bool Equipe::get_status_heroi(const int id_heroi){
    return equipe_selecionada[id_heroi].get_vivo();
}