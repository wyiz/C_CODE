#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



               //函数递归

//什么是递归

//程序调用自身的编程技巧称为递归（即函数自己调用自己

// 递归的主要思考方式在于：把大事化小

//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2.每次递归调用之后越来越接近这个限制条件


//练习1：接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4

/*
#include <stdio.h>

void print(unsigned int n)
{
    //算法的思想：
    //我们想要打印1234的每一位，我们可以这样思考，即先打印123的每一位，再打印4
                                             //然后打印12的每一位，再打印3 4
                                             //最后打印1的每一位，再打印 2 3 4
    //如果这数大于9（即这个数是两位数及以上），就就需要把这个数按照上面的思想进行求解
    //如果这个数小于10（这个数是一位数），那就可以直接在屏幕上打印

    if (n > 9)
    {
        print(n / 10);//假设输入的是1234 那么n/10就得到123  这样 print(n / 10)就会打印123的每一位
    }
    printf("%u ",n % 10);//n%10就打印这个数的余数 
}


int main()
{
    unsigned int num = 0;
    scanf("%u",&num);//假设输入的是1234

    //采用递归的方式解决上述要求

    //封装一个函数，用这个函数来打印参数部分的每一位
    print(num);


    return 0;
}


*/



//练习2：编写函数不允许创建临时变量，求字符串的长度


//根据之前的知识，我们知道，求字符串长度会使用库函数strlen

/*

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "hello";

    int len = strlen(arr);
    printf("%d \n",len);

    return 0;
}

*/

//如果要实现上述的要求，在不创建临时变量的情况下求字符串的长度，就是模拟实现strlen函数


//下面这组代码是没有按照要求来写的，因为在My_strlen函数中创建了临时变量count，所以不满足要求

/*

#include <stdio.h>

int My_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;

}



int main()
{
    char arr[] = "hello";

     My_strlen(arr);

    printf("%d \n", My_strlen(arr));

    return 0;
}

*/


//用递归的方式模拟实现strlen函数（求字符串长度的方法）

/*

#include <stdio.h>

int My_strlen(char* str)
{
    if (*str != '\0')
    {
        return 1 + My_strlen(str + 1);

    }
    else
    {
        return 0;
    }
}



int main()
{
    char arr[] = "hello";

    My_strlen(arr);

    printf("%d \n", My_strlen(arr));

    return 0;
}


*/





//练习3：求第n个斐波那契数(不考虑溢出)


//斐波那契数列：1 1 2 3 5 8 13 21 34 55  ......

//使能递归的方式实现：

/*
#include <stdio.h>

int Fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);

}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}

*/

//上述代码存在一个问题：那就是计算效率太低
//比如计算第50个菲波那切数列

//                       50
              //49             48
        //48        47       47       46
   //47      46  46    45 46   45  45   44


//这样的话就会有大量重复的计算，导致计算效率太慢

//上述代码求解的思路是从后往前计算的，即要想求第50个菲波那切数列，那就需要知道第49和第48，要想计算第49个必须先计算第48和第47个。以此类推


//为了解决上述的问题，我们可以从前往后计算,即采用循环的方式进行就算，这样就会大大的提升计算效率



#include <stdio.h>

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;

    }

    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}



