#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//一级指针传参

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
	//一级指针p，传给函数
	print(p, sz);
	return 0;
}

*/



//二级指针

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





//函数指针

 //指向函数的指针  -- 存放函数地址的指针

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
	
	int (*parr)[10] = &arr;//取出数组的地址   所以是数组指针
	//parr指向数组的指针 -- 用来存放的是数组的地址


	//函数指针  -- 存放函数地址的指针

	//&函数名  -- 取到的是函数的地址   其中  函数名 == &函数名  ，这两种写法都能取出函数的地址

	printf("%p \n",&add);
	printf("%p \n", add);

	int (*pf)(int, int) = &add;  //这里pf就是函数指针边，后面的（）里面需要填入函数参数的类型

	//当pf里面存放了函数add的地址之后，怎么通过地址调用函数呢？

	int ret = (*pf)(3, 5);                  //*pf是对pf进行解引用，就找到了那个函数，找到函数之后就要调用函数，并对函数进行传参

	int ret2 = pf(3, 5);                    //上面这两种写法是一样的，上面的*其实没有作用，就是便于理解的

	return 0;
}

*/



//解读下面的代码

//  (*(void (*)())0)();
