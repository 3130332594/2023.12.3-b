#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;//储存dest地址
	//检查dest和src的有效性
	assert(dest != NULL);
	assert(src != NULL);
	//将src拷贝到dest中，包括'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "########";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;

}