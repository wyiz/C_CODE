#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//��ĸ��
//   1. ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//   2. ָ��Ĵ�С�ǹ̶���4 / 8���ֽڣ�32λƽ̨ / 64λƽ̨����
//   3. ָ���������ͣ�ָ������;�����ָ��� + -�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//   4. ָ�������



//�ַ�ָ��

//��ָ�������������֪����һ��ָ������Ϊ�ַ�ָ�� char* 

/*
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'w';
	return 0;
}

*/



//����һ��ʹ�÷�ʽ���£�

/*

int main()
{
	char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������  ��ʵ���ǵģ��ǰ��ַ������׵�ַ��h�ĵ�ַ��ֵ����pstr
	printf("%s\n", pstr);
	return 0;
}

*/


//�����ǰ��ַ��� hello bit. ���ַ��ĵ�ַ�ŵ���pstr��

/*

#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";    //����"hello bit."�ǳ����ַ���������������ǲ������޸ĵ�
	char* str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}


*/





//ָ������
/*

	int* arr1[10]; //����ָ�������    �����������ָ�������   ����������arr1����10��Ԫ�أ�ÿ��Ԫ�ص�������int*
	char *arr2[4]; //һ���ַ�ָ�������
	char **arr3[5];//�����ַ�ָ�������

*/



//����ָ��    ������ʱһ��ָ��


