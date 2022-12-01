#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[5];
	int M;

	printf("請輸入5個數字：");
	scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	M = array[0];
	for (int i = 1; i <= 4; i++)
	{
		if (M < array[i])
			M = array[i];

	}
	printf("最大數字為：%d", M);

}