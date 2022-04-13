#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//描述一个学生-一些数据
//姓名
//年龄
//电话
//性别
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局的结构体变量
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = { "张三",20,"15249287076","男" };//局部的结构体变量
//	struct Stu s2 = { "旺财",30,"15596668862","保密" };
//
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.140000
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age :%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex :%s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age :%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex :%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"15598886688","男" };
//	//打印结构体数据
//	//
//	Print1(s);
//	Print2(&s);
//	return 0;
//}