#define _CRT_SECURE_NO_WARNINGS 1
////��ŵ������
//#include <stdio.h>
//int count = 0;//ͳ���ƶ�����
//void hanoi(int i, char a, char b,char c) 
//{
//
//    if (i == 1)
//        printf("��%d��:�� %c �ƶ��� %c\n",count++, a, b);//ֻ��һ��Բ��ʱ��ֱ�Ӵ���ʼ������Ŀ����
//    else 
//    {
//        hanoi(i - 1, a, c, b);//�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
//        printf("��%d��:�� %c �ƶ��� %c\n",count++, a, b);//����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
//        hanoi(i - 1, c, a, b);//�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//����Բ������
//    hanoi(n, 'A', 'B', 'C');
//    printf("count = %d\n", count);//��ӡ�������
//    return 0;
//}

//������̨������(쳲�����������һ�־���)--һֻ����һ������һ��̨��Ҳ��������̨�ף���ô������n��̨���ж�����������
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
//ð������
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
//���������Ҫ��1.ʵ�ֺ���int()��ʼ������Ϊȫ0
//			   2.ʵ��printf()��ӡ�����ÿ��Ԫ��
//             3.ʵ��reverse()����������������
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
//	Init(arr,sz);//�������ʼ��Ϊȫ0
//	Print(arr, sz);//��ӡ
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr2) / sizeof(arr2[0]);
//	Print(arr2, sz1);
//	Reverse(arr2,sz1);
//	Print(arr2, sz1);
//	return 0;
//}
//�������飺������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//ͳ�ƶ���������1�ĸ�����дһ���������ز�����������1�ĸ���
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
////��һ�ַ���
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
//	//дһ��������a�Ķ����Ʊ�ʾ���м���1
//	int count = jishu(a);
//	printf("count = %d ", count);
//	return 0;
//}
//��������в�ͬλ�ĸ���������int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
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
//��ӡ���������е�����λ��ż��λ����ȡһ���������������������е�����λ��ż��λ���ֱ��ӡ������������
//#include<stdio.h>
//void Print(int m)
//{
//    int i = 0;
//    printf("����λ��");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//    printf("\n");
//    printf("ż��λ��");
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
//ʹ��ָ���ӡ�������ݣ�дһ��������ӡ�������ݣ���ʹ�������±꣬ʹ��ָ�룬������һ������һά����
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
//�ú�����ӡ99�˷���
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
//�ַ������򣨵ݹ�ʵ�֣�����дһ�������������ַ����е��ַ��������У�������c�⺯���е��ַ�����������
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
//����һ������ÿһλ֮�ͣ��ݹ�ʵ�֣�дһ���ݹ麯��������һ���Ǹ��������������������֮��
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
//�ݹ�ʵ��n��k�η�
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