 #define _CRT_SECURE_NO_WARNINGS 1
int my_strlen(const char* str)
{
	return 0;
}

int main()
{
	char* arr1[] = 0;//ָ������
	char arr2[5] = { 0 };//����ָ��
	int(*p)[5] = &arr2;//pf��һ��ָ�����ĺ���ָ�����
	int (*pf) = &my_strlen;//����ָ��

	//����ָ������--��ź���ָ�������
	int (*pfArr[10])(const char*);

	return 0;
}