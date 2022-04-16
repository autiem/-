#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//4
//	float f = 10.0;//4
//	short b = 10;
//	short int c = 10;
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}


//int main()
//{
//	int a = 20;//4个字节--32个bit位
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//0xFFFFFFF6
//	return 0;
//}


////简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
////int check_sys()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	if (*p == 1)
////		return 1;
////	else
////		return 0;
////}
////int check_sys()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	//返回1，小端；返回0；大端
////	return *p;
////}
//int check_sys()
//{
//	int a = 1;
//	return*(char*)&a;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111
//
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("a=%d b=%d c=%d ", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100 - 补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010 - 原反补码相同
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010 - -10
//	printf("%d", i + j);
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >=0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}






int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}