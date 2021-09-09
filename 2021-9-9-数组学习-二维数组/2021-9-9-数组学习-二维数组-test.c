#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



               //二维数组的创建和初始化

//二维数组的创建
//数组创建

//int arr[3][4];
//char arr[3][5];
//double arr[2][4];


//二维数组的初始化     初始化的意思就是在创建的同时，进行赋值

//数组初始化
/*
int arr[3][4] = { 1,2,3,4 };       //在内存中，1 2 3 4 是放在了第一行  其他行是0 0 0 0    当给的元素不够把数组填满的时，称为不完全初始化 --后面补0   如果是字符数组，则补的是\0
int arr[3][4] = { {1,2},{4,5} };   //第一行初始化为1 2 0 0 第二行初始化为 4 5 0 0 其他行为 0 0 0 0
int arr[][4] = { {2,3},{4,5} };    //这个数组只有两行，四列    

*/

//二维数组的行可以省略  ，列不可以省略



//二维数组的使用

//二维数组的使用，依然是通过下标来访问  第一行的行号是0   第二行的行号是 1 ... 列号也是从0开始的

/*
#include <stdio.h>

int main()
{
    int arr[][4] = { {1,2},{3,4},{5,6} };
    int i = 0;
    int j = 0;
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4;j++)
        {
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}

*/


//二维数组在内存中的存储

/*
#include <stdio.h>
int main()
{
    int arr[3][4];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}

*/


//从上面的打印结果来看，我们可以看出
//二维数组在内存中是连续存放的，一行内部连续，跨行也是连续存放的





//数组作为函数参数

//冒泡排序函数的设计

/*
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
    //确定趟数
    int i = 0;
    int j = 0;
    for ( i = 0; i < sz - 1; i++)
    {
        //一趟冒泡排序进行多少对数字的排序
        for (j = 0; j < sz - 1 - i;j++)
        {
            //判断相邻两个元素的大小
            if (arr[j] > arr[j + 1])
            {
                //进行交换
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }

    }


}


int main()
{
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//要对这个数组进行升序排列
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    //写一个函数进行数组的排序 --冒泡排序
    bubble_sort(arr,sz);

    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);

    }

    return 0;
}

*/




//数组名是什么？

//数组名是数组首元素的地址   但是，有两个例外

//1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
//2. & 数组名，取出的是数组的地址。 & 数组名，数组名表示整个数组

 