#ifndef INC_20191_TEAM_1_CONSTANTS_H
#define INC_20191_TEAM_1_CONSTANTS_H

#include <string>
#include <map>

struct dado_heroi {
 	std::string _historia;
 	std::string _nome;
    int _pt_vida;
    int _pt_ataque;
    int _pt_defesa;
    dado_heroi(int _pt_vida, int _pt_ataque, int _pt_defesa, std::string _historia, std::string _nome) :
              _historia(_historia), _nome(_nome), _pt_vida(_pt_vida), _pt_ataque(_pt_ataque), _pt_defesa(_pt_defesa) {}
 };


  std::map<int, dado_heroi> my_dados_herois = {
            {1,  dado_heroi(80,20,5,"Sem Historia no momento", "Capitã Marvel")},
            {2,  dado_heroi(70,30,5,"Sem Historia no momento", "Capitão América")},
            {3,  dado_heroi(90,10,5,"Sem Historia no momento", "Homem de Ferro")},
            {4,  dado_heroi(90,10,5,"Sem Historia no momento", "Thor")},
            {5,  dado_heroi(70,30,5,"Sem Historia no momento", "Homem Aranha")},
            {6,  dado_heroi(90,10,5,"Sem Historia no momento", "Hulk")},
            {7,  dado_heroi(60,40,5,"Sem Historia no momento", "Doutor Estranho")},
            {8,  dado_heroi(60,40,5,"Sem Historia no momento", "Visao")},
            {9,  dado_heroi(90,10,5,"Sem Historia no momento", "Pantera Negra")},
            {10,  dado_heroi(70,30,5,"Sem Historia no momento", "Viuva Negra")}
    };


//
//map<int, pair<int, bool>> ataque_thanos = {
//	{1, make_pair(20, true)},
//	{2, make_pair(40, false)},
//	{3, make_pair(10, true)},
//	{4, make_pair(05, true)},
//	{5, make_pair(05, false)},
//	{6, make_pair(10, false)}
//};


//map<int, Cenario>dados_cenarios = {
//          {1, Cenario("Asgar", "Bem vindo a asgar", {1,2,3})},
//         {2, Cenario("Torre Stark", "Bem vindo a torre stark",{1,3,9} )}
//  };

#endif //INC_20191_TEAM_1_CONSTANTS_H
