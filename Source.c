#include <stdio.h>
#include <conio.h>

int main()
{
	int X = 0;
	int Y;

	printf("Masukkan Nilai Berapa Saja : "); scanf_s("%i", &Y);

	for (X = 1; X <= Y; X++)
	{
		if (X % 2 != 0)
		{
			printf("%d\n", X);
		}

	}

	_getch();
	return 0;
}