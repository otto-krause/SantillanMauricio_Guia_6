#include<stdio.h>
#include<stdlib.h>

int main()

{
int dia;
	printf("introduzca un numero del 1 al 7 \n");
	scanf("%d",&dia);
	switch (dia)
	{
		case 1:
			puts("el dia correspondiente es lunes");
			break;
		case 2:
			puts("el dia correspondiente es martes");
			break;
		case 3:
			puts("el dia correspondiente es miercoles");
			break;
		case 4:
			puts("el dia correspondiente es jueves");
			break;
		case 5:
			puts("el dia correspondiente es viernes");
			break;
		case 6:
			puts("el dia correspondiente es sabado");
			break;
		case 7:
			puts("el dia correspondiente es domingo");
			break;

		default:
			puts("error");
	}

}
