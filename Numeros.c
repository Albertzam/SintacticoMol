#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "Numeros.h"

int numeros(char data[])
{// 1: NumeroValido   2: Error Lexico   3: NoEsNumero
    int estado = 1;
    int punto = 1;
    if (isdigit(data[0]))
    {
        for(int i = 0; i < strlen(data); i++){
            if(isalpha(data[i])){
                estado = 2;
                break;
            } else if (data[i] == '.'){
                if (punto == 2){
                    estado = 2;
                    break;
                }
                punto = 2;

            }
        }

        if(estado == 1){
            if(atoi(data) || atof(data))
            {
                estado = 1;
            }else{
                //Token de error
                estado = 2;
            }
        }
    }else{
        estado = 3;
    }

    return estado;
}
