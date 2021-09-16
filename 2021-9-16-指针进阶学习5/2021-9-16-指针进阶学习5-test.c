#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//qsort   函数

//void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));

//从上面可以看出，qsort函数的参数部分有4个

//其中：base表示：待排序数据中第一个对象的地址
//num表示：待排序数据中的元素个数
//size表示：待排序数据中的一个元素的大小，单位是字节
//int (*compar)(const void*, const void*)，是一个函数指针 ，这个参数是用来比较待排序数据中的2个元素的函数
                                         //可以看到返回值是一个整形，如果返回值大于0，表示第一个元素大于第二个元素，
                                        //如果返回值等于0，表示第一个元素等于第二个元素
                                        //如果返回值小于0，表示第一个元素小于第二个元素



//这里是使用qsort函数排序整型数组

/*
#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
    //我们这里比较的是两个整形，所以这里 e1 e2 指向的是整形
    //那我们这样想，如果是整形，那直接解引用不就找到了e1 e2 所指向的整形了么
    //但是，我们看到e1 e2 的类型是void*  不能直接进行解引用
    //既然e1 e2的类型是指针类型，那么里面存放的是地址，所以可以先将e1 e2强制类型转换成int*的类型，再进行解引用，这样就可以找到e1 e2所指向的内容了

    return *(int*)e1 - *(int*)e2;

    //如果想实现降序的排序，那么只需要将e1 和 e2 交换一下位置即可，如果e1大于e2返回的是大于0的数字
    //所以将逻辑反一下，即可实现降序排列

}


int main()
{
    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    qsort(arr,sz,sizeof(arr[0]), cmp_int);

    int i = 0;
    for (i = 0;i < sz; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}

*/


//利用qsort函数排序结构体类型的数据


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//struct Stu
//{
//    char name[20];
//
//    int age;
//
//};
//
//
////这是利用年龄来排序的函数
///*
//int sort_age(const void* e1, const void* e2)
//{
//    //我们这里比较的是两个整形，所以这里 e1 e2 指向的是整形
//    //那我们这样想，如果是整形，那直接解引用不就找到了e1 e2 所指向的整形了么
//    //但是，我们看到e1 e2 的类型是void*  不能直接进行解引用
//    //既然e1 e2的类型是指针类型，那么里面存放的是地址，所以可以先将e1 e2强制类型转换成int*的类型，再进行解引用，这样就可以找到e1 e2所指向的内容了
//
//   return  ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//
//
//  
//
//}
//
//*/
//
//
////这是利用姓名来排序的函数
//
//
//int sort_name(const void* e1, const void* e2)
//{
//    //利用年龄进行排序时，排序的是字符串，排序字符串的方法是利用库函数strcmp函数  ，这个函数中间用的是 ，
//    //strcmp函数的返回值如果是大于0，则表示第一个字符串大于第二个字符串
//    //如果返回值等于0，则表示第一个字符串等于第二个字符串
//    //如果返回值小于0，则表示第一个字符串小于第二个字符串
//
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//
//    //strcmp函数比较字符串时比较对应字符串上ASIC值
//
//    //abcq
//    //acd
//
//}
//
//
//int main()
//{
//    struct Stu s[] = { {"张三", 20},{"张啊",30},{"张五",45} };
//    int sz = sizeof(s) / sizeof(s[0]);
//
//
//    //如要要对结构体进行排序时，需要定一个基准，比如说是按年龄排序还是按姓名排序等等
//   
//    //假设现在利用年龄排序
//    //qsort(s, sz, sizeof(s[0]), sort_age);
//
//    //假设现在利用姓名来排序
//    qsort(s, sz, sizeof(s[0]), sort_name);
//
//
//
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s %d", s[i].name,s[i].age);
//        printf("\n");
//
//    }
//
//    printf("\n");
//
//    return 0;
//}




//通过上面的例子，我们熟悉了qsort函数的使用方法，那么，我们就模拟实现qsort函数
//模仿qsort实现一个冒泡排序的通用算法



/*
#include<stdio.h>


void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }


}

void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1, const void* e2))
{

    //在这里实现冒泡排序

    int i = 0;
    //这个for循环是进行多少趟冒泡排序
    for (i = 0; i < sz-1; i++)
    {

        //这个for循环是一趟冒泡排序需要多少个元素进行排序
        int j = 0;
        
        for (j = 0; j < sz-1-i;j++)
        {
            //两个元素比较
            //因为不知道要比较的对象是什么类型，那么就需要调用这个函数的程序员自己写这个比较函数

            if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
            {

                //在这里进行元素的交换
                Swap((char*)base + j * width, (char*)base + (j + 1) * width,width); 
                //这里只给起始地址还不够，因为我们不知道要交换的元素是什么类型，所以再给一个宽度，那么就可以把这么长宽度个字节的元素，进行一对字节一对字节的交换

            }



        }
    }


}




int cmp_int(const void* e1, const void* e2)
{
    //我们这里比较的是两个整形，所以这里 e1 e2 指向的是整形
    //那我们这样想，如果是整形，那直接解引用不就找到了e1 e2 所指向的整形了么
    //但是，我们看到e1 e2 的类型是void*  不能直接进行解引用
    //既然e1 e2的类型是指针类型，那么里面存放的是地址，所以可以先将e1 e2强制类型转换成int*的类型，再进行解引用，这样就可以找到e1 e2所指向的内容了

    return *(int*)e1 - *(int*)e2;

    //如果想实现降序的排序，那么只需要将e1 和 e2 交换一下位置即可，如果e1大于e2返回的是大于0的数字
    //所以将逻辑反一下，即可实现降序排列

}





int main()
{

    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}



*/



