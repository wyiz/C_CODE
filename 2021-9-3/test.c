#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//һ����ʼC����


//1.��һ��C���Գ���Ա

//#include <stdio.h>
//
//int main()
//{
//	printf("hello world!\n");
//
//	return 0;
//}




//2.��������

//char //�ַ���������
//short //������
//int //����
//long //������
//long long //����������
//float //�����ȸ�����
//double //˫���ȸ�����
//C������û���ַ������ͣ�    --û��  �ַ������͵�����һ�㶼�Ƿ������鵱��   C++����ר�ŵ�����




//�������һ��ÿ������������ռ�ռ�Ĵ�С(��λ���ֽ�)

//sizeof -�ؼ��� --�����������ͻ��߱�����ռ�ռ�Ĵ�С


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
//	//C���Ա�׼�У�int <=long
//	 
//	//��������������32λƽ̨��
//	//64λƽ̨��������������һ�µ�
//
//
//	return 0;
//}



//3.�����ͳ���

//�����е���Щֵ�ǲ���ģ����磺Բ���ʣ��Ա𣨣��������֤���룬Ѫ�͵ȵȣ�,��Щֵ�ǿɱ�ģ����磺���䣬���أ�н�ʣ���

//�����ֵ��C�������ó����ĸ�������ʾ�����ֵC�������ñ�������ʾ��

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


//�����ķ���
//�ֲ�����     --������{}�ڵı���
//ȫ�ֱ���     --������{}��ı���

//�����������ֱ����ķ��������ǿ������ڲ���{}��

//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2020;//�ֲ�����
//	printf("global = %d\n", global);   //2020
//
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ���������
//
//	return 0;
//}


//��2�����ĺ�

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


//����

//C�����еĳ�����Ϊ�������¼��֣�
//1.���泣��
//2.const ���εĳ�����
//3.#define ����ı�ʶ������
//4.ö�ٳ���


#include <stdio.h>
//����
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//�����е�MALE,FEMALE,SECRET��ö�ٳ���
int main()
{
	3.14;//���泣��
	1000;//���泣��
	const float pai = 3.14f; //const ���εĳ���
	//pai = 5.14;//ok?  ����
#define MAX 100 //#define�ı�ʶ������
	return 0;
}

