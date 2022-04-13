//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////以下为单目操作符
//算数操作符
//int main()
//{
//	double a = 5 / 2.0;//商2余1
//	printf("a = %lf\n", a);
//	return 0;
//}
//移位操作符
//int main()
//{
//	int a = 16;
//	//>> -- 右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//右移操作符
//	//1.算术右移 -- 右边丢弃，左边补原符号位
//	//2.逻辑右移 -- 右边直接丢弃，左边补0
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//
//	//整数的二进制表示有三种：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}	
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	//左移操作符
//	//左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}
//位操作符
//int main()
//{
//	//& - 按2进制位与
//	//同1为1，不同为0
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011 -- 3
//	//00000000000000000000000000000101 -- 5
//	//00000000000000000000000000000001
//	//printf("%d\n", c);
//	//| - 按2进制位或
//	//有1为1，无1为0
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d\n", c);
//	//00000000000000000000000000000011 -- 3
//	//00000000000000000000000000000101 -- 5
//	//00000000000000000000000000000111
//	//^ - 按2进制位异或
//	//相同为0，相异为1
//	//int a = 3;
//	//int b = 5;
//	////00000000000000000000000000000011 -- 3
//	////00000000000000000000000000000101 -- 5
//	////00000000000000000000000000000110
//	//int c = a ^ b;
//	//printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("before: a=%d b=%d\n",a,b);
//
//	////加减法 - 可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a=%d b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//32bit
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	//统计num的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);*/
//	return 0;
//}
//赋值操作符
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合赋值符
//	{
//	a = a >> 1;
//	a >>= 1;//意义相同
//	}
// {
//	a = a & 1;
//	a &= 1;//意义相同
// }
//	return 0;
//}
//单目操作符
//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	a = -a;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof - 计算的变量所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//40
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(b));
//	//printf("%d\n", sizeof(char));
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[10]));
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	//int a = 0;
//	////~按（2进制）位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111 - 补码
//	////11111111111111111111111111111110 - 反码
//	////10000000000000000000000000000001 - 原码
//	////-1
// //	printf("%d\n",~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，再++
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//int a=int(3.14)//err
//	return 0;
//}
//sizeof和数组
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int i = 0,a = 1,b = 2,c = 3,d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//b = (a > 5 ? 3 : -3);
//	return 0;
//}
//
//int get_max(int x,int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//学生
//int float
//
//创建一个结构体类型 - struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = { "张三",20,"2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}

//实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//实例2
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}
