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
	printf("����������=>");
	scanf(" % s", password);
	getchar();
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
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
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//....
//		i++;//����
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	    //��ʼ�����жϣ�����
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
//	//10��ѭ��
//	//10�δ�ӡ
//	//10��Ԫ��
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
//		//n�Ľ׳�
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
//		//n�Ľ׳�
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
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//		break;
//	}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	//welcome to bite!!!!!
//	//####################
//	//w##################��
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
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
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
//		printf("����������:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
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
// �Ƚ��������Ĵ�С���Ӵ�С����
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
//��ӡ1-100��3�ı���
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
//���������������Լ��
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
//��1000-2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//��һ��
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
//		//�ڶ���
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�ж�100-200�е�����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ѧ�⺯��
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
//����������n�־��硷
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
//�������
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
//��10�����������ֵ
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
//����Ļ������˷��ھ���
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
//��������Ϸ
//1.��������һ�������
//2.������
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****  1.play      0.exit  ****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	//1.���������
//
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	ret = rand()%100+1;//����1-100֮��������
//	//printf("%d\n", ret);
//		//2.������
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
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
//дһ������ʹ������1�����ڹػ����롰������ȡ���ػ�
//��һ��--ѭ���м���goto���
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���  -strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//		return 0;
//}
//�ڶ���
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע����ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)//�Ƚ������ַ���  -strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
