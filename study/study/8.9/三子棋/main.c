#define _CRT_SECURE_NO_DEPRECATE 
/*
����Ϊ3*3��������һ����ά����board[3][3]����ʾ
- ��һ������ʼ�������ú���Init_board
- �ڶ�������ӡ����display_board
- �����������ѡ�����������player_move����������������computer_move
- ���Ĳ����ж���Ӯcheck_win
1�����Ӯ
2������Ӯ
3��ƽ��
*/

#include "game.h"

void menu()
{
	printf("****************************************\n");
	printf("*********��ʼ��ѡ��1��********************\n");
	printf("*********������ѡ��0:��*******************\n");
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
			break;	//���ʤ����ƽ��
		}
		Show(board, ROW, COL);

		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
		{
			break;	//����ʤ����ƽ��
		}
		Show(board, ROW, COL);
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	else if (ret == 'X')
	{
		printf("���ʤ��\n");
	}
	else if (ret == 'O')
	{
		printf("����ʤ��");
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;

		}
		
	}
	while (input);
	return 0;
}