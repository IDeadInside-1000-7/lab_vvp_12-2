#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int C, N;
	printf("Введите изначальное направление робота (Север - 1, Юг - 2, Запад - 3, Восток - 4): ");
	scanf("%i", &C);
	printf("Введите команду (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ");
	scanf("%i", &N);
	if (C == 1)
	{
		if (N == 0)
			printf("Север");
		else if (N == 1)
			printf("Запад");
		else if (N == -1)
			printf("Восток");
		else if (N != 0 && N != 1 && N != -1)
			printf("Неправильная команда !!!");
	}
	else if (C == 2)
	{
		if (N == 0)
			printf("Юг");
		else if (N == 1)
			printf("Восток");
		else if (N == -1)
			printf("Запад");
		else if (N != 0 && N != 1 && N != -1)
			printf("Неправильная команда !!!");
	}
	else if (C == 3)
	{
		if (N == 0)
			printf("Запад");
		else if (N == 1)
			printf("Юг");
		else if (N == -1)
			printf("Север");
		else if (N != 0 && N != 1 && N != -1)
			printf("Неправильная команда !!!");
	}
	else if (C == 4)
	{
		if (N == 0)
			printf("Восток");
		else if (N == 1)
			printf("Север");
		else if (N == -1)
			printf("Юг");
		else if (N != 0 && N != 1 && N != -1)
			printf("Неправильная команда !!!");
	}
}
