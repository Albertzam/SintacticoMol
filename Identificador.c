#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "Identificador.h"

bool identidacadorIdentificador(char data[])
{ // true: IdentificadorValido     false: ErrorLexico
    bool valido = true;
    int i = 0;

    if(isalpha(data[0]) || data[0] == '_' )
    {
        while(data[i])
        {
            if(isalnum(data[i]) || data[i] == '_'){
                valido = true;
            }else{
                valido = false;
                break;
            }

            i++;
        }
    }else{
        valido = false;
    }

    return valido;
}
