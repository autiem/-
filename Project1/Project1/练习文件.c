#define _CRT_SECURE_NO_WARNINGS 1
////汉诺塔问题
//#include <stdio.h>
//int count = 0;//统计移动次数
//void hanoi(int i, char a, char b,char c) 
//{
//
//    if (i == 1)
//        printf("第%d次:从 %c 移动至 %c\n",count++, a, b);//只有一个圆盘时，直接从起始柱移至目标柱
//    else 
//    {
//        hanoi(i - 1, a, c, b);//递归调用 hanoi() 函数，将 num-1 个圆盘从起始柱移动到辅助柱上
//        printf("第%d次:从 %c 移动至 %c\n",count++, a, b);//将起始柱上剩余的最后一个大圆盘移动到目标柱上
//        hanoi(i - 1, c, a, b);//递归调用 hanoi() 函数，将辅助柱上的 num-1 圆盘移动到目标柱上
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//输入圆盘数量
//    hanoi(n, 'A', 'B', 'C');
//    printf("count = %d\n", count);//打印所需次数
//    return 0;
//}

//青蛙跳台阶问题(斐波那契数的另一种举例)--一只青蛙一次能跳一个台阶也能跳两个台阶，那么它跳上n个台阶有多少种跳法？
//#include<stdio.h>
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(x>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//冒泡排序
//#include<stdio.h>
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//数组操作：要求1.实现函数int()初始化数组为全0
//			   2.实现printf()打印数组的每个元素
//             3.实现reverse()函数完成数组的逆置
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr2[], int sz1)
//{
//	int left = 0;
//	int right = sz1 - 1;
//	while (left < right)
//	{
//		int tmp = arr2[left];
//		arr2[left] = arr2[right];
//		arr2[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//把数组初始化为全0
//	Print(arr, sz);//打印
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr2) / sizeof(arr2[0]);
//	Print(arr2, sz1);
//	Reverse(arr2,sz1);
//	Print(arr2, sz1);
//	return 0;
//}
//交换数组：将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//统计二进制数中1的个数：写一个函数返回参数二进制中1的个数
//#include<stdio.h>
////int jishu(unsigned int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n = n / 2;
////	}
////	return count;	
////}
////另一种方法
//int jishu( int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制表示中有几个1
//	int count = jishu(a);
//	printf("count = %d ", count);
//	return 0;
//}
//求二进制中不同位的个数：两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同
//#include<stdio.h>
//int get_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}
//打印二进制数列的奇数位和偶数位：获取一个整数二进制序列中所有的奇数位和偶数位，分别打印出二进制序列
//#include<stdio.h>
//void Print(int m)
//{
//    int i = 0;
//    printf("奇数位：");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//    printf("\n");
//    printf("偶数位：");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//}
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    Print(m);
//    return 0;
//}
//使用指针打印数组内容：写一个函数打印数组内容，不使用数组下标，使用指针，数组是一个整形一维数组
//#include<stdio.h>
//void Print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}
//用函数打印99乘法表
//#include<stdio.h>
//void chengfabiao(int m)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	chengfabiao(m);
//	return 0;
//}
//字符串逆序（递归实现）：编写一个函数将参数字符串中的字符反向排列，不能用c库函数中的字符串操作函数
//#include<stdio.h>
////#include<string.h>
////void revese_string(char arr[])
////{
////	int left = 0;
////	int right = strlen(arr) - 1;
////	while (left < right)
////	{
////		int tmp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = tmp;
////		left++;
////		right--;
////	}
////}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void revese_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		revese_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	revese_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//计算一个属的每一位之和（递归实现）写一个递归函数，输入一个非负整数，返回组成它数字之和
//#include<stdio.h>
//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("ret = %d\n", ret);
//	return  0;
//}
//递归实现n的k次方
//#include<stdio.h>
//double POW(int n, int k)
//{
//	if (k < 0)
//	{
//		return(1.0 / POW(n, -k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * POW(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = POW(n,k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}