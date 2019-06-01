#include "randomizar.h"
#include <cstdlib>
#include <iostream>

int Randomizar::gera_inteiro(int menor, int maior) {
       return rand()%(maior-menor+1) + menor;
}