#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//������ - ��Ԫ�ص�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
// // Ұָ��
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	return 0;
//}
//int test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL - ������ʼ��ָ�룬��ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL; 
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//
//}
//int main()
//{
//	//
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen- �������ķ�ʽ1���ݹ�ķ�ʽ2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ - ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);//
//	printf("%p\n", &arr);//
//	//1.&arr - &������ - ������������Ԫ�ص�ַ - ��������ʾ�������� - &������ ȥ��������������ĵ�ַ
//	//sizeof(arr) - sizeof(������) - ��������ʾ�������� - sizeof(������)���������������Ĵ�С
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p+i));
//	}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ======== %p\n", p+i,&arr[i]);
//	}*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
////}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}