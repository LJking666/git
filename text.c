
#include<stdio.h>
void counter(int);
int main()
{
	int value;
	register int i;
	printf("������ѭ��ִ�д�������0�˳�����");
	while (scanf_s("%d", &value) == 1 && value > 0)
	{
		for (i = 0; i <value; i++)
		{
			counter(i);               //ÿ��ѭ������count����
		}
		printf("������ѭ��ִ�д�������0�˳�����");
	}
	return 0;
}

	void counter(int i)
	{
		static int subTotal = 0;
		subTotal++;
		printf("counter������������%d��\n", subTotal);

	}
