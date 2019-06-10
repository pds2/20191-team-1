#include "partida.h"
#include "telas.h"

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
    if(equipe.portador_pedra_esta_vivo() == false){
        tela_vitoria_thanos();
        set_esta_ativo(false);
    }
}

char Partida::get_dificuldade() {
    return this->dificuldade;
}

void Partida::set_dificuldade() {
    bool aguardando_opcao_valida = true;
    char opcao;
    tela_dificuldade();
    while(aguardando_opcao_valida == true){
        std::cin>>opcao;
        opcao = toupper(opcao);
        if(opcao != 'F' && opcao != 'M' && opcao != 'D'){
            std::cout<<"Opção invalida, favor digitar uma opção valida!"<<std::endl;
        }else {
            aguardando_opcao_valida = false;
            this->dificuldade = opcao;
        }
    }
    std::cout<<"Você escolheu a dificuldade: "<<this->dificuldade<<std::endl;
}


