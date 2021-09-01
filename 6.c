#include<stdio.h>
#include<stdlib.h>

int main()

{
int mes, dia;
    printf("introduzca su mes de nacimiento \n");
    scanf("%d",&mes);
    printf("introduzca su fecha de nacimiento (dia) \n");
    scanf("%d",&dia);

    switch (mes)
	{
		case 1:
			if (dia<=19)
                puts("su signo es capricornio");
            else
                puts("su signo es acuario");
                break;
		case 2:
            if (dia<=18)
                puts("su signo es acuario");
            else
                puts("su signo es piscis");
                break;
		case 3:
			if (dia<=20)
                puts("su signo es piscis");
            else
                puts("su signo es aries");
                break;
		case 4:
			if (dia<=19)
                puts("su signo es aries");
            else
                puts("su signo es tauro");
                break;
		case 5:
			if (dia<=21)
                puts("su signo es tauro");
            else
                puts("su signo es geminis");
                break;
		case 6:
			if (dia<=20)
                puts("su signo es geminis");
            else
                puts("su signo es cancer");
                break;
		case 7:
			if (dia<=22)
                puts("su signo es cancer");
            else
                puts("su signo es leo");
                break;
		case 8:
			if (dia<=22)
                puts("su signo es leo");
            else
                puts("su signo es virgo");
                break;
		case 9:
			if (dia<=22)
                puts("su signo es virgo");
            else
                puts("su signo es libra");
                break;
		case 10:
			if (dia<=22)
                puts("su signo es libra");
            else
                puts("su signo es escorpio");
                break;
		case 11:
			if (dia<=21)
                puts("su signo es escorpio");
            else
                puts("su signo es sagitario");
                break;
		case 12:
			if (dia<=21)
                puts("su signo es sagitario");
            else
                puts("su signo es capricornio");
                break;
		default:
			puts:("error");
	}

}
