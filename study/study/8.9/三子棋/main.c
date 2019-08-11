#define _CRT_SECURE_NO_DEPRECATE 
/*
棋盘为3*3，可以用一个二维数组board[3][3]来表示
- 第一步，初始化棋盘用函数Init_board
- 第二步，打印棋盘display_board
- 第三步，玩家选择下棋的坐标player_move，电脑随后随机下棋computer_move
- 第四步，判断输赢check_win
1，玩家赢
2，电脑赢
3，平局
*/

#include "game.h"

void menu()
{
	printf("****************************************\n");
	printf("*********开始清选择”1“********************\n");
	printf("*********结束清选择”0:“*******************\n");
	printf("***************************************\n");
}


void play()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	Init(board, ROW, COL);
	Show(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
		{
			break;	//玩家胜利或平局
		}
		Show(board, ROW, COL);

		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
		{
			break;	//电脑胜利或平局
		}
		Show(board, ROW, COL);
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
	else if (ret == 'X')
	{
		printf("玩家胜出\n");
	}
	else if (ret == 'O')
	{
		printf("电脑胜出");
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入操作\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;

		}
		
	}
	while (input);
	return 0;
}