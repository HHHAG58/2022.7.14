#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

//strncmp - �ַ����Ƚ�
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

//strstr - �����ַ���
//ģ��ʵ��
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
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
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
//		printf("�Ӵ�������\n");
//	}
//	else 
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strtok - �ָ��ַ���
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

//strerror - ������Ϣ����
//int main()
//{
//	//������->������Ϣ
//	//char* str = strerror(0);
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���Կ⺯����ִ�й����з������󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
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

//�ַ�����
//int main()
//{
//	char ch = 'we';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת������
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

//�ڴ溯��
//memcpy
//struct S
//{
//	char name[20];
//	int age;
//};
//
////ģ��ʵ��
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
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//memmove - �����ڴ��ص������
//ģ��ʵ��
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