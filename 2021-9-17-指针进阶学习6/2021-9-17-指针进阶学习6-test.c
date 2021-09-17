#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//指针和数组笔试题解析


//sizeof(数组名)  -  数组名表示整个数组 - 计算的是整个数组的大小
//&数组名  - 数组名表示整个数组  - 取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址

/*

#include <stdio.h>

int main()
{

	//一维数组
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));
	//sizeof(a)，这里a是数组名，数组名代表整个数组 -- 计算的是整个数组的大小
	//这里a数组总共有4个元素，每个元素是整形，所以
	//4*4 = 16  单位是字节

	printf("%d\n", sizeof(a + 0));
	//这里a是数组名，但是它不是单独放在sizeof内部，它的前面也没有&符号，所以这里a表示的是首元素的地址
	//a表示首元素的地址，首元素是1，a+0还是1的地址 ，地址的大小是4/8个字节，这个因平外不同而不同（32位/64位）  --这里计算的是地址

	printf("%d\n", sizeof(*a));
	//这里a是数组名，但是它不是单独放在sizeof内部，它的前面也没有&符号，所以这里a表示的是首元素的地址
	//所以这里a表示的是1的地址，*a 即1的地址被解引用，那么就找到了1，1的类型是int sizeof(*a)计算的是第一个元素的大小  -- int类型的数据，无论是32/64计算结果都是4

	printf("%d\n", sizeof(a + 1));
	//这里a是数组名，但是它不是单独放在sizeof内部，它的前面也没有&符号，所以这里a表示的是首元素的地址
	//同理，a+1表示的是2的地址，sizeof(a+1)计算的是第二个元素的地址大小，所以计算结果是4/8   字节                --这里计算的是地址

	printf("%d\n", sizeof(a[1]));
	//这里a是数组名，但是它不是单独放在sizeof内部，它的前面也没有&符号，所以这里a表示的是首元素的地址
	//a[1]表示的是第二个元素  所以sizeof(a[1])计算的是数组中第二个元素的大小 ，计算结果是4  字节



	printf("%d\n", sizeof(&a));
	//&数组名，这里的数组名也是表示整个数组，取出的是整个数组的地址
	//&a虽然是整个数组的地址，但是也是地址，sizeof(&a)计算的是一个地址的大小 ，所以计算结果是 4/8

	printf("%d\n", sizeof(*&a));
	//&数组名，取出的是整个数组的地址，再对这个地址进行解引用，就找打了整个数组，所以计算结果是 16

	printf("%d\n", sizeof(&a + 1));
	//&a取出的是整个数组的地址，&a+1跳过整个数组，指向的是下一块地址的起始位置
	//但是其本质上还是地址，所以计算结果是 4/8

	printf("%d\n", sizeof(&a[0]));
	//a[0]表示的是数组的第一个元素，&a[0]表示的是第一个元素的地址，所以计算结果是 4/8

	printf("%d\n", sizeof(&a[0] + 1));
	//a[0]表示的是数组的第一个元素，&a[0]表示的是第一个元素的地址，&a[0]+1表示的是第二个元素的地址，所以计算结果是 4/8



	return 0;
}


*/


//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	//字符数组arr中一个6个字符，没有\0
//
//	printf("%d\n", sizeof(arr));
//	//这里计算的是数组总的大小，一个6个字符，每个字符是char类型的，所以sizeof(arr)计算结果是 6*1 = 6 字节
//
//	printf("%d\n", sizeof(arr + 0));
//	//这里arr表示的是首元素的地址，+0还是首元素的地址，地址的大小是 4/8字节
//
//	printf("%d\n", sizeof(*arr));
//	//arr表示首元素的地址，*arr，对首元素进行解引用，就找到了第一个元素，第一个元素是字符型，大小是1个字节
//
//
//	printf("%d\n", sizeof(arr[1]));
//	//arr[1]表示数组中第二个元素，元素大小是1个字节
//
//
//	printf("%d\n", sizeof(&arr));
//	//&arr,取出的是整个数组的地址，地址的大小是4/8字节
//
//
//	printf("%d\n", sizeof(&arr + 1));
//	//&arr + 1是跳过这个数组，指向下一块空间的地址，所以大小依然是4/8字节
//
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//arr[0]表示的是第一个元素，&arr[0]表示的是取出第一个元素的地址，&arr[0] + 1 是第一个元素的地址，地址的大小是4/8字节
//
//
//	printf("%d\n", strlen(arr));
//	//strlen这个函数，计算的是字符串的长度，遇到\0才停止，且\0不计算在内，但是在计算元素个数时，需要将\0计算在内
//	//比如说arr[]="hello";这个数组有6个元素，
//
//	//arr表示首元素的地址，因为arr没有单独放在sizeof内部，前面也没有&符号，所以这里arr是首元素地址
//	//strlen函数在计算字符串长度时，从给定的地址处往后找，直到\0才停止
//	//所以计算结果是随机值
//
//	printf("%d\n", strlen(arr + 0));
//	//(arr + 0还是首元素地址，所以计算结果也是随机值
//
//
//	printf("%d\n", strlen(*arr));
//	//这里是错误代码，因为strlen函数才传参时，传过去的只能是地址
//	//arr表示首元素的地址，*arr表示字符a，a的ASIIC值是97，那么，就会把97当成一个地址，往后找\0，所以这是一个错误代码
//
//
//	printf("%d\n", strlen(arr[1]));
//	//同理，arr[1]表示字符数组中字符b，b的ASIIC值是98，所以这也是一个错误代码
//
//
//	printf("%d\n", strlen(&arr));
//	//计算结果也是随机值
//
//	printf("%d\n", strlen(&arr + 1));
//	//&arr + 1 是跳过整个数组，指向下一块空间的地址，但是下一块空间具体放的什么，我们无法知道，所以计算结果是随机值
//
//	//strlen(&arr)  和 strlen(&arr + 1)取到的数之间差6，因为数组的长度是6
//
//
//	printf("%d\n", strlen(&arr[0] + 1));
//	//计算结果也是随机值，这个随机值的大小等于strlen(&arr) -1
//
//	*/
//
//
//   /*
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7
//
//	printf("%d\n", sizeof(arr + 0));//4/8
//
//	printf("%d\n", sizeof(*arr));//1
//
//	printf("%d\n", sizeof(arr[1]));//1
//
//	printf("%d\n", sizeof(&arr));//4/8
//
//	printf("%d\n", sizeof(&arr + 1));//4/8
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//
//
//
//	printf("%d\n", strlen(arr));//6
//
//	printf("%d\n", strlen(arr + 0));//6
//
//	//printf("%d\n", strlen(*arr));//error代码
//
//	//printf("%d\n", strlen(arr[1]));//error代码
//
//	printf("%d\n", strlen(&arr));//6
//
//	printf("%d\n", strlen(&arr + 1));//随机值
//
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	*/
//
//
//	char* p = "abcdef";  //这是常量字符串
//	//这段代码的含义：abcdef\0存放在数组中，这里把a的地址存放在指针变量p中，即p中存放的是a的地址
//
//	printf("%d\n", sizeof(p));//4/8       p中存放的是a的地址，p的类型是char*类型，指针大小是4/8字节  其实指针就是地址
//
//	printf("%d\n", sizeof(p + 1));//4/8
//
//	printf("%d\n", sizeof(*p));//1
//
//	printf("%d\n", sizeof(p[0]));//1   p[0] 等价于 *（p+0）
//
//	printf("%d\n", sizeof(&p));//4/8
//
//	printf("%d\n", sizeof(&p + 1));//4/8
//
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//
//
//
//	printf("%d\n", strlen(p));//6
//
//	printf("%d\n", strlen(p + 1));//5
//
//	//printf("%d\n", strlen(*p));//error
//
//	//printf("%d\n", strlen(p[0]));//error
//
//	printf("%d\n", strlen(&p));//随机值
//
//	printf("%d\n", strlen(&p + 1));//随机值
//
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	return 0;
//}





