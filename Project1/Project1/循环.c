#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	return 0;
//}
//int main()
//{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	/*int ret = 0;
	char password[20] = {0};
	printf("请输入密码=>");
	scanf(" % s", password);
	getchar();
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}*/
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//....
//		i++;//调整
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	    //初始化；判断；调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d", i);
//	}
//	return 0;
// }
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//if (i = 5)
//			//printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次循环
//	//10次打印
//	//10个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		int j = 0;
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d" ,& n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(n=1;n<=3;n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		//n的阶乘
//		sum = sum + ret;
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for (n = 1; n <= 10; n++)
//	{
//			ret = ret * n;
//		//n的阶乘
//		sum = sum + ret;
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", mid);
//		break;
//	}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	//welcome to bite!!!!!
//	//####################
//	//w##################！
//	//we################!!
//	//...
//	//welcome to bite!!!!!
//	char arr1[] = "welcome to bite!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20	] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", sum(a));
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("%d\n", i);
//	}
//}
// 比较三个数的大小并从大到小排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//打印1-100中3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//	}
//	return 0;
//}
//给定两个数求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//求1000-2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//第一种
//		/*if (year%4==0&&year%100!=0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year%400==0)
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//		//第二种
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//判断100-200中的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	} 
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//《素数求解的n种境界》
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//分数求和
//int main()
//{
//	int i = 0;
//	double  sum=0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//求10个整数中最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//猜数字游戏
//1.电脑生成一个随机数
//2.猜数字
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****  1.play      0.exit  ****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	//1.生成随机数
//
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	ret = rand()%100+1;//生成1-100之间的随机数
//	//printf("%d\n", ret);
//		//2.猜数字
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	printf("hello bite\n");
//	goto again;
//	printf("hello\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//写一个程序使电脑在1分钟内关机输入“我是猪”取消关机
//第一种--循环中加入goto语句
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串  -strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//		return 0;
//}
//第二种
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//比较两个字符串  -strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
