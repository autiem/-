#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//sizeof(arr)���������Ĵ�С����λ���ַ� - 7
	//printf("%d\n", sizeof(arr + 0));//4/8  ������ǵ�ַ�Ĵ�С��arr+0����Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1 *arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 �ڶ���Ԫ�صĵ�ַ

	//printf("%d\n", strlen(arr));//6 
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err   �Ƿ�����
	////printf("%d\n", strlen(arr[1]));//err   �Ƿ�����
	//printf("%d\n", strlen(&arr));//6 &arr - ����ĵ�ַ - ����ָ�� char(*p)[7] = &arr;
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//p+1�õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 *p�����ַ����ĵ�һ���ַ� - 'a'
	//printf("%d\n", sizeof(p[0]));//1 int arr[10];  arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	//printf("%d\n", sizeof(&p));//4/8 ��ַ
	//printf("%d\n", sizeof(&p + 1));//4/8 ��ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 ��ַ

	//printf("%d\n", strlen(p));//6 
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err �Ƿ�����
	////printf("%d\n", strlen(p[0]));//err �Ƿ�����
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5

	//��ά����
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a[0] + 1);
//	printf("%p\n", a + 1);
//	printf("%p\n", &a[0] + 1);
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�����������
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ����ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - *(a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//4/8 - a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(a[1])����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4 - �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//16 - a����Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}

////ָ�������
//������һ
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2��5
//	return 0;
//}

//�������
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//��������
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//��������
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//��������
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//��������
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//��������
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//�������
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}