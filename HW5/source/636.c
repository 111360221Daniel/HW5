#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[100];
int b(char x);
int c;
int main()
{
	printf("¿é¤J¦r¦ê:");
	scanf("%s", &a);
	b(a);
	for (int i = c; i >= 0; i--) 
	{
		printf("%c",a[i]);
	}
	system("pause");
	return 0;
}

int b(char x[])
{
	c=strlen(x);
	return c;
}