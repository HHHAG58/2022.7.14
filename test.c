#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

//strncmp - 字符串比较
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//strstr - 查找字符串
//模拟实现
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return p1;
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
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	
//	char* ret = my_strstr(p1, p2);
//	
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else 
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strtok - 分隔字符串
//int main()
//{
//	/*char arr[] = "ncwhi@ojwojc.ceo";
//	char* p = "@.";*/
//
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror - 错误信息函数
//int main()
//{
//	//错误码->错误信息
//	//char* str = strerror(0);
//	//errno是一个全局的错误码的变量
//	//当c语言库函数在执行过程中发生错误，就会把对应的错误码赋值到errno中
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
//
//	return 0;
//}

//字符函数
//int main()
//{
//	char ch = 'we';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换函数
//int main()
//{
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A STUdent";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//内存函数
//memcpy
//struct S
//{
//	char name[20];
//	int age;
//};
//
////模拟实现
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
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
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//memmove - 处理内存重叠的情况
//模拟实现
void* my_memmove(void* dest, const void* src, size_t count)
{

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	my_memmove(arr + 2, arr, 20);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}