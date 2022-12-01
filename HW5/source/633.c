#include <stdio.h>
#include <stdlib.h>
int a[20];
int i,x,y;
int c(int [],int,int);

int main()
{
	for (i = 0; i < 20; i++)
	{
		a[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");
	printf("輸入尋找的數字(0 ~ 19):");
	scanf("%d", &x);
	
	y = c(a, x, sizeof(a) / sizeof(int));

	if (y < 0)
	{
		printf("找不到 %d\n", x);
	}
	else
	{
		printf("在第 %d 筆資料找到 %d\n", y + 1, x);
	}

	system("pause");
	return 0;
}

int c(int a[], int x, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == x)
		{
			return mid;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
		}
		else if (a[mid] < x)
		{
			low = mid + 1;
		}
	}

	return -1;
}