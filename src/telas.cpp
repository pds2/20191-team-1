#include "telas.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Telas::tela_inicial()
{
	system("clear");
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
	system("clear");
	cout<<"Seu objetivo é derrotar o poderoso Thanos antes que ele pegue a pedra do poder. "<<endl;
	cout<<"Com o controle de 5 grandes herois, você poderar atacar e alterar a posse da  pedra. "<<endl;
	cout<<"Planeje suas açoes e salve a humanidade! Aperte qualquer tecla para continuar"<<endl;

}

char Telas::tela_dificuldade() {
	system("clear");
	cout<<"Selecione a dificuldade do jogo"<<endl;
	cout<<"Digite F para Facil"<<endl;
	cout<<"Digite M para Medio"<<endl;
	cout<<"Digite D para Dificil"<<endl;
	char opcao;
	cin>>opcao;
	opcao = toupper(opcao);
	while(opcao != 'F' && opcao != 'M' && opcao != 'D'){
		cout<<"Opcao invalida, favor digite novamente!"<<endl;
		cin>>opcao;
		opcao = toupper(opcao);
	}
	return opcao;
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
