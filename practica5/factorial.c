#include <stdio.h>
int fac(int);

int main(){
  int n;
  scanf("%d",&n);
  printf("el factorial es: %d\n",fac(n));
  return 0;
}
//funcion recursiva
int fac(int x){
  if(x == 0)
    return 1;
  else{
    return x * fac(x-1);
  }
}
