#ifndef ESTRUCTURATOKEN_H_INCLUDED
#define ESTRUCTURATOKEN_H_INCLUDED
  /* Nota: Nose que tan recomendable sea, pero dado que
    * este es un archivo de caracter general tambien se exponen
    * las librerias a utilizar en los diferentes modulos; asi se
    * evitan errores con el enlazador */
  #include <string.h>
  #include <conio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include <stdio.h>
  #include <ctype.h>
  #include <Windows.h>

  /* Estructura de datos para la lista enlazada y los tokens
  * para todo el archivo.c que importe este arhivo se le da
  * acceso a dichas estrucutras
  */
  enum TipoToken{
    PalRes,
    Id,
    Num,
    SimEsp,
    Cadena,
    Error
  };

  struct Token{
    char nombre[80];
    enum TipoToken tipo;
    char lexema[80];
    double valor;
  };

  struct nodo
  {
    struct Token token;
    struct nodo *siguiente;
    struct nodo *anterior;
  };

  struct Token crearToken(char nombre[], enum TipoToken tipo, char lexema[], double valor);
  void identificarTooken(char cadena[]);
#endif // ESTRUCTURATOKEN_H_INCLUDED
