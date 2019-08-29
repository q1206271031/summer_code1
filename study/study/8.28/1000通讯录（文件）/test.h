//动态通讯录

#ifndef __TEST_H__
#define __TEST_H__

#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<stddef.h>

#define NAME_MAX 10
#define SEX_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 30
#define MAX 1000
#define DEFAULT_SZ 3

#define CONTACT "F:/比特科技/C语言课件V3/进阶/contact.dat"

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];


}PeoInfo;
//定义数据结构体


//静态版本
//typedef struct Contact
//{
//	PeoInfo* data;		//指向一块空间
//	int size;		//已有信息个数
//
//}Contact, *pContact;


typedef struct Contact
{
	PeoInfo* data;		//指向一块空间
	int size;		//已有信息个数
	int capacity;		//容量
}Contact, *pContact;


void InitContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
void ModifyContact(pContact pc);
void SortContact(pContact pc);
void EmptyContact(pContact pc);
void DestroyContact(pContact pc);
void LoadContact(pContact pc);
void SaveContact(pContact pc);


#endif