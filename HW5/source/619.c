#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10000] = { 0 };
int i, x, y,c;

int main()
{
	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		x = (rand() % 6) + 1;
		y = (rand() % 6) + 1;
		c = x + y;
		a[c] += 1;
	}
	
	for (i = 1; i <= 6;i++)
	{
		printf("%7d",i);
	}

	printf("\n\n\n");

	for (i = 1; i <= 6; i++)
	{
		printf("%d", i);
		if (i == 1)
			printf("%7d%7d%7d%7d%7d%7d",a[2], a[3], a[4], a[5], a[6], a[7]);
		if (i == 2)
			printf("%7d%7d%7d%7d%7d%7d", a[3], a[4], a[5], a[6], a[7], a[8]);
		if (i == 3)
			printf("%7d%7d%7d%7d%7d%7d", a[4], a[5], a[6], a[7], a[8], a[9]);
		if (i == 4)
			printf("%7d%7d%7d%7d%7d%7d", a[5], a[6], a[7], a[8], a[9], a[10]);
		if (i == 5)
			printf("%7d%7d%7d%7d%7d%7d", a[6], a[7], a[8], a[9], a[10], a[11]);
		if (i == 6)
			printf("%7d%7d%7d%7d%7d%7d", a[7], a[8], a[9], a[10], a[11], a[12]);
			printf("\n\n\n");
	}

	printf("\n\n");

	for (i = 2; i <= 5; i++)
	{
		printf("%d: ",i);
		printf("%6d      ", a[i]);
	}
	printf("\n\n");
	for (i = 6; i <= 9; i++)
	{
		printf("%d: ", i);
		printf("%6d      ", a[i]);
	}
	printf("\n\n");
	for (i = 10; i <= 12; i++)
	{
		printf("%d: ", i);
		printf("%5d      ", a[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}