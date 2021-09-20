#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



         //自定义类型：结构体，枚举，联合

//1.结构体：结构体是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量

//结构的声明
/*

struct Stu
{
    char name[20];//名字
    int age;//年龄
    char sex[5];//性别
    char id[20];//学号
}；//分号不能丢


*/



//特殊的声明   在声明结构的时候，可以不完全的声明

//匿名结构体类型
//struct
//{
//    int a;
//    char b;
//    float c;
//}x;
//struct
//{
//    int a;
//    char b;
//    float c;
//}a[20], * p;



//结构的自引用       在结构中包含一个类型为该结构本身的成员是否可以呢？

//正确的自引用方式：
/*
struct Node
{
    int data;
    struct Node* next;
};

*/


//结构体变量的定义和初始化

/*
struct Point
{
    int x;
    int y;
}p1; //声明类型的同时定义变量p1

struct Point p2; //定义结构体变量p2

//初始化：定义变量的同时赋初值。

struct Point p3 = { x, y };


struct Stu //类型声明
{
    char name[15];//名字
    int age; //年龄
};

struct Stu s = { "zhangsan", 20 };//初始化

struct Node
{
    int data;
    struct Point p;
    struct Node* next;
}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化

struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化

*/



//结构体内存对齐

//计算结构体的大小

#include <stdio.h>

struct S
{
    int i;
    char c;
};


int main()
{
    struct S s = { 0 };

    printf("%d ",sizeof(s));


    return 0;
}
