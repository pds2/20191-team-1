#include "telas.h"
#include <iostream>

using namespace std;

void Telas::tela_inicial()
{
	cout<<"Bem vido a Todos conta Thanos"<<endl;
	cout<<"Aperte 1 - para ir para como jogoar"<<endl;
	cout<<"Aperte 2 - para iniciar o jogo"<<endl;
	int opcao = -1;
	while(opcao <= 0 || opcao > 2){
		cin>>opcao;
		if(opcao == 1){
			tela_como_jogar();
		}else if (opcao == 2){
			tela_dificuldade();
		}else{
			cout<<"Opção invalida, digite novamente"<<endl;
		}
	}
}

void Telas::tela_como_jogar()
{
}

void Telas::tela_dificuldade()
{

}

void Telas::tela_personagem()
{
}

void Telas::tela_resultado_ataque_jogador()
{
}

void Telas::tela_descricao_persoangem()
{
}

void Telas::tela_morte_heroi_sem_pedra()
{
}

void Telas::tela_batalha()
{
}

void Telas::tela_vitoria_thanos()
{
}

void Telas::tela_resultado_ataque_thanos()
{
}

void Telas::tela_vitoria_jogador()
{
}
