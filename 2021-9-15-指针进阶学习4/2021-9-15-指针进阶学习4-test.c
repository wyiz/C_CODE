#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//解释下面代码的含义


//代码1

//(*(void (*)())0)();

//  这里 0 是一个数字，只要能把它强制转换成一种函数指针类型，那么0就会被看成一个函数的地址

//(void (*)()  这说明这是一个函数指针类型，即把0强制转换成一个函数指针类型   如果(void (*p)()  这段代码中，p是函数指针变量，
//那么 0 就被当成 (void (*)() 这个函数的的函数指针类型的地址了

//既然 0 地址处放了这个类型的函数，那么就可以调用这个函数  0 地址处的函数，返回类型是void ，  
//(*(void (*)())0)()；  (*(void (*)())0)   在这个地址前面加一个 * ，进行解引用操作，然后括起来，解引用操作说明找到了0地址处的函数，但是0地址处的函数是无参的（void），
//调用的时候(*(void (*)())0)()  在后面加了一个括号，然后什么都不需要传（因为0地址处的函数的返回类型是void）


//总结：上面代码的含义是：调用0地址处的函数，该函数无参，且返回类型是void

//对上述代码解读的步骤：

//1.void (*)() - 这是函数指针类型
//2.(void (*)())0 - 对0进行强制类型转换，转换为一个函数的地址
//3.*(void (*)())0 - 对0地址进行了解引用操作
//4.(*(void (*)())0)() - 调用0地址出的函数




//代码2

//void (*signal(int, void(*)(int)))(int);

//signal 是函数名，signal(int, void(*)(int)) 括号内是signal函数的两个参数，第一个参数是int类型，第二个参数的类型是函数指针类型
//signal这个函数的返回类型也是一个函数指针类型      --一个函数返回类型的判断方法是，去掉这个函数的函数名之外，剩下的部分就是函数的返回类型

//1.signal 和 () 现结合，说明signal是函数名
//2.signal函数的第一个参数的类型是int，第二个参数的类型是函数指针  -- 该函数指针，指向一个参数为int，返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针类型  -- 该函数指针也是一个指向一个参数为int，返回类型是void的函数

//所以，signal是一个函数的声明

//如果想要对上面代码而进行修改，让读者更容易理解代码，可以做如下操作：

//typedef void(* pfun_t)(int);

//pfun_t signal(int , pfun_t);

//上面两行代码的意思跟代码2是完全等价的




//函数指针数组

//数组是一个存放相同类型数据的存储空间，那我们已经学习了指针数组

//int *arr[10];
//数组的每个元素是int*

//那要把函数的地址存到一个数组中，那这个数组就叫函数指针数组

//函数指针数组的定义：

//int (*parr1[10]])();

//parr1 先和 [] 结合，说明parr1是数组，数组的内容是什么呢？ 是 int (*)() 类型的函数指针


//函数指针数组的用途：转移表

//使用函数指针数组解决问题的例子

//例子：（计算器）

//这是使用switch的方式写出的代码

/*

#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}


int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	do
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

*/


//使用函数指针数组的方式对上述代码进行修改完善


/*
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
	while (input)
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("输入有误\n");
		printf("ret = %d\n", ret);
	}
	return 0;
}

*/





//指向函数指针数组的指针
//指向函数指针数组的指针是一个指针     指针指向一个数组 ，数组的元素都是 函数指针类型



//这里强调一个概念

//  int arr[10];

// 数组元素类型  -- int          元素的类型是去掉数组名和元素个数，剩下的部分
//arr数组的类型是 -- int [10]    数组类型是去掉数组名，剩下的部分







//回调函数

//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应