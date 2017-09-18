#include <stdio.h>
#include <string.h>
#include "Ships.h"

/*
* Builders
*/

Phoenix buildPhoenix(){
  Phoenix p;
  strcpy(p.nombre,"Phoenix");
  strcpy(p.carga,"*****");
  return p;
}
/*
* Getters
*/
const char * getNamePhoenix(Phoenix p){
  return p.nombre;
}
const char * getNameVengance(Vengance v){
  return v.nombre;
}
const char * getNameGoliath(Goliath g){
  return g.nombre;
}
