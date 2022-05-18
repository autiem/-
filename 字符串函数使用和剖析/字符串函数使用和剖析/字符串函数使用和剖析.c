#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen:求字符串长度
//1.计数器的方法
//2.递归
//3.指针-指针

//size_t==unsigned int

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////错误示范
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////int len = my_strlen(arr);
//	//printf("%d\n", len);
//	            //3      -       //6    =-3
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


////strcpy：字符串拷贝
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "bcdefjhi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat：字符串追加
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp：字符串比较
//int main()
//{
//	//
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//		if (my_strcmp(p1, p2) > 0)
//		{
//			printf("p1>p2\n");
//		}
//		else if (my_strcmp(p1, p2) == 0)
//		{
//			printf("p1==p2\n");
//		}
//		else if (my_strcmp(p1, p2) < 0)
//		{
//			printf("p1<p2\n");
//		}
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	//strncpy模拟实现
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
		(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}