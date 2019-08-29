#include"test.h"

void menu(){

	printf("*************************************\n");
	printf("**********1.add        2.del*********\n");
	printf("**********3.search     4.modify*****\n");
	printf("**********5.show       6.sort********\n");
	printf("**********7.empty      0.exit *******\n");
	printf("*************************************\n");
}

enum Option	//枚举可能值
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EMPTY
};

void test(){

	int input = 0;	//1000个任务信息+size个数  通讯录
	Contact con;
	InitContact(&con);
	do{
		menu();
		printf("请选择： ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("瞎搞\n");
		}
	} while (input);


}

int main(){

	test();
	return 0;
}