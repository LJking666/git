
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
	printf("�����������׳˵�����");
	scanf_s("%d", &n);		
	while(n<0)
	{
		printf("�޷����㸺���Ľ׳ˣ����������룺");
		scanf_s("%d", &n);
	}
	printf("%d�Ľ׳�Ϊ%.2lf", n, fun(n));
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

/*#include<stdio.h>
#include<stdlib.h>
#define N 5
//С�͵�ѧ���ɼ�����ϵͳ
void input(double[]);//¼�룬���򣬴�ӡ
void sort(double[]);
void show(double[]);
int find(double*, int findnum);
int main()
{
	double sz[] = { 2,8,9,8,5,7,6 };
	printf("����Ԫ�صĸ���Ϊ��%d\n", sizeof(sz)/sizeof(sz[0]));
	double findnum;
	double scores[N];
	input(scores);
	printf("����ǰ��\n");
	show(scores);
	sort(scores);
	printf("�����\n");
	show(scores);
	printf("������Ҫ�����±������\n");
	scanf_s("%lf", &findnum);
	if (find(scores, findnum) == -1)
		printf("��Ҫ���ҵ����ֲ����ڣ������ˣ���\n");
	else
		printf("��Ҫ���ҵ������±�Ϊ��%d\n", find(scores, findnum));
	return 0;
}
void input(double scores[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("�������%d�ſεĳɼ���", i+1);
		scanf_s("%lf", &scores[i]);
		//scanf_s("%lf",(scores+i));
	}
}
void sort(double scores[])
{
	int i, j;
	double temp;
	for (i = 0; i < N - 1; i++)
	{
		for(j=0;j<N-i-1;j++)
			if (*(scores + j) > scores[j + 1])
			{
				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
	}
}

void show(double scores[])
{
	int i;
	printf("*********************\n");
	printf("����\t��ѧ\tӢ��\t����\t��ѧ\n");
	printf("*********************\n");
	for (i = 0; i < N; i++)
	{
		printf("%.2lf\t", scores[i]);
		//printf("%.2lf\t", *(score + i));
	}
	printf("\n*********************\n");
}

int find(double*scores, int findnum)
{
	int findindex = -1;
	int i;
	for (i = 0; i < N; i++)
	{
		if (findnum == scores[i])
		{
			findindex = i;
			break;
		}		
	}
	return findindex;
}*/


/*#include<stdio.h>
#include<stdlib.h>

int main()
{
	char names1[] = { 'j','a','c','k','\0' };
	char names2[50] = "jack";
	printf("%d\n", sizeof(names1));
	printf("%d\n", sizeof(names2));
	printf("%s\n", names1);
	printf("%s\n", names2);
	printf("�������µ�����\n");
	scanf_s("%s", names2);
	printf("%s", names2);
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>		//codelock���У�vsδ���
#include<string.h>
int main()
{
	void cp(char*, int);
	char a[100];
	int m;
	printf("������һ���ַ���:");
	gets(a);                    //gets(shuzu)�����ַ���
	printf("��ȷ�����m:");
	scanf_s("%d", &m);
	if (m > strlen(a))
	{
		printf("m̫��!");
		return 0;
	}
	cp(a, m);
	return 0;
}
void cp(char* p, int m)
{
	char b[100];
	p = p + m;
	strcpy(b, p);                //strcopy(sz1,sz2)  ������(sz)p��������b
	puts(b);                    //puts(sz)          
}