#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


              //��֧��ѭ�����ѧϰ

//C������һ�Žṹ���ĳ���������ԣ�

//˳��ṹ      ѡ��ṹ      ѭ���ṹ


//��֧���:
    //if
    //switch


//ѭ����䣺
     //while
     //for
     //do    while




//1.if���

//ֻ�е����ʽ�Ľ��Ϊ��ʱ���ż���ִ�к������䣬����ִ��

//C�����У�0��ʾ��   ��0��ʾ��   ���磺-1  Ҳ��ʾ��

//�﷨�ṹ��
//if (���ʽ)
//     ���;

//if (���ʽ)
//     ���1;
//else
//     ���2;


//���֧
//if (���ʽ1)
//      ���1;
//else if (���ʽ2)
//      ���2;
//else
//      ���3;



//#include <stdio.h>
//int main()
//{
//    int age = 20;
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//    else
//    {
//        printf("����\n");
//    }
//}




//�������������Ҫִ�ж�����䣬Ӧ��ʹ�ô����

//int main()
//{
//    if (���ʽ)
//    {
//        ����б�1��
//    }
//    else
//    {
//        ����б�2��
//    }
//    return 0;
//}



//��ϰ1���ж�һ�����Ƿ�Ϊ����

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d",&a);
//    if (a%2==0)
//    {
//        printf("������ż��\n");
//    }
//    else
//    {
//        printf("����������\n");
//    }
//
//    return 0;
//}


//��ϰ2�����1-100֮�������

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







//2.switch���

/*switch (���ͱ��ʽ)
{
    case ���γ������ʽ:
            ���;
            break;
}
*/

//��switch����У�����û��ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧

//���磺���뼸����ʾ���ڼ�

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d",&day);
//    switch (day)
//    {
//    case 1:
//            printf("����һ\n");
//            break;
//    case 2:
//            printf("���ڶ�\n");
//            break;
//    case 3:
//            printf("������\n");
//            break;
//    case 4:
//            printf("������\n");
//            break;
//     case 5:
//            printf("������\n");
//            break;
//    case 6:
//            printf("������\n");
//            break;
//    case 7:
//            printf("������\n");
//            break;
//    }
//    return 0;
//}



//�����޸�Ϊ���·�ʽ��
//1. ����1 - 5������ǡ�weekday��;
//2. ����6 - 7�����weekend��

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
//        printf("�������\n");
//        break;
//    }
//
//    return 0;
//}



//��ϰ���ж����д��룺m= ?  n= ?

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
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;   //ע�⣺���break������case3�е�switch��䣬����ȥ֮�����case4
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







//3.ѭ�����

     //while
     //for
     //do    while



//3.1 while ѭ��

//while �﷨�ṹ
       //while (���ʽ)
            //ѭ����䣻

//���磺����Ļ�ϴ�ӡ1-10������

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




//while����е�break��continue

// break��whileѭ���е����ã�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� ���ԣ�while�е�break������������ֹѭ����

//continue��whileѭ���е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�



//��ϰ

//��������������˼��

//����1
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

//�������Ӽ���������һ���ַ���������Ļ�Ͻ��д�ӡ  ����Ctrl+z�ͻ��Ƴ�ѭ��



//����2

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


//������������δ���ֻ���ӡ�ַ�0-9֮�����




//������Կ���һ���µ����뺯����getchar ���������scanf��������

//�������˵��getchar������ʹ�ó���

//getchar�ǴӼ����ϻ�ȡ�ַ�

//scanf ���������뺯���������ո�ͻ�ֹͣ���룬����ȡ�ո�ǰ����ַ�������Ϣ

//scanf �� getchar �����뺯�������ǲ���ֱ�ӴӼ������õ����ݣ����Ǵ����뻺��������������
//�������������û�����ݣ���ô�ͻ�ȴ����ȴ��Ӽ������������ݵ������������scanf ��getchar���ֻ����������ж�������ô�ͻ�����


//��������Ĵ��룺1.������е�scanf����ʱ���������뻺��������û�ж�������ô�ͻ�ȴ���������������
//������������123456\n���ַ�������ĩβ����\n��   �س��ᴥ��scanfȥ��ȡ���������������   scanfֻ������123456 �õ�֮�󣬻�����ݷŵ�����password����ȥ

//2.���������е�printf("��ȷ�����루Y/N��>:")ʱ����Ļ�ϻᵯ����ȷ������

//3.���������е�int ch = getchar();ʱ ��getchar�����ص����������濴�Ƿ��ж�����һ������ʣ��\n�����棬��ô�ͻ��\n���߷ŵ�ch���棬

//4.��ô�����������ʱ����ֱ�ӽ���else����У���Ϊch����������� \n ��Ļ�ϻ����ȷ��ʧ�ܣ�

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("����������>:");//���������ǣ�123456

    scanf("%s", password);
    printf("��ȷ�����루Y/N��>:");

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("ȷ�ϳɹ���\n");
    }
    else
    {
        printf("ȷ��ʧ�ܣ�\n");
    }



    return 0;
}
*/



