#include "partida.h"
#include "thanos.h"
#include "equipe.h"
#include "telas.h"
#include "util.h"


/*
    *  @method {Metodo construtor da partida}
    *  @param {void}
    *  @return {void}
*/
Partida::Partida(){
    this->turno = true;
    this->esta_ativo = true;
    this->equipe = Equipe();
    this->thanos = new Thanos(200, 80, 50, "Thanos");// Criar constante para valores
}

/*
    *  @method {Metodo get turno}
    *  @param {void}
    *  @return {bool - retorna um booleano que define de quem é a vez no jogo}
*/
bool Partida::get_turno(){
    return  this->turno;
}

/*
    *  @method {Metodo que define de quem é o turno no jogo setando o atributo turno para true ou false}
    *  @param {bool - turno}
    *  @return {void}
*/
void Partida::set_turno(bool turno){
    this->turno = turno;
}

/*
    *  @method {Metodo que retorna se um personagem está ativo}
    *  @param {void}
    *  @return {bool - Atribute que define se o personagem está ou não ativo}
*/
bool Partida::get_esta_ativo() {
    return this->esta_ativo;
}

/*
    *  @method {Metodo que define se o personagem está ativo}
    *  @param {bool - valor booleano que define se o personagem está ativo}
    *  @return {void}
*/
void Partida::set_esta_ativo(bool esta_ativo){
   this->esta_ativo = esta_ativo;
}

/*
    *  @method {Metodo roda partida: monta equipe e alterna os turnos}
    *  @param {void}
    *  @return {void}
*/
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

/*
    *  @method {Metodo que realiza as ações de acordo com a escolha do usuário no turno do jogador}
    *  @param {void}
    *  @return {void}
*/
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
        thanos->diminui_vida(dano);
    }

    if(thanos->get_pt_vida() <= 0) {
        tela_vitoria_jogador();
        set_esta_ativo(false);
    }
}

/*
    *  @method {Metodo que realiza as ações no turno Thanos (turno da máquina)}
    *  @param {void}
    *  @return {void}
*/
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

/*
    *  @method {Metodo que retorna a dificuldade do jogo, sendo Fácil, Médio ou dificil}
    *  @param {void}
    *  @return {char - Dificuldade do jogo}
*/
char Partida::get_dificuldade() {
    return this->dificuldade;
}

/*
    *  @method {Metodo que define a dificuldade do jogo de acordo com a escolha do usuário}
    *  @param {void}
    *  @return {void}
*/
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