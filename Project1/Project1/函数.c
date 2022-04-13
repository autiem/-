#include<stdio.h>
//int Add(int x, int y )
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	//strlen
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr1[] = "bite";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy  - string copy -字符串拷贝
//	//strlen  - string length -字符串长度有关
//	return 0;
//}


//memset
//memory  - 内存 set - 设置
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n ", max);
//	return 0;
//}
//不能完成任务
// 
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y=tmp;
//}
//void Swap2(int*pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n ", a, b);
//	//调用Swap1函数 -传值调用
//	Swap1(a, b);
//	//调用Swap2函数 -传址调用
//	Swap2(&a, &b);
//	//int tmp = 0;
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n ", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//写一个函数判断100-200之间的素数
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i<=200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//写一个函数判断1000-2000年之间的闰年
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year)==1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k,int sz)//本质上这里的arr是一个指针
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                      传递过去的是数组arr的首元素的地址	
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//写一个函数，每调用一次这个函数，就会将num的值加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}
//函数的嵌套调用和链式访问
//函数和函数之间是可以有机的组合的
//嵌套调用举例
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//链式访问  -  把一个函数的返回值作为另一个函数的参数。
//举例1
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
// 举例2
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//            1             (2   (      43)) 
//	return 0;
//}
//函数的声明和定义

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//函数的递归
// 递归的两个必要条件
// 1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
// 2每次递归调用之后越来越接近这个限制条件。
// 练习1
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//
//	return 0;
//}


//练习2
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
////大事化小
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}
//练习3
//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
// }
//int Fac2(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (n <= 1)
//			return 1;
//		else
//			return n * Fac2(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//练习4
//求第n个斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3)//测试第三个斐波那契数的计算次数
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//TDD测试驱动开发
//	int ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//《剑指offer》