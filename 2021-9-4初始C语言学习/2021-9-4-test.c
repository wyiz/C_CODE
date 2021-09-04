#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//C语言学习第二节

//1.字符串+转义字符+注释

//字符串    "hello bit.\n"  

//这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符串。
//注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容


//#include <stdio.h>

//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串要想存起来，需要数组才能存起来
//
//	char arr[] = "hello";
//
//	//字符串在结尾的位置隐藏了一个 \0 字符  \0  是字符串的结束标志
//
//	//要想验证一下字符串的结尾是不是 \0 可以按F10进行调试，在监视窗口里面观察
//
//	return 0;
//}


//2.计算字符串的长度

//使用库函数 strlen 

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "hello";
//
//	char arr2[] = { 'a','b','c' };
//
//	int len1 = strlen(arr1);
//	printf("%d\n",len1);         //5 
//
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);       //计算结果是随机值
//
//	//在计算字符串长度时， \0 是不计算在内的
//	//只有计算元素个数时， \0 才计算在内
//
//	
//
//	return 0;
//}



//笔试题

//程序输出什么？
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));   //答案是 14
//
//	//\t是水平制表符，也要计算在内的
//	return 0;
//}




//3.选择语句

//下面就是典型的选择语句

//#include <stdio.h>

//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}




//4.循环语句

//C语言中如何实现循环呢？
//while语句
//for语句
//do ... while语句


//while循环的实例
//#include <stdio.h>
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("我要继续努力敲代码%d\n",line);
//	}
//	if (line > 20000)
//		printf("赢取白富美\n");
//	return 0;
//}




//5.函数

//写一个函数实现两个数的相加


//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数>:");
//	scanf("%d%d",&a,&b);
//
//	int sum = Add(a,b);
//	printf("计算结果是>:%d\n",sum);
//
//	return 0;
//}






//6.数组

//C语言中给了数组的定义：一组相同类型元素的集合

//#include <stdio.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };  //整形数组
//
//	//访问数组时，是通过访问数组的下标实现的，数组的下标是从0开始的
//	//arr1[0]是数组的第一个元素，以此类推
//
//	char arr2[5] = { 'a','b','c' };          //字符数组
//
//	int i = 0;
//
//	for (i=0;i<10;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//
//
//	return 0;
//}





//条件操作符

//exp1 ? exp2 : exp3


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = a > b ? a : b;
//
//	printf("%d\n",c);
//
//
//	return 0;
//}




//逗号表达式

//exp1, exp2, exp3, …expN

//逗号表达式计算的结果是最后一个表达式的结果

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//
//	          //a=5     c=1         b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);//这就是逗号表达式
//
//	//逗号表达式，是从左向右以此计算的
//
//	printf("%d\n",d);   //计算结果是 3 
//
//	return 0;
//}







//关键字 typedef

//typedef 顾名思义是类型定义，这里应该理解为类型重命名


//将unsigned int 重命名为uint_32, 所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//	//观察num1和num2,这两个变量的类型是一样的
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}







//关键字static
//在C语言中：static是用来修饰变量和函数的

//1. 修饰局部变量 - 静态局部变量    --  改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//2. 修饰全局变量 - 静态全局变量
//3. 修饰函数 - 静态函数


//1.修饰局部变量

//代码1
//#include <stdio.h>
//void test()
//{
//	int i = 0;  //局部变量i出了作用于就会销毁
//	i++;
//	printf("%d ", i);   //计算结果是10个 1
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}



//代码2
//#include <stdio.h>
//void test()
//{
//	//static修饰局部变量   
//	static int i = 0;   //static修饰局部变量i，出了作用域不会销毁
//	i++;
//	printf("%d ", i);   //计算结果是1 2 3 4 5 6 7 8 9 10
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}



//结论  static修饰局部变量改变了变量的生命周期，让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束





//2.修饰全局变量


//static修饰的全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部使用，其他源文件不能使用



//3.修饰函数

//一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用









      //指针

//内存

//内存是电脑上特别重要的存储器，计算机中所有程序的运行都是在内存中进行的 。所以为了有效的使用内存，就把内存划分成一个个小的内存单元，每个内存单元的大小是1个字节。
//为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地址

//#include <stdio.h>
//
//int main()
//{
//    int a = 10;  //a在内存中要分配4个字节的空间
//    printf("%p\n",&a); //%p专门用来打印地址的
//
//    int* pa = &a; //pa是用来存放地址的，在C语言中pa叫指针变量
//    //* 后面pa是指针变量
//    //int 说明pa指向的对象是int类型的
//
//    //如果想通过a的地址找到a，并对a进行操作，那就需要对a进行解引用操作
//
//    *pa = 20;
//
//
//    return 0;
//}




//指针变量的大小

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char*));          //4
//    printf("%d\n", sizeof(short*));         //4
//    printf("%d\n", sizeof(int*));           //4
//    printf("%d\n", sizeof(double*));        //4
//    return 0;
//}



//结论：指针大小在32位平台是4个字节，64位平台是8个字节

//那为什么指针的大小都是相同的呢？

//因为指针是用来存放地址的，指针需要多的空间，取决于地址的存储需要多大的空间
//32位      32bit    4byte
//64位      64bit    8byte







//结构体

//结构体可以让C语言创建新的类型出来

//怎么理解这段话？
//因为要描述一个人的话，不能单单的用某一种类型来描述，比如：你不能仅仅用int类型来描述一个人
//一个人的特征有许多，比如说：姓名+年龄+体重+性别......
//描述年龄需要用到字符串(char)类型   描述年龄用int类型  描述体重用float类型


//而结构体就是把这些很多类型囊括在内的一种类型，叫结构体类型

//创建一个学生的类型

#include <stdio.h>

struct Stu
{
    char  name[20];
    int age;
    double score;
};



int main()
{
    struct Stu s = { "张三",20,85.3 };  //这是利用上面创建的学生类型来创建一个实体

    //其实可以这样理解：创建的学生类型是一个框架，这个框架里面包含了学生这个类型包含了哪些东西
    //然后再利用这个框架来创建一个学生实体，就是这个学生具体叫什么名字 这个学生的的年龄是多少，成绩是多少等等

    printf("1：%s %d %lf\n",s.name,s.age,s.score);   //这里使用的是 .  操作符

    //如果我们拿到的是结构体变量本身，用 . 操作符来找到结构体成员

    struct Stu* ps = &s;
    printf("2：%s %d %lf\n",ps->name,ps->age,ps->score);

    //如果我们拿到的是结构体指针，用 -> 操作符来找到结构体成员


    return 0;
}