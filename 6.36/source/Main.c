#include <stdio.h>
#include <stdlib.h>
void reservesentence();
int main()
{
	printf("請輸入一個字串: ");
	reservesentence();
	return 0;
}
void reservesentence()
{
	char a;
	scanf_s("%c", &a,4);
	if (a != '\0')
	{
		reservesentence();
		printf("%c", a);
	}
}