

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double func(double x);

_Bool isInArea(double x, double y);

int main(void)

{

system("chcp 1251"); /*Переход в консоли на русский язык*/

system("cls"); /*Очистка консоли*/

double x, y;

int n;

printf("Выберите задание 1 или 2:\n");

scanf_s("%d", &n);

switch (n)

{

case 1:

{

printf("Выполнение первого задания:\n");

printf("Введите Х=");

scanf_s("%lf", &x);

printf("Введите Y=");

scanf_s("%lf", &y);

isInArea(x, y);

printf("%d", isInArea(x, y));

}

break;

case 2:

{

printf("Выполнение второго задания:\n");

printf("Введите Х=");

scanf_s("%lf", &x);

func(x);

printf("%.3lf", func(x));

}

break;

default:

printf("Неправильный ввод ");

break;

}

getchar();

getchar();

return(0);

}

//Создадим функцию, которая будет просчитывыть попадание в заштрихованную область

_Bool isInArea(double x, double y)

{

if (x >= -1 && x <= 1)

if (y >= x && y <= x && y >= -1 && y <= 1)

return(1);

else

return(0);

else

return(0);

}

//Создадим функцию для второго задания

double func(double x)

{

double f;

x>0 ? (f = log(x) + 9) : (x = 2.645) ? (f = 0) : (f = -((x / (x*x - 7))));

return(f);

}