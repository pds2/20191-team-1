#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

using namespace std;

class Personagem {

protected:
    // std::string nome;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;

public:
    //todo: recriar a personagens.cpp e implementar os métodos não virtuais

    //esses métodos não são virtuais pois não precisam de polimorfismo
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    string get_name();

    // métodos puramente virtais
        //são virtuais pois espera-se polimorfismo
        //são puros pois não há implementação padrão. Todas são diferentes
    virtual void diminui_vida(const int dano_recebido) = 0;
    virtual const int realiza_ataque() = 0;
};

#endif