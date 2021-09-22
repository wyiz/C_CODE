#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//通讯录要实现哪些功能？

//1.存放1000个好友信息
//这些信息主要包括  名字、电话、性别、住址、年龄

//2.增加好友信息

//3.删除指定名字的好友信息

//4.查找好友信息

//5.修改好友信息

//6.打印好友信息


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
	
	//在进行下面的通讯录增删查改功能之前，需要创建一个通讯录
	//首先应该创建通讯录
	struct Contact con;   //con 就是通讯录，里面包含data指针、size和capacity

	//初始化通讯录
	InitContact(&con); //因为初始化通讯录函数是需要操作con，需要对con的内容进行改造，所以需要传址

	//这是进行通讯录的增删查改功能

	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);

		switch (input)
		{
		case ADD:
			AddContact(&con);//当进入增加通讯录函数时，是需要对con进行修改的，所以需要进行传址
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
			ShowContact(&con);  //当要显示通讯录时，不需要修改通讯录，其实不取地址是可以的，但是结构体传参效率更高，所以还是取地址更好
			break;
		case SORT:   //排序（自己写）
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:

			SaveContact(&con);

			//前面是使用malloc和realloc进行动态内存的开辟和动态内存的增加
			//所以推出之前要进行释放   这里写一个函数进行释放
			DestroyContact(&con);


			printf("退出通讯录\n");
			break;

		default:
			printf("输入错误，请重新输入！\n");
			break;
		}




	} while (input);



	return 0;
}