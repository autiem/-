#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}





//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'W';
//	printf("%s\n", p);
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;  //p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//		              //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}




//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));
//	//}
//	/*for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}
//�������������ʽ
//void Print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ�����ʽ
//void Print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int arr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
//	//Print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	//Print2(arr, 3, 5);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ�������ָ��
//	//int* p3;//����ָ�� - ָ�����ε�ָ��
//	//char* p4;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//	return 0;
//}


////һά���鴫��
//#include <stdio.h>
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int** arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	 int *arr2[20] = {0};
// test(arr);
// test2(arr2);
//}

//
////��ά���鴫��
//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//err
//{}
//void test(int arr[][5])//ok
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int** arr)//err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//һ��ָ�봫��
//#include <stdio.h>
//void print(int* p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


//����ָ�봫��
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//�������Ĳ����Ƕ���ָ��ʱ�����Խ���ʲô����
//void test(char** p) {
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}




//����ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//	
//	//printf("%d\n", Add(a, b));
//	/*
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(a, b));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa (a, b));
//	printf("%d\n", Add (a, b));
//	//printf("%d\n", *pa (a, b));//err
//	printf("%d\n", (*pa)(a, b));
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[5];//
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
////2.дһ������ָ������pfarr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfarr[4])(char*, const char*) = { my_strcpy,my_strcpy, my_strcpy, my_strcpy, };


//������

//void menu()
//{
//	printf("**************************\n");
//	printf("***  1. add   2. sub  ****\n");
//	printf("***  3. mul   4. div  ****\n");
//	printf("***    0.exit         ****\n");
//	printf("**************************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr ��һ������ָ������ - ת�Ʊ�
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ��Ƿ�,������ѡ��\n");
//		}
//	} while(input);
//	return 0;
//}




//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("����ָ��Ƿ�������������\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	//ppfArr��һ��ָ����ָ�������ָ��
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//	//
//	return 0;
//}


//void Print(char* str)
//{
//	printf("hehe: % s\n",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(Print);
//	return 0;
//}




//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	//int(*pAdd)(int,int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//			//Add(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}

#include<stdlib.h>
#include<string.h>

//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//...
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
////	qsort - ���������������͵�����
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int (*compar)(const void*e1, const void*e2)
//	);
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return*(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;
//	//else
//	//	return -1;
//	return((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int tmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int tmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), tmp_Stu_by_age);
//	qsort(s, sz, sizeof(s[0]), tmp_Stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
//	//���ĸ�����������ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ - �������ʹ�����Լ�ʵ��
//	//			����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//	//
//}
//
////ʵ��Bubble_sort�ĳ���Ա�����Ƿ�֪��δ��������������� - ��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
//void Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void Bubble_sort(void*base,int sz,int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	Bubble_sort(arr,sz,sizeof arr[0],cmp_int);
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//Bubble_sort(s,sz,sizeof s[0], tmp_Stu_by_age);
//	Bubble_sort(s,sz,sizeof s[0], tmp_Stu_by_name);
//}
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//
//	//
//	//
//
//	//Bubble_sort(arr,sz);
//
//	//Bubble_sort(f,sz);
//
//	//test1();
//
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;
//	char ch = "w";
//	void* p = &a;
//	p = &ch;
//	//void*���͵�ָ����Խ����������͵ĵ�ַ
//	//void*���͵�ָ�벻�ܽ��н����ò���
//	//void*���͵�ָ�벻�ܽ��мӼ������Ĳ���
//	return 0;
//}

int main()
{
	////����������Ԫ�صĵ�ַ
	////1.sizeof(������) - ��������ʾ��������
	////2.&������ - ��������ʾ��������
	////һά����
	//int a[] = { 1,2,3,4 };//4*4=16
	//printf("%d\n", sizeof(a));//sizeof(��������- ������������ܴ�С - ��λ���ֽ� - 16
	//printf("%d\n", sizeof(a + 0));//4/8 - ��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����С����4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - ��������ʾ��Ԫ�ص�ַ��a+1�ǵڶ���Ԫ�ص�ַ����С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));//4/8 - &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 - &a[0]��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - &a[0]+1�ǵڶ���Ԫ�صĵ�ַ


	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//sizeof�����������Ĵ�С��6*1=6�ֽ�
//	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	//printf("%d\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��һ���ֽ�
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//&arr ��Ȼ������ĵ�ַ���ǻ��ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));//&arr+1 ���������������ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//-1
//
//	return 0;
//}
