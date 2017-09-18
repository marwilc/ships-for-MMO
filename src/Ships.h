#ifndef SHIPS_H
#define SHIPS_H
#define TAMANHO_PHOENIX 8
#define TAMANHO_VENGANCE 16
#define TAMANHO_GOLIATH 32
#define CAPACIDAD_PHOENIX 5
#define CAPACIDAD_VENGANCE 10
#define CAPACIDAD_GOLIATH 60
typedef enum {rapida, super_rapida, lenta} velocidades;

/**
* se definen la estructura de las naves
*/
//Phoenix
typedef struct
{
  char nombre[15]; // nombre de la nave
  char carga[CAPACIDAD_PHOENIX]; // capacidad de carga de la materia prima
}Phoenix;
//Vengance
typedef struct
{
  char nombre[15]; // nombre de la nave
  char carga[CAPACIDAD_VENGANCE]; // capacidad de carga de la materia prima
}Vengance;
// Goliath
typedef struct
{
  char nombre[15]; // nombre de la nave
  char carga[CAPACIDAD_GOLIATH]; // capacidad de carga de la materia prima
}Goliath;

/*
* Builders
*/
Phoenix buildPhoenix();
Goliath buildGoliath();
Vengance buildVengance();
/*
* getters
*/
const char * getNamePhoenix(Phoenix p);
const char * getNameVengance(Vengance v);
const char * getNameGoliath(Goliath G);
#endif
