#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//ͨѶ¼Ҫʵ����Щ���ܣ�

//1.���1000��������Ϣ
//��Щ��Ϣ��Ҫ����  ���֡��绰���Ա�סַ������

//2.���Ӻ�����Ϣ

//3.ɾ��ָ�����ֵĺ�����Ϣ

//4.���Һ�����Ϣ

//5.�޸ĺ�����Ϣ

//6.��ӡ������Ϣ


#include "contact.h"


void menu()
{

	printf("********************************************\n");
	printf("****  1.add               2.del        *****\n");
	printf("****  3.search            4.modify     *****\n");
	printf("****  5.show              6.sort       *****\n");
	printf("****  7.save              0.exit       *****\n");
	printf("********************************************\n");

}


int main()
{
	int input = 0;
	
	//�ڽ��������ͨѶ¼��ɾ��Ĺ���֮ǰ����Ҫ����һ��ͨѶ¼
	//����Ӧ�ô���ͨѶ¼
	struct Contact con;   //con ����ͨѶ¼���������dataָ�롢size��capacity

	//��ʼ��ͨѶ¼
	InitContact(&con); //��Ϊ��ʼ��ͨѶ¼��������Ҫ����con����Ҫ��con�����ݽ��и��죬������Ҫ��ַ

	//���ǽ���ͨѶ¼����ɾ��Ĺ���

	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);

		switch (input)
		{
		case ADD:
			AddContact(&con);//����������ͨѶ¼����ʱ������Ҫ��con�����޸ĵģ�������Ҫ���д�ַ
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SerarchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);  //��Ҫ��ʾͨѶ¼ʱ������Ҫ�޸�ͨѶ¼����ʵ��ȡ��ַ�ǿ��Եģ����ǽṹ�崫��Ч�ʸ��ߣ����Ի���ȡ��ַ����
			break;
		case SORT:   //�����Լ�д��
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:

			SaveContact(&con);

			//ǰ����ʹ��malloc��realloc���ж�̬�ڴ�Ŀ��ٺͶ�̬�ڴ������
			//�����Ƴ�֮ǰҪ�����ͷ�   ����дһ�����������ͷ�
			DestroyContact(&con);


			printf("�˳�ͨѶ¼\n");
			break;

		default:
			printf("����������������룡\n");
			break;
		}




	} while (input);



	return 0;
}