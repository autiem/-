#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量(对象)
////描述学生：属性-名字+电话+性别+年龄
//struct Stu
//{	//成员变量
//	char name[20];//名字
//	char tle[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;
//
//struct Stu s3;//全局变量
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}* psa;
//int main()
//{
//	return 0;
//}
//
//////结构体的自引用
//struct Node
//{
//	int date;//4
//	struct Node* next;//4/8
//};
//
//int main()
//{
//
//	return 0;
//}


////typedef struct Node
//{
//	int date;//4
//	struct Node* next;//4/8
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


////struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	//printf("%c %d %lf %s ", s.c, s.a, s.d, s.arr);
//	printf("%lf ", s.st.weight);
//	return 0;
//}

////struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//
//	return 0;
//}
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//
//	return 0;
//}

//设置默认对其数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//结构体传参
struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S *ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

//传值
Print1(struct S tmp)
{
	printf("%d %c %lf ", tmp.a, tmp.c, tmp.d);
}

//传址
Print2(const struct S *ps)
{
	printf("%d %c %lf ", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s;
	Init(&s);
	Print1(s);
	Print2(&s);
	/*s.a = 100;
	s.c = 'w';
	s.d = 3.14;
	
	printf("%d\n", s.a);*/
	return 0;
}