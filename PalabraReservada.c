#include <stdbool.h>
#include <string.h>

#include "PalabraReservada.h"
#define numPalRes 22

char palRes[numPalRes][11] = {"inicio", "fin", "var", "const", "si", "entonces", "iniciosi", "finsi",
                              "sino", "iniciosino", "finsino", "para", "iniciopara", "finpara", "escribir", "leer",
                              "entero", "real", "booleano", "cadena", "hacer", "hasta"
                             };

bool identidacadorPalRes(char data[])
{
  for(int i = 0; i < numPalRes; i++)
  {
    if(strcmp(data, palRes[i]) == 0)
    {
      return true;
    }
  }
  return false;
}
