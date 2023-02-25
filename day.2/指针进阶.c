 #define _CRT_SECURE_NO_WARNINGS 1
int my_strlen(const char* str)
{
	return 0;
}

int main()
{
	char* arr1[] = 0;//指针数组
	char arr2[5] = { 0 };//数组指针
	int(*p)[5] = &arr2;//pf是一个指向函数的函数指针变量
	int (*pf) = &my_strlen;//函数指针

	//函数指针数组--存放函数指针的数组
	int (*pfArr[10])(const char*);

	return 0;
}