#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

void Init(char board[ROW][COL], int row, int col);
void Show(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);

#endif