#include <stdio.h>
#include <stdlib.h>


int find(int a,int b,int c) 
{
	int now;
	int data[] = { 7,16,43,46,54,66,67,72,78,82,87,99 };
	now = (a + b) / 2;
	while (c != data[now])
	{
		now = (a + b) / 2;
		if (c < data[now])
		{
			b = (now - 1);
			find(a, b, c);
		}
		else
		{
			a = (now + 1);
			find(a, b, c);
		}
	}
	return now;
}



int main()
{

	int data[] = { 7,16,43,46,54,66,67,72,78,82,87,99 };// 1~12 data[0]~data[11]
	int f;
	int i = 1,min=0,MAX=11;
	
	
	printf("�п�J�n�j�M����ơG");
	scanf("%d", &f);
	for (i; i <= 12; i++)
	{
		if (f == data[i-1])
			break;
	}
	if (i == 13)
		printf("\n�A�n�䪺��Ƨ䤣��\n");
	else
	{
		int result = find(min, MAX, f);
		printf("�A�䪺��� %d �b�� %d ��",f,(result+1));
	}

}