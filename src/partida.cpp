#include "partida.h"
#include "thanos.h"
#include "equipe.h"
#include "telas.h"
#include "util.h"


Partida::Partida(){
    this->turno = true;
    this->esta_ativo = true;
    this->equipe = Equipe();
    this->thanos = new Thanos(200, 20, 50, "Thanos");// Criar constante para valores
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
    int hp_thanos = thanos->get_pt_vida();

    if(dano<0) {
        limpa_tela();
        std::cout << "\n\n\n\n\n" << std::endl;
        std::cout << " Pedra passada!" << std::endl;
        std::cout << "\n\n\n\n\n" << std::endl;
        pause();
        std::cout << "Teste" << std::endl;
    }else {
        tela_resultado_ataque_jogador(dano, hp_thanos);
        pause();
    }

    if(dano > 0){
        thanos->sofre_ataque(dano);
    }
    if(thanos->get_pt_vida() <= 0) {
        tela_vitoria_jogador();
        set_esta_ativo(false);
    }
}


void Partida::turno_thanos() {
    int dano = thanos->realiza_ataque();
    int target = equipe.sofre_ataque(dano);

    tela_resultado_ataque_thanos(equipe.get_nome_heroi(target), dano, "Soco");

    if(equipe.get_status_heroi(target) == false){
        tela_morte_heroi_sem_pedra(equipe.get_nome_heroi(target));
    }

    if(equipe.portador_pedra_esta_vivo() == false){
        tela_vitoria_thanos();
        set_esta_ativo(false);
    }
}


char Partida::get_dificuldade() {
    return this->dificuldade;
}


void Partida::set_dificuldade() {
    char opcao = '\0';

    tela_dificuldade();

    try{
        std::cin>>opcao;
        opcao = toupper(opcao);
        std::cout << "você digitou: " << opcao << std::endl;

        if(opcao != 'F' && opcao != 'M' && opcao != 'D'){
            std::cout<<"Opção invalida, favor digitar uma opção valida!"<<std::endl;
            throw std::invalid_argument("Opção Inválida");
        }
    }catch(const std::invalid_argument& e){
        Partida::set_dificuldade();
    }

    this->dificuldade = opcao;
    std::cout<<"Você escolheu a dificuldade: "<<this->dificuldade<<std::endl;
}