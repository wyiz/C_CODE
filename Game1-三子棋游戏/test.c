#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******     1.play     *******\n");
	printf("******     0.exit      ******\n");
	printf("*****************************\n");

}

void game()
{
	//��Ҫ����һ����ά�������洢����
	char board[ROW][COL] = { 0 };

	//��ʼ������ --��ʼ��Ϊ�ո�
	InitBoard(board,ROW,COL);

	//��ӡ����
	Display(board,ROW,COL);

	//�����

	//������

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			game();
			
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}