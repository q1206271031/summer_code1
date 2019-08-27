#ifndef __TEST_H__
#define __TEST_H__

#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define NEMA_MAX 10
#define SEX_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 30
#define MAX 1000

typedef struct PeoInfo
{
	char name[NEMA_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];

}PeoInfo;
//定义数据结构体

typedef struct Contact
{
	PeoInfo data[MAX];		//存放数据
	int size;		//已有信息个数

}Contact,*pContact;

void InitContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
int FindEntry(pContact pc, char name[]);
void DelContact(pContact pc);
void SearchContact(pContact pc);
void ModifyContact(pContact pc);
void SortContact(pContact pc);
void EmptyContact(pContact pc);


#endif