#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//针的概念：
//   1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//   2. 指针的大小是固定的4 / 8个字节（32位平台 / 64位平台）。
//   3. 指针是有类型，指针的类型决定了指针的 + -整数的步长，指针解引用操作的时候的权限。
//   4. 指针的运算



//字符指针

//在指针的类型中我们知道有一种指针类型为字符指针 char* 

/*
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'w';
	return 0;
}

*/



//还有一种使用方式如下：

/*

int main()
{
	char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？  其实不是的，是把字符串的首地址即h的地址幅值给了pstr
	printf("%s\n", pstr);
	return 0;
}

*/


//本质是把字符串 hello bit. 首字符的地址放到了pstr中

/*

#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";    //这里"hello bit."是常量字符串，里面的内容是不允许修改的
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





//指针数组
/*

	int* arr1[10]; //整形指针的数组    用来存放整型指针的数组   ，数组数组arr1中有10个元素，每个元素的类型是int*
	char *arr2[4]; //一级字符指针的数组
	char **arr3[5];//二级字符指针的数组

*/



//数组指针    本质上时一个指针


