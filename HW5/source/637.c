#include <stdio.h>
#include <stdlib.h>
int d(int a[]);
int c,m,i,y;
int a[100];

int main()
{
	printf("輸入陣列長度:");
	scanf("%d", &y);

	
	for (i = 1; i <=y; i++)
	{
		printf("輸入數字%d: ",i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	d(a);
	printf("最大值為: %d\n", m);
	system("pause");
	return 0;
}

int d(int a[])
{
	m =0;
	for (i = 0; i < y; i++)
	{
		if (a[i] > m)
		{
			m = a[i];
		}
	}
	return m;
}