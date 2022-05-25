#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strstr - 查找字符串
//KMP 算法
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//
//	char* ret = my_strstr(p1, p2);
//	
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


////strtok 
//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech
//	//zpw bitedu tech
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	//zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}


//strerror
#include <errno.h>
//int main()
//{
//	//错误码    错误信息
//	//0 -		No error
//	//1 -		operation not permitted
//	//2 -		No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

#include<ctype.h>
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//memcpy，memmove的用法及实现
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void*my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
////C语言标准：
////memcpy 只要处理 不重叠的内存拷贝就可以
////memmove 处理重叠内存拷贝
////
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//if (dest < src)
//	//{
//	//	//前->后
//	//	while (count--)
//	//	{
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else
//	//{
//	//	//后->前
//	//	while (count--)
//	//	{
//	//		*((char*)dest + count) = *((char*)src + count);
//	//	}
//	//}
//	//第二种
//	////if (dest<src||dest>(char*)src+count)
//	////{
//	////	//前->后
//	////}
//	////else
//	////{
//	////	//后->前
//	////}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr + 2, arr, 20);
//	my_memmove(arr,arr+2,20);//处理内存重叠情况的 
//	//memcpy(arr+2,arr,20);
//
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	struct S arr3[] = { {"张三",20}, {"李四",30}};
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	//char* dest , const char* src
//	//strcpy(arr2, arr1);
//	return 0;
//}

//memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset - 内存设置
//int main()
//{
//	//char arr[10]=" ";
//	//memset(arr,'#',10);
//	int arr[10] = { 0 };
//
//	//40 个字节
//
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...
//
//	memset(arr, 1, 10);
//
//	return 0;
//}