/*

#include <stdio.h>


int main()
{

	//二维数组
	int a[3][4] = { 0 };


	printf("%d\n", sizeof(a));//12 * 4 = 48

	printf("%d\n", sizeof(a[0][0]));//4

	printf("%d\n", sizeof(a[0]));//4 * 4 = 16
	//这里把a[0]理解为第一行的数组名
	//那么数组名a[0]单独放在sizeof内部，计算的是整个数组的大小


	printf("%d\n", sizeof(a[0] + 1));//4/8
	//这里a[0]没有单独放在sizeof内部，并且a[0]前面也没有&，所以这里a[0]表示的就是首元素的地址，即第一行首元素的地址
	//所以，a[0]+1 表示的是第一行第二个元素的地址，因此，地址的大小是4/8字节


	printf("%d\n", sizeof(*(a[0] + 1)));//4

	printf("%d\n", sizeof(a + 1));//4/8
	//这里a表示的是二维数组的首元素地址，即第一行的地址，a+1表示第二行的地址，地址的大小是4/8字节


	printf("%d\n", sizeof(*(a + 1)));//4*4=16

	printf("%d\n", sizeof(&a[0] + 1));//4/8

	printf("%d\n", sizeof(*(&a[0] + 1)));//4*4=16

	printf("%d\n", sizeof(*a));//4*4=16

	printf("%d\n", sizeof(a[3]));//16
	//这里其实是能算出来a[3]的值，因为a[3]是一个表达式，它有两个属性，一个是值属性，另一个是类型属性
	//这里用到的就是类型属性，我们可以推测出a[3]的类型是一个int[4],所以大小是16

	//a[3]其实是第四行的数组名（如果存在），所以其实不存在，也能通过类型计算大小



	return 0;
}

*/




//指针笔试题

//试题1

/*
#include<stdio.h>

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}
//程序的结果是什么？   2   5

*/



//试题2

/*

#include <stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知结构体类型的变量大小是20字节

int main()
{
	printf("%p\n", p + 0x1);                       // 0x100014
	//这里p是一个指针，指向结构体，0x1就是1
	//所以 p + 0x1 就是向后跳动一个结构体，结构体大小是20个字节，所以p + 0x1 = 0x1000014
	//指针+1跳过多少，取决于指针的类型，这里指针p的类型是结构体类型，大小是20个字节


	printf("%p\n", (unsigned long)p + 0x1);       //0x100001
	//这里p被强制转换成 无符号的长整型，整型+1,实际上加的就是1

	printf("%p\n", (unsigned int*)p + 0x1);       //
	//这里p被强制转换成 unsigned int* 类型，那么这个指针p被强制转换成指向unsigned int类型的指针
	//无符号的整形指针+1 ，跳过一个整形，所以计算结果是0x100004


	return 0;
}

*/



//试题3

#include <stdio.h>

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	//&a表示的是取出整个数组的地址，&a+1表示跳过整个数组，即指向4后面的那个位置，然后再把这个地址强制转换成整形指针，并且存放在ptr1中
	//所以，ptr1指向的是4后面的那个位置

	int* ptr2 = (int*)((int)a + 1);
	//


	printf("%x,%x", ptr1[-1], *ptr2);   //4   
	return 0;
}
