#define _CRT_SECURE_NO_DEPRECATE 

#include"game.h"

void Init(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Show(char board[ROW][COL], int row, int col)	
{
	int i = 0;
	int j = 0;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < col;j++)
		{
			printf(" %c ",board[i][j]);		//打印空格，字符，空格，以便打印|
			if(j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");

		if(i < row-1)		//防止打印三行
		{
			for(j = 0;j < col;j++)	//遍历列
			{
				printf("---");
				if(j < col-1)		//延长|，防止|过短
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int x,y = 0;
	while (1)
	{
		printf("请输入1-3的坐标");		//X表示玩家棋子
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("此位置已被占用\n");
			}

		}
		else
		{
			printf("坐标不合法\n");
		}
	}

}
static int Isfull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;		//未满
			}
		}
	}
	return 1;		//已满
}

char Iswin(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		//行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][0] != ' ')
		{
			return board[0][2];
		}
		if (Isfull(board, ROW, COL) == 1)
		{
			return 'Q';		//平局
		}

	}
	return ' ';		//输了
}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x, y = 0;
	printf("电脑移动\n");
	while (1)
	{
		x = rand() % ROW + 1;	//[0,3)	--->  [1,3]
		y = rand() % COL + 1;	
		if (board[x-1][y-1] == ' ')
		{
			board[x - 1][y - 1] = 'O';
			break;
		}
	}

}

