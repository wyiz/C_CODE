#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


                          //内存函数

//1.memcpy

//2.memmove

//3.memcmp

//4.memset




//1.memcpy   内存拷贝函数，这个函数是把一个内存块的内容拷贝到另一个内存块中，不考虑内存中到底存放的是类型的数据,且memcpy函数拷贝不重叠的函数

             //这一点是区别于strcpy函数的，这是个字符串拷贝函数，记住，是字符串，对--只考虑字符串，如果数组中存放的是整型变量，那这个函数就无能为力了


//void * memcpy ( void * destination, const void * source, size_t num );

                  //size_t num 的意思是要拷贝多少个字节

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




//模拟实现memcpy函数

/*

#include <stdio.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
    void* ret = dest;
    assert(dest && src);

    while (num--)
    {

        *(char*)dest = *(char*)src;//这里需要把src和dest强制类型转换成char*类型，进行一个字节一个字节的拷贝
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


//如果拷贝重叠的数组，就需要使用另外的函数：memmove函数

//void * memmove ( void * destination, const void * source, size_t num );

//例如：把arr1中的12345 拷贝到34567上去

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

 