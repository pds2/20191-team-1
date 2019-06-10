#include "util.h"

void inicio_jogo() {

	tela_inicial();
	bool aguardando_opcao_valida = true;
	while(aguardando_opcao_valida) {
		char opcao;
		std::cout<<"Opção: ";
		std::cin>>opcao;
		opcao = toupper(opcao);
		if (opcao == 'C') {
            tela_como_jogar();
		} else if (opcao == 'S'){
		    tela_inicial();
//            aguardando_opcao_valida = false;
		}else if (opcao == 'A') {
			std::cout << "Carregando seu jogo..." << std::endl;
			aguardando_opcao_valida = false;
		} else if (opcao == 'Q') {
			aguardando_opcao_valida = false;
            exit (EXIT_SUCCESS);
		} else{
			std::cout<<std::endl<<"Desculpe, esta opção é invalida!"<<std::endl;
		}
	}
}

void limpa_tela() {
    int clear = system("clear");
    if(clear != 0){
        std::cout<<"Algo de errado não está certo!"<<std::endl;
    }
}

void pause() {
  std::cout << std::endl << "Digite 1 para continuar...";
  int aux;
  std::cin>>aux;
}