#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//sizeof(arr)计算的数组的大小，单位是字符 - 7
	//printf("%d\n", sizeof(arr + 0));//4/8  计算的是地址的大小，arr+0是首元素的地址
	//printf("%d\n", sizeof(*arr));//1 *arr是首元素，sizeof(*arr)计算首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 第二个元素的地址

	//printf("%d\n", strlen(arr));//6 
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err   非法访问
	////printf("%d\n", strlen(arr[1]));//err   非法访问
	//printf("%d\n", strlen(&arr));//6 &arr - 数组的地址 - 数组指针 char(*p)[7] = &arr;
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1 *p就是字符串的第一个字符 - 'a'
	//printf("%d\n", sizeof(p[0]));//1 int arr[10];  arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	//printf("%d\n", sizeof(&p));//4/8 地址
	//printf("%d\n", sizeof(&p + 1));//4/8 地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 地址

	//printf("%d\n", strlen(p));//6 
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err 非法访问
	////printf("%d\n", strlen(p[0]));//err 非法访问
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a[0] + 1);
//	printf("%p\n", a + 1);
//	printf("%p\n", &a[0] + 1);
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	//所以a[0]+1就是第一行第二个元素的地址，地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - *(a[0]+1)是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1));//4/8 - a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行(首元素)的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(a[1])计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4 - 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//16 - a是首元素的地址，是第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}

////指针笔试题
//笔试题一
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2，5
//	return 0;
//}

//笔试题二
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//笔试题三
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//笔试题四
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//笔试题五
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//笔试题六
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//笔试题七
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//笔试题八
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