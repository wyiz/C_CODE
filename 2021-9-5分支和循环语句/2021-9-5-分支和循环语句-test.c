#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


              //分支和循环语句学习

//C语言是一门结构化的程序设计语言！

//顺序结构      选择结构      循环结构


//分支语句:
    //if
    //switch


//循环语句：
     //while
     //for
     //do    while




//1.if语句

//只有当表达式的结果为真时，才继续执行后面的语句，否则不执行

//C语言中：0表示假   非0表示真   例如：-1  也表示真

//语法结构：
//if (表达式)
//     语句;

//if (表达式)
//     语句1;
//else
//     语句2;


//多分支
//if (表达式1)
//      语句1;
//else if (表达式2)
//      语句2;
//else
//      语句3;



//#include <stdio.h>
//int main()
//{
//    int age = 20;
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//    else
//    {
//        printf("成年\n");
//    }
//}




//如果条件成立，要执行多条语句，应该使用代码块

//int main()
//{
//    if (表达式)
//    {
//        语句列表1；
//    }
//    else
//    {
//        语句列表2；
//    }
//    return 0;
//}



//练习1：判断一个数是否为奇数

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d",&a);
//    if (a%2==0)
//    {
//        printf("该数是偶数\n");
//    }
//    else
//    {
//        printf("该数是奇数\n");
//    }
//
//    return 0;
//}


//练习2：输出1-100之间的奇数

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i=1; i<=100; i++)
//    {
//        if (i%2 != 0)
//        {
//            printf("%d ",i);
//        }
//
//    }
//
//    return 0;
//}







//2.switch语句

/*switch (整型表达式)
{
    case 整形常量表达式:
            语句;
            break;
}
*/

//在switch语句中，我们没法直接实现分支，搭配break使用才能实现真正的分支

//例如：输入几就显示星期几

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d",&day);
//    switch (day)
//    {
//    case 1:
//            printf("星期一\n");
//            break;
//    case 2:
//            printf("星期二\n");
//            break;
//    case 3:
//            printf("星期三\n");
//            break;
//    case 4:
//            printf("星期四\n");
//            break;
//     case 5:
//            printf("星期五\n");
//            break;
//    case 6:
//            printf("星期六\n");
//            break;
//    case 7:
//            printf("星期天\n");
//            break;
//    }
//    return 0;
//}



//需求修改为如下方式：
//1. 输入1 - 5输出的是“weekday”;
//2. 输入6 - 7输出“weekend”

//#include <stdio.h>
//
//int main()
//{
//    int day = 0;
//    scanf("%d",&day);
//
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("weakday\n");
//        break;
//    case 6:
//    case 7:
//        printf("weekend\n");
//        break;
//
//    default:
//        printf("输入错误\n");
//        break;
//    }
//
//    return 0;
//}



//练习：判断下列代码：m= ?  n= ?

//#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;   //注意：这个break是跳出case3中的switch语句，跳出去之后进入case4
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);    //5  3
//    return 0;
//}







//3.循环语句

     //while
     //for
     //do    while



//3.1 while 循环

//while 语法结构
       //while (表达式)
            //循环语句；

//例如：在屏幕上打印1-10的数字

//#include <stdio.h>

//int main()
//{
//    int i = 1;
//
//    while(i <= 100)
//    {
//        printf("%d ", i);
//            i++;
//    }
//
//    return 0;
//}




//while语句中的break和continue

// break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。 所以：while中的break是用于永久终止循环的

//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断



//练习

//解释下面代码的意思：

//代码1
/*
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
*/

//分析：从键盘上输入一个字符，并在屏幕上进行打印  遇到Ctrl+z就会推出循环



//代码2

/*
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
            continue;
        putchar(ch);
    }
    return 0;
}

*/


//分析：上述这段代码只会打印字符0-9之间的数




//上面可以看到一个新的输入函数：getchar 这个函数与scanf函数类似

//下面举例说明getchar函数的使用场景

//getchar是从键盘上获取字符

//scanf 函数是输入函数，遇到空格就会停止输入，即获取空格前面的字符或者信息

//scanf 和 getchar 是输入函数，它们不是直接从键盘上拿到数据，而是从输入缓冲区里面拿数据
//如果缓冲区里面没有数据，那么就会等待，等待从键盘上输入数据到缓冲区，如果scanf 、getchar发现缓冲区里面有东西，那么就会拿走


//例如下面的代码：1.程序进行到scanf函数时，发现输入缓冲区里面没有东西，那么就会等待键盘上输入密码
//当键盘上输入123456\n（字符串会在末尾加上\n）   回车会触发scanf去读取缓冲区里面的内容   scanf只会拿走123456 拿到之后，会把数据放到数组password里面去

//2.当程序运行到printf("请确认密码（Y/N）>:")时，屏幕上会弹出请确认密码

//3.当程序运行到int ch = getchar();时 ，getchar函数回到缓冲区里面看是否有东西，一看，还剩下\n在里面，那么就会把\n拿走放到ch里面，

