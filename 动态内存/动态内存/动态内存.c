#define _CRT_SECURE_NO_WARNINGS 1


//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}

//C�����ǿ��Դ����䳤����� - C99��������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>




//malloc��free���÷�
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i) = i);
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//
//	 return 0;
//}



//calloc���÷�
//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p=(int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc
//������̬�����ڴ�ռ�Ĵ�С


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ����������40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ������������ڴ�ռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�ķ���ֵ
//
//	int* ptr = (int*)realloc(p, INT_MAX);
//	if (*ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

#include<windows.h>
//�����Ķ�̬�ڴ濪�ٵĴ���
//int main()
//{
//	////1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//	 
//	
//	////2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	////
//	//free(p);
//	//p = NULL;
//
//	////3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//
//	//free(p);
//	//p = NULL;
//
//	////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	////ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//	//free(p);
//	//p = NULL;
//
//	////5.��ͬһ�鶯̬�ڴ����ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//
//	////6.��̬�����ڴ������ͷţ��ڴ�й©��
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}


//��������ı�����
//������1
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
////����
////1.���д���������ֱ���������
////2.��������ڴ�й©������
////�ڴ�й¶��ԭ��str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ�
////�����޷��ҵ������Ի�����ڴ�й©

//������2
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void) 
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//����
//����ջ�ռ�ĵ�ַ������
//���ڷǷ������ڴ������
//����GetMemory��char* p)�������β�Ϊ�ַ���ָ�룬�ں����ڲ��޸��ββ����������ĸı䴫���βε�ֵ��ִ������str��ȻΪNULL��
//����������ҪΪÿ������������ʱ������ָ�����p�ĸ�����_p��������ʹ_p = p��
//����������ڵĳ����޸���_p�����ݣ��͵��²���p����������Ӧ���޸ģ������ָ������������������ԭ��
//�ڱ����У�_p�������µ��ڴ棬ֻ�ǰ�_p��ָ���ڴ��ַ�ı��ˣ�����p˿��δ�䡣����GetMemory����������κζ�����
//��ʵ�ϣ�ÿִ��һ��GetMemory�ͻ�й¶һ���ڴ棬��Ϊû����free�ͷ��ڴ�
//int* test()
//{
//	//static int a = 10;//��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//������3
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//����
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//����
//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶��

//������4
//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//�޸�
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
// {
//	Test();
//	return 0;
//}
//����
//�Ƿ������ڴ棺�ͷź���ڴ�ռ��ٴα�ʹ���γɷǷ�����


//��������
//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//δ֪��С��
//};

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С�� - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};
//
//
//int main()
//{
//	//struct S s;//
//	//printf("%d\n", sizeof(s));//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (*ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}