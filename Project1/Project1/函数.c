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
//	//strcpy  - string copy -�ַ�������
//	//strlen  - string length -�ַ��������й�
//	return 0;
//}


//memset
//memory  - �ڴ� set - ����
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
//�����������
// 
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
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
//	//����Swap1���� -��ֵ����
//	Swap1(a, b);
//	//����Swap2���� -��ַ����
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
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}
//дһ�������ж�100-200֮�������
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
//дһ�������ж�1000-2000��֮�������
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
//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k,int sz)//�����������arr��һ��ָ��
//{
//	//�㷨��ʵ��
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                      ���ݹ�ȥ��������arr����Ԫ�صĵ�ַ	
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//дһ��������ÿ����һ������������ͻὫnum��ֵ��1
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
//������Ƕ�׵��ú���ʽ����
//�����ͺ���֮���ǿ����л�����ϵ�
//Ƕ�׵��þ���
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
//��ʽ����  -  ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//����1
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
// ����2
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//            1             (2   (      43)) 
//	return 0;
//}
//�����������Ͷ���

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�����ĵݹ�
// �ݹ��������Ҫ����
// 1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
// 2ÿ�εݹ����֮��Խ��Խ�ӽ��������������
// ��ϰ1
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
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//
//	return 0;
//}


//��ϰ2
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
////���»�С
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
//��ϰ3
//��n�Ľ׳�
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
//��ϰ4
//���n��쳲�������
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3)//���Ե�����쳲��������ļ������
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
//	//TDD������������
//	int ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//����ָoffer��