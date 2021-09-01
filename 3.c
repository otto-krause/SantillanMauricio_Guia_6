#include<stdio.h>
#include<stdlib.h>

int main()

{
int mes, year;
float year2;
	printf("introduzca el numero del mes \n");
	scanf("%d",&mes);
	printf("introduzca el año \n");
	scanf("%d",&year);
	year2=year;
		switch (mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			puts("el mes tiene 31 dias");
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			puts("el mes tiene 30 dias");
			break;

        case 2:
			if (year/4==year2/4)
                {
                    printf("el mes tiene 29 dias");
                }
                else
                {
                    printf("el mes tiene 28 dias");
                }
            break;

        default:
			puts("error");
	}


}
