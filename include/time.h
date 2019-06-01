#ifndef VILLAIN_H
#define VILLAIN_H
#include <string>
#include <vector>
#include "hero.h"

class Time{

private:
    std::vector<Hero> herois;
    bool esta_completo;
    int herois_vivos;
    int  portador_pedra;


public:
    Time(const int id_heroi);

    void adiciona_heroi();
    void remove_heroi(const int id_heroi);
    void aplica_dano_time(const int id_heroi, const double dano);
    void aplica_bonus_ataque();
    void recupera_vida_time();
    void troca_pedra(const int id_destinatario);
    
};

#endif