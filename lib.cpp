
#include "lib.h"

float piu (float insiemer[], int dimensione){
    for (int i=0; i<dimensione; i++){
        if (insiemer[0]<insiemer[i]){
            insiemer[0]=insiemer[i];
        }
        else {
            insiemer[0]=insiemer[0];
        }
    }
    return insiemer[0];
}
