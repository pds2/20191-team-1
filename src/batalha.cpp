#include "batalha.h"
#include "cenario.h"
#include "randomizar.h"
#include <string>

Batalha::Batalha() {
}

void Batalha::set_cenario(Cenario *cenario) {
	this->cenario = cenario;
}
void Batalha::processa_morte_heroi() {
	//Verificar se algum heroi morreu
		//Se for heroi com pedra:
			//Chama fim de jogo.
		//Se for outro heroi
			//Processegue o jogo mas set o bool esta_vivo do heroi como false
	//Chama turno_jogador()
}

void Batalha::troca_cenario() {
	//TODO: Busca numero randomico entre 1 a 6 na classe randomize;
	//TODO: recupera os dados do cenario do  numero gerado
	//Set como cenario o novo cenario encontrado;
}

void Batalha::turno_jogador() {
	//TODO: Processar ação do jogador, se for ataque:
		//Buscar o heroi correspondente, verificar se aquele heroi esta vivo
		//Heroi esta no set de herois com bonus do cenario?
			//se sim pega dano com bonus
			//se nao pega danos sem bonus
		//causar dano no thanos
	//Se for passar a pedra:
		//Retirar a pedra do heroi que esta com ela
		//Adicionar a pedra ao heroi informado
	//Processar se thanos morreu
		//Tela de fim de jogo
	//Se não:
		//chama turno_thanos
}

void Batalha::turno_thanos() {
	//TODO: Buscar numero randomico entre 1 a 6 na classe randomize
	//TODO: Recuperar os dados do ataque thanos coresponde aquele numero
	//Relizar o atauque
	//Chama processa_morte_heroi()
}
