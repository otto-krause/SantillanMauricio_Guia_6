#include<stdio.h>
#include<stdlib.h>

int main()

{
char categoria;
	printf("introduzca la calificacion \n");
	scanf("%c",&categoria);
	switch (categoria)
	{
		case 'A':
			puts("la nota es excelente");
			break;
		case 'B':
			puts("la nota es buena");
			break;
		case 'C':
			puts("la nota es regular");
			break;
		case 'D':
			puts("la nota es suficiente");
			break;
		case 'F':
			puts("la nota es no suficiente");
			break;
		default:
			puts("error");
	}
}
