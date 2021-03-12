

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double func(double x);

_Bool isInArea(double x, double y);

int main(void)

{




double x, y;

int n;

printf("Zadanye 1 ili 2\n");

scanf_s("%d", &n);

switch (n)

{

case 1:

{

printf("Vypolnenie 1 zadania:\n");

printf("Vvedite X=");

scanf_s("%lf", &x);

printf("Vvedite Y=");

scanf_s("%lf", &y);

isInArea(x, y);

printf("%d", isInArea(x, y));

}

break;

case 2:

{

printf("Vypolnenie 2 zadania:\n");

printf("Vvedite X=");

scanf_s("%lf", &x);

func(x);

printf("%.3lf", func(x));

}

break;

default:

printf("Nepravilny vod ");

break;

}

getchar();

getchar();

return(0);

}

//Функция для просчёта попадания в область

_Bool isInArea(double x, double y)

{
    return ((x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x*x+y*y <=sqrt(2) )||(x <= 0 != 0 && x>= -1 && y <= 0 && y >= -1));
}

//Функция для 2 задания

double func(double x)

{

double f;

x>0 ? (f = log(x) + 9) : (x = 2.645) ? (f = 0) : (f = -((x / (x*x - 7))));

return(f);

}