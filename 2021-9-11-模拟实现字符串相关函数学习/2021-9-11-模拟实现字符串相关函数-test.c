#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//ģ��ʵ�ֿ⺯����strcpy

//���ǿ⺯���ķ���

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = "xxxxxxxxxxxx";
	char arr2[] = "hello";

	//��arr2������arr1����

	strcpy(arr1,arr2); //��һ��������Ŀ��ռ����ʼ��ַ  �ڶ���������Դ�ռ����ʼ��ַ
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr1));

	//����Ŀ��������ǣ���arr2���е� \0 Ҳ������ȥ  ��ʱ��arr1���ַ�������5  ����hello�ĳ���


	return 0;
}

*/


//ģ��ʵ�ֿ⺯��strcpy



//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void my_strcpy(char* dest, const char* src)
//{
//	 
//	/*
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	*dest = *src; //���� \0�Ŀ���
//	
//	*/
//
//	//1.���Խ�������������Ż�
//
//	//���arr2��һ����ָ��Ļ����������쳣������Ҫ�����Ż�
//
//	assert(src != NULL);//����
//
//	while (*dest = *src)   //����������˸�ֵ��Ҳ����˿���
//	{
//		;
//	}
//
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//��arr2������arr1����
//
//	my_strcpy(arr1, arr2); //��һ��������Ŀ��ռ����ʼ��ַ  �ڶ���������Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//		
//
//
//	return 0;
//}





//const ����ָ�����ʱ��const������� * ����ߣ����ε��� *p����ʾָ��ָ������ݣ���ָ��ָ��Ķ�������ݣ��ǲ���ͨ��ָ�����ı�ģ����ǣ�ָ����������ǿ����޸ĵģ���ָ��ָ��Ķ�������޸�

//���ӣ�

/*

int num = 100;
int n = 10;
const int* p = &num;
*p = 20;             //�����Ǵ���ģ���Ϊconst���ε��� *p ��p�������ǲ������޸ĵ�

p = &n;              //�����ǿ��Եģ���Ϊconst���ε��� *p ��p�����ݲ������޸ģ�����p��ָ��Ķ�������޸�

*/


//const ����ָ�����ʱ��const������� * ���ұߣ����ε���ָ����� p ����ʾָ�������ָ��Ķ����ܱ��ı䣬���ǣ�p��ָ��Ķ�������ݿ��Ա��ı�





//ģ��ʵ��strlen���������ַ�������

/*

#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str != NULL);

	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;

	}

	return count;


}


int main()
{
	char arr[] = "hello";

	int len = my_strlen(arr);

	printf("%d ",len);

	return 0;
}

*/





