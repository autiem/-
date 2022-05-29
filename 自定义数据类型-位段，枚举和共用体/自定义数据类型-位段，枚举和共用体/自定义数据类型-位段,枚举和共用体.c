#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//位段 - 二进制位
//

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
////47bit - 6个字节*8 = 48bit
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}


//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE=2,
//	FEMALE=4,
//	SERCET=8
//};

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//	
//};

//c语言的源代码----->可执行程序
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//int main()
//{
//	//enum Sex s = MALE;
//	
//	//enum Color c= BLUE;
//	int color = RED;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SERCET);
//	return 0;
//}


//联合 - 联合体 - 共用体
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//判断当前计算机的大小端存储
//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	//返回1，表示小端
//	//返回0，表示大端
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//int a = 0x11 22 33 44;
//	//低地址------------------>高地址
//	//...[][][][11][22][33][44][][][][]... 大端字节序存储模式
//	//...[][][][44][33][22][11][][][][]... 小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	//
//
//	return 0;
//}


//联合计算大小
//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}