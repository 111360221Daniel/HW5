#include <stdio.h>
#include <stdlib.h>
int d(int a[]);
int c,m,i,y;
int a[100];

int main()
{
	printf("��J�}�C����:");
	scanf("%d", &y);

	
	for (i = 1; i <=y; i++)
	{
		printf("��J�Ʀr%d: ",i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	d(a);
	printf("�̤j�Ȭ�: %d\n", m);
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