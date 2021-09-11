#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//模拟实现库函数：strcpy

//这是库函数的方法

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = "xxxxxxxxxxxx";
	char arr2[] = "hello";

	//把arr2拷贝到arr1当中

	strcpy(arr1,arr2); //第一个参数是目标空间的起始地址  第二个参数是源空间的起始地址
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr1));

	//这个的拷贝过程是，把arr2当中的 \0 也拷贝过去  此时，arr1的字符长度是5  就是hello的长度


	return 0;
}

*/


//模拟实现库函数strcpy



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
//	*dest = *src; //这是 \0的拷贝
//	
//	*/
//
//	//1.可以将上述代码进行优化
//
//	//如果arr2是一个空指针的话，则代码会异常，所以要进行优化
//
//	assert(src != NULL);//断言
//
//	while (*dest = *src)   //这样既完成了赋值，也完成了拷贝
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
//	//把arr2拷贝到arr1当中
//
//	my_strcpy(arr1, arr2); //第一个参数是目标空间的起始地址  第二个参数是源空间的起始地址
//	printf("%s\n", arr1);
//		
//
//
//	return 0;
//}





//const 修饰指针变量时，const如果放在 * 的左边，修饰的是 *p，表示指针指向的内容（即指针指向的对象的内容）是不能通过指针来改变的，但是，指针变量本身是可以修改的，即指针指向的对象可以修改

//例子：

/*

int num = 100;
int n = 10;
const int* p = &num;
*p = 20;             //这样是错误的，因为const修饰的是 *p ，p的内容是不允许被修改的

p = &n;              //这样是可以的，因为const修饰的是 *p ，p的内容不允许被修改，但是p所指向的对象可以修改

*/


//const 修饰指针变量时，const如果放在 * 的右边，修饰的是指针变量 p ，表示指针变量所指向的对象不能被改变，但是，p所指向的对象的内容可以被改变





//模拟实现strlen函数，求字符串长度

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





