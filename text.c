
/*#include<stdio.h>
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

	}*/

/*#include<stdio.h>
int main()
{
	printf("Hellow World");
	return 0;
}*/
#include<stdlib.h>
int main()
{
	int a = 9;
	int* p1;
	int** p2 = &p1;
	p1 = &a;
	printf("%d\n", **p2);
	printf("%p\t%p\t%p\n", p2, p1, &a);
	printf("%p\t%p\t%p\n", **p2, *p2, &p1);
	printf("%p\t%p\t%p\n", &**p2, &*p2, &p2);
	printf("%p\t%p\t%p\n", p2, *p2, &p2);
	return 0;
}