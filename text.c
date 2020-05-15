
/*#include<stdio.h>
void counter(int);
int main()
{
	int value;
	register int i;
	printf("请输入循环执行次数（按0退出：）");
	while (scanf_s("%d", &value) == 1 && value > 0)
	{
		for (i = 0; i <value; i++)
		{
			counter(i);               //每次循环调用count函数
		}
		printf("请输入循环执行次数（按0退出：）");
	}
	return 0;
}	

void counter(int i)
	{
		static int subTotal = 0;
		subTotal++;
		printf("counter函数被调用了%d次\n", subTotal);

	}*/

/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
#include<math.h>
double fun(int);
int main()
{
	int n;
	printf("请输入需计算阶乘的数：");
	scanf_s("%d", &n);		
	while(n<0)
	{
		printf("无法计算负数的阶乘，请重新输入：");
		scanf_s("%d", &n);
	}
	printf("%d的阶乘为%.2lf", n, fun(n));
	return 0;
}
double fun(int n)
{
	double s = 1;
	if (n > 0)	
	{
		while(n>1)
			s *= n--;
	}
	else
		s = 1;
	return s;
}*/


/*#include<stdio.h>
#include<stdlib.h>
void change(int* num)
{
	*num+=1;
}
int main()
{
	int num = 9;
	change(&num);
	printf("%d", num);
	return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
#define N 5
//小型的学生成绩管理系统
void input(double[]);
void sort(double[]);
void show(double[]);

int main()
{
	double scores[N];//录入，排序，打印
	return 0;
}
void intput(double scores[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d门课的1成绩：", i+1);
		scanf_s("lf", &scores[i]);
	}
}