
#include "randomize.h"
#include <stdlib.h>     /* srand, rand */

/*
 *  @method {}
 *  @param {} 
 *  @return {}
*/
int gera_inteiro(int menor, int maior){
    return rand()%(maior-menor+1) + menor;
}