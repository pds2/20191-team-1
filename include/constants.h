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


//
//

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
