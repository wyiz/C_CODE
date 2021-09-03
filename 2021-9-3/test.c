#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//一、初始C语言


//1.第一个C语言程序员

//#include <stdio.h>
//
//int main()
//{
//	printf("hello world!\n");
//
//	return 0;
//}




//2.数据类型

//char //字符数据类型
//short //短整型
//int //整形
//long //长整型
//long long //更长的整形
//float //单精度浮点数
//double //双精度浮点数
//C语言有没有字符串类型？    --没有  字符串类型的数据一般都是放在数组当中   C++中有专门的类型




//下面计算一下每种数据类型所占空间的大小(单位是字节)

//sizeof -关键字 --用来计算类型或者变量所占空间的大小


//int main()
//{
//	printf("%d\n",sizeof(char));       //1
//	printf("%d\n", sizeof(short));     //2
//	printf("%d\n", sizeof(int));       //4
//	printf("%d\n", sizeof(long));      //4
//	printf("%d\n", sizeof(long long)); //8
//	printf("%d\n", sizeof(float));     //4
//	printf("%d\n", sizeof(double));    //8
//
//	//C语言标准中：int <=long
//	 
//	//上述计算结果是在32位平台上
//	//64位平台计算结果跟上面是一致的
//
//
//	return 0;
//}



//3.变量和常量

//生活中的有些值是不变的（比如：圆周率，性别（？），身份证号码，血型等等）,有些值是可变的（比如：年龄，体重，薪资）。

//不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。

//int main()
//{
//	int age = 25;
//
//	double weight = 81.6;
//
//	age++;
//
//	return 0;
//}


//变量的分类
//局部变量     --定义在{}内的变量
//全局变量     --定义在{}外的变量

//区分上述两种变量的方法，就是看变量在不在{}内

//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);   //2020
//
//	//当局部变量和全局变量名字冲突的情况下，局部变量优先
//
//	return 0;
//}


//求2个数的和

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d",&a,&b);
//
//	sum = a + b;
//
//	printf("sum = %d\n",sum);
//
//
//	return 0;
//}


//常量

//C语言中的常量分为以下以下几种：
//1.字面常量
//2.const 修饰的常变量
//3.#define 定义的标识符常量
//4.枚举常量


#include <stdio.h>
//举例
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//括号中的MALE,FEMALE,SECRET是枚举常量
int main()
{
	3.14;//字面常量
	1000;//字面常量
	const float pai = 3.14f; //const 修饰的常量
	//pai = 5.14;//ok?  不行
#define MAX 100 //#define的标识符常量
	return 0;
}

