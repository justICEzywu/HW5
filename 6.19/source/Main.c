#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int rt = 36000;
	int r1, r2, sum;
	int m2=0, m3=0, m4=0, m5=0, m6=0, m7=0, m8=0, m9=0, m10=0, m11=0, m12=0;

	unsigned seed;
	seed = (unsigned)time(NULL);
	srand(seed);

	for (int i = 1; i <= rt; i++)
	{
		r1 = rand() % 6 + 1;
		r2 = rand() % 6 + 1;
		sum = r1 + r2;
		switch (sum)
		{
		case 2:
			m2++;
			break;
		case 3:
			m3++;
			break;
		case 4:
			m4++;
			break;
		case 5:
			m5++;
			break;
		case 6:
			m6++;
			break;
		case 7:
			m7++;
			break;
		case 8:
			m8++;
			break;
		case 9:
			m9++;
			break;
		case 10:
			m10++;
			break;
		case 11:
			m11++;
			break;
		case 12:
			m12++;
			break;
		}


	}
	printf("������l�M��2���� %d ��\n", m2);
	printf("������l�M��3���� %d ��\n", m3);
	printf("������l�M��4���� %d ��\n", m4);
	printf("������l�M��5���� %d ��\n", m5);
	printf("������l�M��6���� %d ��\n", m6);
	printf("������l�M��7���� %d ��\n", m7);
	printf("������l�M��8���� %d ��\n", m8);
	printf("������l�M��9���� %d ��\n", m9);
	printf("������l�M��10���� %d ��\n", m10);
	printf("������l�M��11���� %d ��\n", m11);
	printf("������l�M��12���� %d ��\n", m12);
	printf("�`�@��F %d ��\n", m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+m12);

}