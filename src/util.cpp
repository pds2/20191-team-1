#include "util.h"

void inicio_jogo() {
	tela_inicial();
	bool aguardando_opcao_valida = true;
	while(aguardando_opcao_valida) {
		int opcao;
		std::cout<<"Sua escolha: ";
		std::cin>>opcao;
		if (opcao == 1) {
            tela_como_jogar();
            aguardando_opcao_valida = false;
		} else if (opcao == 2) {
			std::cout << "Carregando seu jogo..." << std::endl;
			aguardando_opcao_valida = false;
		} else if (opcao == 3) {
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