#include "header.h"

int busquedaSecuencial(int vector[], int dato){
    int i;
    for(i=0; i < 10; i++){
        if(vector[i]==dato){
            return i;
        }
    }
    return -1;
}
