#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


                          //�ڴ溯��

//1.memcpy

//2.memmove

//3.memcmp

//4.memset




//1.memcpy   �ڴ濽����������������ǰ�һ���ڴ������ݿ�������һ���ڴ���У��������ڴ��е��״�ŵ������͵�����,��memcpy�����������ص��ĺ���

             //��һ����������strcpy�����ģ����Ǹ��ַ���������������ס�����ַ�������--ֻ�����ַ�������������д�ŵ������ͱ��������������������Ϊ����


//void * memcpy ( void * destination, const void * source, size_t num );

                  //size_t num ����˼��Ҫ�������ٸ��ֽ�

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[10] = { 0 };

    memcpy(arr2, arr1, 20);

    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);

    }
 


    return 0;
}

*/




//ģ��ʵ��memcpy����

/*

#include <stdio.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
    void* ret = dest;
    assert(dest && src);

    while (num--)
    {

        *(char*)dest = *(char*)src;//������Ҫ��src��destǿ������ת����char*���ͣ�����һ���ֽ�һ���ֽڵĿ���
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }

    return ret;

}

int main()
{

    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[10] = { 0 };

    my_memcpy(arr2, arr1, 20);

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);

    }

    return 0;
}

*/


//��������ص������飬����Ҫʹ������ĺ�����memmove����

//void * memmove ( void * destination, const void * source, size_t num );

//���磺��arr1�е�12345 ������34567��ȥ

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    

    memmove(arr1+2, arr1, 20);

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);

    }



    return 0;
}

*/

 