//Ϊ�˽����������123456֮����Ļ��ֱ�����ȷ��ʧ�ܵ����⣬��Ҫ�Դ�������޸�

//����ı����ǻ�����������һ��\n�����ԲŻ�������������⣬���Ҫ������⣬��ô����Ҫ�ѻ�������������ݽ������

//ͨ��getchar�Ĺ�������֪����getchar���԰ѻ���������Ķ������ߣ���ô��int ch = getchar();ǰ�����һ��getchar�Ϳ��԰ɻ����������\n���ߣ��Ͱ���������

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("����������>:");//���������ǣ�123456

    scanf("%s", password);
    printf("��ȷ�����루Y/N��>:");

    getchar(); //����getchar�Ĺ��ܾ�����������

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("ȷ�ϳɹ���\n");
    }
    else
    {
        printf("ȷ��ʧ�ܣ�\n");
    }



    return 0;
}
*/


//��������ֱ�Ӽ�һ��getchar�ķ�ʽ������һ�����⣬����������ǵ�������123456 abcdef��ô��Ļ�����ɻ�ֱ�ӳ���ȷ��ʧ��
//���������ԭ���ǣ�������������������123456 abcdefʱ����������������123456 abcdef\n
//scanf������ӻ���������123456����Ϊscanf���������ո�ͻ�ֹͣ��ֻ���ÿո�֮ǰ������
//��ô����������ʣ��������ǣ� abcdef\n
//�����һ��getchar������������������Ȼ�ǲ����ģ���Ϊ�����������кܶ���ַ�
//���ԣ�Ҫ�볹�׽��������⣬����Ҫ��һ��ѭ��

/*
#include <stdio.h>

int main()
{
    char password[20] = { 0 };
    printf("����������>:");//���������ǣ�123456 abcdef

    scanf("%s", password);
    printf("��ȷ�����루Y/N��>:");

    //���whileѭ�����԰ѻ����������ȫ�����ݶ�����
    //��Ϊgetchar��һ��һ���ַ��õģ���getchar�õ�fʱ�����õ������ݸ�ֵ��tmp���ж�tmp����\n���뵽ѭ��������
    //��ʱ��getchar���Զ������ȡ�������ȡ�Ĺ�������ѭ����������еģ������ȡ��\nʱ�����ж�tmp������tmp==\n  ��ô�ͻ�����ѭ�������Ǵ�ʱgetchar�Ѿ���\n��ȡ�ߣ����Ի���������ʲô��û��

    int tmp = 0;
    while ((tmp = getchar()) != '\n')  //����ע��tmp = getchar()   �����Ǹ�ֵ =   �������жϣ���Ҫ��д��==
    {
        ;
    }

    //��������������ѭ�����������������������

    int ch = getchar();
    if (ch == 'Y')
    {
        printf("ȷ�ϳɹ���\n");
    }
    else
    {
        printf("ȷ��ʧ�ܣ�\n");
    }



    return 0;
}

*/




//forѭ��

//for(���ʽ1�����ʽ2�����ʽ3)
              //ѭ����䣻

//���ʽ1 ���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ġ� 
//���ʽ2 ���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ�� 
//���ʽ3 ���ʽ3Ϊ�������֣�����ѭ�������ĵ���


//��ϰ����ӡ1-100֮�����

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



//for����ѭ�����Ʊ���
//һЩ���飺
//1. ������for ѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ���ơ�
//2. ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��








//do  while ѭ��

//do
//   ѭ����䣻
//while (���ʽ);        ע������ֺ�



//��ϰ�⣺

//1.����n�Ľ׳�

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






//2.���� 1!+2!+3!+...+10!

//�������ս׳˵����˼��
//�������ն���׳���ӵ�˼��


//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//
//    //��һ�δ���Ч�ʱȽϵ�
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
//    //����ʹ�����µĴ���
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




//3.��һ�����������в���ĳ������n

//ʹ�ö��ֲ���

//�������ն��ֲ��ҵ�˼��

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

        if (arr[mid] < n)     //arr[mid] ����˼���ҵ��±�Ϊmid��Ԫ��
        {
            left = mid + 1;
        }
        else if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            printf("�ҵ���,�±��� %d\n", mid);
            break;
        }

    }
    if (left>right)
    {
        printf("�Ҳ���\n");
    }
     
    return 0;
}*/



//4.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char password[20] = { 0 };
    

    for ( i = 0; i < 3; i++)
    {
        printf("����������>:");
        scanf("%s", password);
        if (strcmp(password,"123456") == 0)  //strcmp���ַ����ȽϺ��� �������ȣ��򷵻�0
        {
            printf("��¼�ɹ���\n");
            break;
        }
        else
        {
            printf("���������������������");
        }
    }

    if (i == 3)
    {
        printf("��������3����������˳���¼\n");
    }

    return 0;
}
*/

