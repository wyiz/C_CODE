#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


                         //数据的存储

//数据类型介绍

/*

char //字符数据类型
short //短整型
int //整形
long //长整型
long long //更长的整形
float //单精度浮点数
double //双精度浮点数
//C语言有没有字符串类型？  -- 没有  一般字符串都是存储在数组当中

*/



//类型的基本归类：

//1.整形家族：

/*

   char
       unsigned char
       signed char

   short
       unsigned short [int]
       signed short [int]

   int
        unsigned int
        signed int

   long
        unsigned long [int]
        signed long [int]


*/




//2.浮点数家族：

//float
//double


//3.构造类型：

//   数组类型
//   结构体类型 struct
//   枚举类型 enum
//   联合类型 union



//4.指针类型

//  int *pi;
//  char* pc;
//  float* pf;
//  void* pv;


//5.空类型

//  void 表示空类型（无类型）
//  通常应用于函数的返回类型、函数的参数、指针类型







            //大小端介绍

//什么是大端小端：
// 
//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
// 
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地址中




//百度2015年系统工程师笔试题：

//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序

//答：大端字节序：把数据的低地址的字节序放到内存的高地址处，把数据的高地址的字节序放到内存中的低地址处
     
   //小端字节序：把数据的低地址的字节序放到内存的低地址处，把数据的高地址的字节序放到内存中的高地址处



/*
#include <stdio.h>

int main()
{
    int a = 1;
    char* p = (char*)&a;

    if (*p == 1)
    {
        printf("该机器是小端存储模式\n");
    }
    else
    {
        printf("该机器是大端存储模式\n");
    }

    return 0;
}

*/

