#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//λ�� - ������λ
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
////47bit - 6���ֽ�*8 = 48bit
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
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

//c���Ե�Դ����----->��ִ�г���
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


//���� - ������ - ������
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


//�жϵ�ǰ������Ĵ�С�˴洢
//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	//����1����ʾС��
//	//����0����ʾ���
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//int a = 0x11 22 33 44;
//	//�͵�ַ------------------>�ߵ�ַ
//	//...[][][][11][22][33][44][][][][]... ����ֽ���洢ģʽ
//	//...[][][][44][33][22][11][][][][]... С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//	//
//
//	return 0;
//}


//���ϼ����С
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