//4.那么程序继续运行时，就直接进入else语句中，因为ch里面的内容是 \n 屏幕上会出现确认失败，

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("请输入密码>:");//假设密码是：123456

    scanf("%s", password);
    printf("请确认密码（Y/N）>:");

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功！\n");
    }
    else
    {
        printf("确认失败！\n");
    }



    return 0;
}
*/



//为了解决上述输入123456之后，屏幕会直接输出确认失败的问题，需要对代码进行修改

//问题的本质是缓冲区里面有一个\n，所以才会造成上述的问题，如果要解决问题，那么就需要把缓冲区里面的内容进行清空

//通过getchar的功能我们知道，getchar可以把缓冲区里面的东西拿走，那么在int ch = getchar();前面加上一个getchar就可以吧缓冲区里面的\n拿走，就把问题解决了

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("请输入密码>:");//假设密码是：123456

    scanf("%s", password);
    printf("请确认密码（Y/N）>:");

    getchar(); //这里getchar的功能就是清理缓冲区

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功！\n");
    }
    else
    {
        printf("确认失败！\n");
    }



    return 0;
}
*/


//但是上述直接加一个getchar的方式还存在一个问题，就是如果我们的密码是123456 abcdef那么屏幕上依旧会直接出现确认失败
//出现问题的原因是：如果我们输入的密码是123456 abcdef时，缓冲区的内容是123456 abcdef\n
//scanf函数会从缓冲区拿走123456，因为scanf函数遇到空格就会停止，只会拿空格之前的内容
//那么缓冲区里面剩余的内容是： abcdef\n
//如果用一个getchar来清理缓冲区的内容显然是不够的，因为缓冲区里面有很多个字符
//所以，要想彻底解决这个问题，就需要用一个循环

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("请输入密码>:");//假设密码是：123456 abcdef

    scanf("%s", password);
    printf("请确认密码（Y/N）>:");

    //这个while循环可以把缓冲区里面的全部内容都清理
    //因为getchar是一个一个字符拿的，当getchar拿到f时，把拿到的内容赋值给tmp，判断tmp不是\n进入到循环体里面
    //此时，getchar会自动往后读取，这个读取的过程是在循环体里面进行的，往后读取到\n时，再判断tmp，发现tmp==\n  那么就会跳出循环，但是此时getchar已经把\n读取走，所以缓冲区里面什么都没了

    int tmp = 0;
    while ((tmp = getchar()) != '\n')  //这里注意tmp = getchar()   这里是赋值 =   而不是判断，不要错写成==
    {
        ;
    }

    //所以利用上述的循环可以清理缓冲区里面的内容

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功！\n");
    }
    else
    {
        printf("确认失败！\n");
    }



    return 0;
}

*/




//for循环

//for(表达式1；表达式2；表达式3)
              //循环语句；

//表达式1 表达式1为初始化部分，用于初始化循环变量的。 
//表达式2 表达式2为条件判断部分，用于判断循环时候终止。 
//表达式3 表达式3为调整部分，用于循环条件的调整


//练习：打印1-100之间的数

/*
#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

*/



//for语句的循环控制变量
//一些建议：
//1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法








//do  while 循环

//do
//   循环语句；
//while (表达式);        注意这个分号



//练习题：

//1.计算n的阶乘

/*
#include<stdio.h>

int main()
{
    int i = 1;
    int n = 1;
    int ret = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }

    printf("%d\n", ret);
    
    return 0;
}*/






//2.计算 1!+2!+3!+...+10!

//熟练掌握阶乘的求解思想
//熟练掌握多个阶乘相加的思想


//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//
//    //这一段代码效率比较低
//
//   /* for (n=1; n<=4; n++)
//    {
//        ret = 1;
//        for (i = 1; i <= n; i++)
//        {
//            ret *= i;
//
//        }
//        sum += ret;
//    }*/
//
//
//    //建议使用以下的代码
//
//    //1!=1*1
//    //2!=1!*2
//    //3!=2!*3
//
//    for (n=1; n<=3; n++)
//    {
//
//        ret *= n;
//        sum += ret;
//    }
//
//    
//    printf("%d\n",sum);
//
//    return 0;
//}




//3.在一个有序数组中查找某个数字n

//使用二分查找

//熟练掌握二分查找的思想

/*

#include<stdio.h>

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 3;
    int left = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int right = len - 1;

    while (left<=right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] < n)     //arr[mid] 的意思是找到下标为mid的元素
        {
            left = mid + 1;
        }
        else if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了,下标是 %d\n", mid);
            break;
        }

    }
    if (left>right)
    {
        printf("找不到\n");
    }
     
    return 0;
}*/



//4.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char password[20] = { 0 };
    

    for ( i = 0; i < 3; i++)
    {
        printf("请输入密码>:");
        scanf("%s", password);
        if (strcmp(password,"123456") == 0)  //strcmp是字符串比较函数 ，如果相等，则返回0
        {
            printf("登录成功！\n");
            break;
        }
        else
        {
            printf("密码输入错误，请重新输入");
        }
    }

    if (i == 3)
    {
        printf("密码连续3次输入错误，退出登录\n");
    }

    return 0;
}
*/

