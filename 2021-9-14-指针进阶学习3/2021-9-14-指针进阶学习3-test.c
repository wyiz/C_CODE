#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//һ��ָ�봫��

/*
#include <stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//һ��ָ��p����������
	print(p, sz);
	return 0;
}

*/



//����ָ��

/*

#include <stdio.h>
void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}
int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);
	test(&p);
	return 0;
}


*/





//����ָ��

 //ָ������ָ��  -- ��ź�����ַ��ָ��

/*

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int* pa = &a;

	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 0 };
	
	int (*parr)[10] = &arr;//ȡ������ĵ�ַ   ����������ָ��
	//parrָ�������ָ�� -- ������ŵ�������ĵ�ַ


	//����ָ��  -- ��ź�����ַ��ָ��

	//&������  -- ȡ�����Ǻ����ĵ�ַ   ����  ������ == &������  ��������д������ȡ�������ĵ�ַ

	printf("%p \n",&add);
	printf("%p \n", add);

	int (*pf)(int, int) = &add;  //����pf���Ǻ���ָ��ߣ�����ģ���������Ҫ���뺯������������

	//��pf�������˺���add�ĵ�ַ֮����ôͨ����ַ���ú����أ�

	int ret = (*pf)(3, 5);                  //*pf�Ƕ�pf���н����ã����ҵ����Ǹ��������ҵ�����֮���Ҫ���ú��������Ժ������д���

	int ret2 = pf(3, 5);                    //����������д����һ���ģ������*��ʵû�����ã����Ǳ�������

	return 0;
}

*/



//�������Ĵ���

//  (*(void (*)())0)();
