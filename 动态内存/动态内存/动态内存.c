#define _CRT_SECURE_NO_WARNINGS 1


//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50个struct S 类型的数据
//	//30 - 浪费
//	//60 - 不够
//	return 0;
//}

//C语言是可以创建变长数组的 - C99中增加了

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>




//malloc和free的用法
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i) = i);
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//
//	 return 0;
//}



//calloc的用法
//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p=(int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc
//调整动态开辟内存空间的大小


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的内存空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc的返回值
//
//	int* ptr = (int*)realloc(p, INT_MAX);
//	if (*ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

#include<windows.h>
//常见的动态内存开辟的错误
//int main()
//{
//	////1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值为NULL
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//	 
//	
//	////2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	////
//	//free(p);
//	//p = NULL;
//
//	////3.对非动态开辟内存使用free释放
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//
//	//free(p);
//	//p = NULL;
//
//	////4.使用free释放一块动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	////使用free释放动态内存开辟内存的一部分
//	//free(p);
//	//p = NULL;
//
//	////5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//
//	////6.动态开辟内存忘记释放（内存泄漏）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}


//几个经典的笔试题
//笔试题1
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
////问题
////1.运行代码程序会出现崩溃的现象
////2.程序存在内存泄漏的问题
////内存泄露的原因：str以值传递的形式给p，p是GetMemory函数的形参，只能函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放，
////并且无法找到，所以会造成内存泄漏

//笔试题2
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void) 
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//问题
//返回栈空间的地址的问题
//存在非法访问内存的问题
//传入GetMemory（char* p)函数的形参为字符串指针，在函数内部修改形参并不能真正的改变传入形参的值。执行完后的str仍然为NULL。
//编译器总是要为每个参数制作临时副本，指针参数p的副本是_p，编译器使_p = p。
//如果函数体内的程序修改了_p的内容，就导致参数p的内容作相应的修改，这就是指针可以用作输出参数的原因。
//在本例中，_p申请了新的内存，只是把_p所指的内存地址改变了，但是p丝毫未变。所以GetMemory并不能输出任何东西。
//事实上，每执行一次GetMemory就会泄露一块内存，因为没有用free释放内存
//int* test()
//{
//	//static int a = 10;//静态区
//	int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//笔试题3
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改正
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//问题
//忘记释放动态开辟的内存，导致内存泄露了

//笔试题4
//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//修改
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
// {
//	Test();
//	return 0;
//}
//问题
//非法访问内存：释放后的内存空间再次被使用形成非法访问


//柔性数组
//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//未知大小的
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
//};
//
//
//int main()
//{
//	//struct S s;//
//	//printf("%d\n", sizeof(s));//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (*ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}