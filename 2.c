#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "RUS");
	char c;
	float x, y;
	printf("¬ведите пример: ");
	scanf("%f %c %f",&x, &c, &y);
	switch (c)
	{
	case '+':
		printf("=%f\n",x+y);
		break;
	case '-':
		printf("=%f\n", x-y);
		break;
	case '/':
		printf("=%f\n", x/y);
		break;
	case '*':
		printf("=%f\n", x * y);
		break;
	case '^':
		printf("=%f\n",pow(x,y));
		break;
	}
	return 0;
}