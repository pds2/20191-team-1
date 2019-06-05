#include <iostream>
#include <set>
#include "heroi.h"
#include "thanos.h"


using namespace std;
int main() {

    // "testa" construtor e métodos
    Heroi capitao_america = Heroi(10, 20, 30, "capitao america");
    bool vivo = capitao_america.get_vivo();
    cout << "heroi está vivo? "<< vivo << endl;
    int vida = capitao_america.get_pt_vida();
    cout << "pt vida heroi "<<vida << endl;

    // "testa" construtor e métodos
    Thanos thanos = Thanos();
    int dano_causado = thanos.realiza_ataque();
    cout << "Thanos causou o seguinte dano "<< dano_causado << endl;


    //causa dano suficiente pra mata thanos
    thanos.diminui_vida(500);

    //verifica se thanos morreu
    bool vivot = thanos.get_vivo();
    cout << "Thanos está vivo? "<< vivot << endl;

    return 0;
}