#include<string.h>
#include<stdio.h>
int main()
{
int i[]={'a','b','c','d','e','f','g','h','i','j','k'};
int clave=4;
for(int a=0;a<sizeof(i)/sizeof(int);a++)
	{
		printf("%c\n",i[a]^clave);
	}
}
