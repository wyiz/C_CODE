#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



         //�Զ������ͣ��ṹ�壬ö�٣�����

//1.�ṹ�壺�ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//�ṹ������
/*

struct Stu
{
    char name[20];//����
    int age;//����
    char sex[5];//�Ա�
    char id[20];//ѧ��
}��//�ֺŲ��ܶ�


*/



//���������   �������ṹ��ʱ�򣬿��Բ���ȫ������

//�����ṹ������
//struct
//{
//    int a;
//    char b;
//    float c;
//}x;
//struct
//{
//    int a;
//    char b;
//    float c;
//}a[20], * p;



//�ṹ��������       �ڽṹ�а���һ������Ϊ�ýṹ����ĳ�Ա�Ƿ�����أ�

//��ȷ�������÷�ʽ��
/*
struct Node
{
    int data;
    struct Node* next;
};

*/


//�ṹ������Ķ���ͳ�ʼ��

/*
struct Point
{
    int x;
    int y;
}p1; //�������͵�ͬʱ�������p1

struct Point p2; //����ṹ�����p2

//��ʼ�������������ͬʱ����ֵ��

struct Point p3 = { x, y };


struct Stu //��������
{
    char name[15];//����
    int age; //����
};

struct Stu s = { "zhangsan", 20 };//��ʼ��

struct Node
{
    int data;
    struct Point p;
    struct Node* next;
}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��

struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��

*/



//�ṹ���ڴ����

//����ṹ��Ĵ�С

#include <stdio.h>

struct S
{
    int i;
    char c;
};


int main()
{
    struct S s = { 0 };

    printf("%d ",sizeof(s));


    return 0;
}
