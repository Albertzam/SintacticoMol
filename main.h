#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

  #include "EstructuraToken.h"
  #include "FaseSintaxis.h"

  //Funciones
  /*
  * No es necesario incluirlas todas, con exponer insertar basta
  * pero igualmente las pongo, xD 
  */
  
  void insertar(struct Token token);
  void imprimirPre(struct nodo *reco);
  void borrar(struct nodo *reco);
  void Color(int Background, int Text);


#endif // MAIN_H_INCLUDED
