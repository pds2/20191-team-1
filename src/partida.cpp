#include "partida.h"

Partida::Partida(){
    this->turno = true;
    this->esta_ativo = true;
    this->equipe = Equipe();
    this->thanos = new Thanos(200, 20, 50, "Thanos");
}

bool Partida::get_turno(){
    return  this->turno;
}

void Partida::set_turno(bool turno){
    this->turno = turno;
}

bool Partida::get_esta_ativo() {
    return this->esta_ativo;
}

void Partida::set_esta_ativo(bool esta_ativo){
   this->esta_ativo = esta_ativo;
}


void Partida::roda_partida() {
    this->equipe.monta_equipe(this->equipe);
    while(get_esta_ativo() == true) {
        if(get_turno() == true){
            turno_jogador();
        } else if(get_turno() == false){
            turno_thanos();
        }
        set_turno(!get_turno());
    }
}

void Partida::turno_jogador() {
    int dano = equipe.realiza_ataque();
    thanos->sofre_ataque(dano);
}

void Partida::turno_thanos() {
    int dano = thanos->realiza_ataque();
    int target = gera_inteiro(1, 5);
    //equipe.sofre_ataque(target, dano);
}

char Partida::get_dificuldade() {
    return this->dificuldade;
}

void Partida::set_dificuldade() {
    char opcao;
    do{
        //todo - colocar a tela dificuldade quando estiver pronta
        //tela_dificuldade();
        std::cout<< "Selecione a dificuldade do jogo: "<< std::endl;
        std::cout<< "Digite F para Facil"<< std::endl;
        std::cout<< "Digite M para Medio"<< std::endl;
        std::cout<< "Digite D para Dificil"<< std::endl;
        std::cin >> opcao;
        std::cout << "você digitou: " << opcao << std::endl;
        opcao = tolower(opcao);
        std::cout << "você digitou: " << opcao << std::endl;
        if (opcao != 'f' && opcao != 'm' && opcao != 'd')
            std::cout << "Por favor, digite uma opção válida" << std::endl;
    }while(opcao != 'f' && opcao != 'm' && opcao != 'd');

    this->dificuldade = opcao;
}


