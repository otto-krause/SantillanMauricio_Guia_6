#include<stdio.h>
#include<stdlib.h>

int main()

{
int mes;
	printf("introduzca un numero del 1 al 12 \n");
	scanf("%d",&mes);
	switch (mes)
	{
		case 1:
			puts("el mes correspondiente es enero");
			break;
		case 2:
			puts("el mes correspondiente es febrero");
			break;
		case 3:
			puts("el mes correspondiente es marzo");
			break;
		case 4:
			puts("el mes correspondiente es abril");
			break;
		case 5:
			puts("el mes correspondiente es mayo");
			break;
		case 6:
			puts("el mes correspondiente es junio");
			break;
		case 7:
			puts("el mes correspondiente es julio");
			break;
		case 8:
			puts("el mes correspondiente es agosto");
			break;
		case 9:
			puts("el mes correspondiente es septiembre");
			break;
		case 10:
			puts("el mes correspondiente es octubre");
			break;
		case 11:
			puts("el mes correspondiente es noviembre");
			break;
		case 12:
			puts("el mes correspondiente es diciembre");
			break;
		default:
			puts:("error");
	}
}
