#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{

#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random\0";
	int xXx;// definir la variable
//	fd=open(archivo,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);// Permisos  para que el usuario lo pueda leer y escribir 
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);
//#if 0
	if(read(fd,&xXx,4)==-1)//cambiar a read para leer el archivo
		fprintf(stdout,"%d\n",xXx);//impresion de la linea
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
