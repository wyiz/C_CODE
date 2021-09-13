#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//数组指针    --其本质上是指针


/*

int main()
{
	int a = 10;
	int* pa = &a;  //pa是整形指针

	char ch = 'w';
	char* ps = &ch; //pc是字符指针

	int arr[10] = { 1,2,3,4,5 };

	int* parr1[10] = &arr; //parr1是指针数组  parr首先与[]结合，说明它是一个数组，再与*结合，说明它是一个数组指针

	int(*parr2)[10] = &arr; //parr2是指针数组  parr首先与*结合，说明它是个指针，再与[]结合，说明它是一个指针数组  --其中存放的就是数组的地址

	//上面prr2的类型是int(*)[10]




	return 0;
}


*/


//注意点：

//   arr  和  &arr  是不相同的
//




//数组指针的使用
//既然数组指针指向的是数组，那数组指针中存放的应该是数组的地址


/*

#include <stdio.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//print_arr1(arr, 3, 5);
	
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收

	print_arr2(arr, 3, 5);

	return 0;
}

*/





/*

		int arr[5];                  //整形数组，数组有5个元素，每个元素的类型是int
		int *parr1[10];              //指针数组，数组有10个元素，每个元素的类型是int*
		int (*parr2)[10];            //数组指针，该指针指向一个数组，数组有10个元素，每个元素的类型是int
		int (*parr3[10])[5];         //parr3是一个存放数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型


*/





//数组参数、指针参数

//在写代码的时候难免要把【数组】或者【指针】传给函数，那函数的参数该如何设计呢？

//1.一维数组传参

/*

#include <stdio.h>
void test(int arr[])//ok?       --ok
{}
void test(int arr[10])//ok?     --ok  
{}
void test(int* arr)//ok?        --ok
{}
void test2(int* arr[20])//ok?   --ok
{}
void test2(int** arr)//ok?      --ok     //arr2是首元素的地址，这个数组有20个元素，每个元素的类型是int*  ，即arr2是第一个元素的地址
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
}

*/



//2.二维数组传参

/*
void test(int arr[3][5])//ok？        --ok
{}
void test(int arr[][])//ok？          --NO    第二个[]必须填上5  行可以省略，但是列不能省略
{}
void test(int arr[][5])//ok？
{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。

void test(int* arr)//ok？            --NO   因为arr是二维数组的数组名，表示的是二维数组的首元素，也即是第一行的地址，第一行是5个整形的数组，数组的地址不能拿一级指针来接收，应该拿二级指针来接收
                                            //因为第一行是5个整形的数组，其中数组名arr是首元素的地址，即，arr是一个地址，接收地址的地址，应该拿一个二级指针才行
{}
void test(int* arr[5])//ok？         --NO   int* arr[5]本质上时一个数组，但是接收数组的地址，必须是一个指针才行，
{}
void test(int(*arr)[5])//ok？        --ok
{}
void test(int** arr)//ok？           --NO
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);

	return 0;
}

*/