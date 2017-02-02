#include <stdio.h>
#include <time.h> // funcion time
#include <limits.h> //biblioteca de maximos de las constantes 
int main(){
  time_t tiempo = INT_MAX; //Asigna el valor maximo 
  printf("Se acerca el final: %s\n", ctime(&tiempo)); //Imprime la fecha 
  return 0;
}
