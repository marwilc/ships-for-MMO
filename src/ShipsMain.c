/*
* Author: Marwil Campos
* Email: marwilcampos@gmail.com
* En este Archivo esta implementado el metodo principal de nuestro
* modulo 3 que sera todo el codigo fuente de la emulacion
* de las naves de carga usando threads.
*/
#include "Ships.h"

int main(int argc, char const *argv[]) {
  Phoenix p;
  Vengance v;
  Goliath g;
  char nombre[15];
  p = buildPhoenix();
  strcpy(nombre,p.nombre);

  printf("%s\n",nombre);
  return 0;
}
