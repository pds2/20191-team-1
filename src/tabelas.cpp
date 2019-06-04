#include "tabelas.h"
#include "heroi.h"
#include "cenario.h"


using namespace std;

 Tabelas::Tabelas() {
  this->dados_heroi = {
        {1, Heroi(80,20,5,"Capitã Marvel")},
        {2, Heroi(70,30,5,"Capitão America")},
        {3, Heroi(90,10,5,"Homem de Ferro")},
        {4, Heroi(90,10,5,"Thor")},
        {5, Heroi(70,30,5,"Homem Aranha")},
        {6, Heroi(90,10,5,"Hulk")},
        {7, Heroi(60,40,5,"Doutor Estranho")},
        {8, Heroi(60,40,5,"Visao")},
        {9, Heroi(90,10,5,"Pantera Negra")},
        {10,Heroi(70,30,5,"Viuva Negra")}
  };
  this->dados_cenarios = {
          {1, Cenario("Asgar", "Bem vindo a asgar", {1,2,3})},
         {2, Cenario("Torre Stark", "Bem vindo a torre stark",{1,3,9} )}
  };
 }