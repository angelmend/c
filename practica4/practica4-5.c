#include <stdio.h>
#include <string.h>

int main()
{
	char pass[10];//Se crea un arreglo

	printf("Usuario: Pepe \n");
	printf("Introduce la contrasena: \n"); //Se pide el valor al usuario
	fgets(pass,5,stdin);//Use fgets

	
	
if(strcmp(pass, "hola") == 0) // compara la contraseña
		printf("OK!\n");
	else
		printf("GTFOH\n");
	

}
