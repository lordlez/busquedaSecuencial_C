#include "header.h"

int main()
{
    int vector[] = {4,7,8,9,0,5,2,1,3,6};
    int dato = 50;
    int resultado;
    resultado = busquedaSecuencial(vector, dato);
    if(resultado != -1){
        printf("El dato existe en el vector");
    }else{
        printf("El dato no existe en el vector");
    }
    return 0;
}
