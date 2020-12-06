#include "EstructuraToken.h"
#include "main.h"
#include "PalabraReservada.h"
#include "Identificador.h"
#include "Numeros.h"


struct Token crearToken(char nombre[], enum TipoToken tipo, char lexema[], double valor){
  struct Token *nuevoToken = NULL;
  nuevoToken = malloc(sizeof(struct Token));

  strcpy(nuevoToken->nombre, nombre);
  nuevoToken->tipo = tipo;
  strcpy(nuevoToken->lexema, lexema);
  nuevoToken->valor = valor;

  return *nuevoToken;
}

/* Sirve para no repetir el mismo fracmento de codigo
 * ademas de que lo vuelve versatil a los cambios*/
void identificarTooken(char cadena[]){
  if(strcmp(cadena, "\0") != 0) {
    if(identidacadorPalRes(cadena)) {
    //La cadena analizada es una palRes
      insertar(crearToken(cadena, PalRes, cadena, 0));
      strcpy(cadena,  "");
    }else{
      switch (numeros(cadena))
      {
      case 1://Numero Valido
        insertar(crearToken(cadena, Num, cadena, atof(cadena)));
        strcpy(cadena,  "");
        break;
      case 2://Error lexico
        insertar(crearToken(cadena, Error, "Error Lexico. Numero no Valido.", atof(cadena)));
        strcpy(cadena,  "");
        break;
      case 3:
        if(identidacadorIdentificador(cadena)) {
        //La cadena es un identificador valido
          insertar(crearToken(cadena, Id, cadena, 0));
            strcpy(cadena,  "");
        }else{
        //Error lexico en el identidicador
          insertar(crearToken(cadena, Error, "Error Lexico. Identidicador no Valido.", 0));
          strcpy(cadena,  "");
        }
        break;
      }
    }
  }
}