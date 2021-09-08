#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



            //数组的学习

//数组的创建
//数组是一组相同类型元素的集合

//数组创建的实例

//代码1
//int arr1[10];


//代码2
//int count = 10;
//int arr2[count];//数组时候可以正常创建？    这里创建的方式是错误的，因为数组[]中必须是常量   但是count的本质是变量


//代码3
//char arr3[10];
//float arr4[1];
//double arr5[20];

//注：数组创建， [] 中要给一个常量才可以，不能使用变量


//数组的初始化

//数组的初始化是指，在创建数组的同时给数组的内容一些合理初始值（初始化）

/*
int arr1[10] = { 1,2,3 };//不完全初始化
int arr2[] = { 1,2,3,4 };
int arr3[5] = { 1,2,3,4,5 };
char arr4[3] = { 'a',98, 'c' };//完全初始化
char arr5[] = { 'a','b','c' };
char arr6[] = "abcdef";

*/


//数组在创建的时候如果想不指定数组的确定的大小就得初始化  数组的元素个数根据初始化的内容来确定

/*

char arr1[] = "abc";    //arr1在内存中有四个元素  a b c \0

char arr2[3] = {'a','b','c'};  //arr2在内存中有三个元素 a b c 

*/


//一维数组的使用

/*

#include <stdio.h>
int main()
{
    int arr[10] = { 0 };//数组的不完全初始化
    //计算数组的元素个数
    int sz = sizeof(arr) / sizeof(arr[0]);
    //对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
    int i = 0;//做下标
    for (i = 0; i < 10; i++)//这里写10，好不好？  最好写成sz
    {
        arr[i] = i;
    }
    //输出数组的内容
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

*/


//总结:
//1. 数组是使用下标来访问的，下标是从0开始。
//2. 数组的大小可以通过计算得到               sizeof(arr)//sizeof(arr[0])


//一维数组在内存中的存储

/*

#include <stdio.h>
int main()
{
int arr[10] = {0};
int i = 0;
for(i=0; i<sizeof(arr)/sizeof(arr[0]); ++i)
{
printf("&arr[%d] = %p\n", i, &arr[i]);
}
return 0;
}

*/


//仔细观察输出的结果，我们知道，随着数组下标的增长，元素的地址，也在有规律的递增。 由此可以得出结论：数组在内存中是连续存放的

