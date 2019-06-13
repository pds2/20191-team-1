#include "util.h"

/*
 *  @method {Metodo que inicializa jogo}
 *  @param {void} 
 *  @return {void}
*/
void inicio_jogo() {
	tela_inicial();
	bool aguardando_opcao_valida = true;
	while(aguardando_opcao_valida) {
		char opcao;
		std::cout<<"Opção: ";
		std::cin>>opcao;
		opcao = toupper(opcao);
		
		try
		{
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
				throw std::invalid_argument("Opção Inválida");
			}
			
		}catch(const std::invalid_argument& e){
            std::cout<<std::endl<<"Desculpe, esta opção é invalida!"<<std::endl;
            inicio_jogo();
		}
		
	}
}

/*
 *  @method {}
 *  @param {} 
 *  @return {}
*/
void limpa_tela() {
    int clear = system("clear");
    if(clear != 0){
        std::cout<<"Algo de errado não está certo!"<<std::endl;
    }
}

/*
 *  @method {}
 *  @param {} 
 *  @return {}
*/
void pause() {
  std::cout << std::endl << "Digite 1 para continuar...";
  int aux;
  std::cin>>aux;
}