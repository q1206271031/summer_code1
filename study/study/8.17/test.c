#include"test.h"

//int differ(int m, int n){
//
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m & 1) != (n & 1))
//		{
//			count++;
//		}
//		m = m >> 1;
//		n = n >> 1;
//	}
//	return count;
//}
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,& n);
//	int count = differ(m, n);
//	printf("%d", count);
//	return 0;
//}


//
//int site(int num){
//	
//	
//	int i = 0;
//	//打印奇数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	putchar('\n');
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	putchar('\n');
//	return num;
//}
//int main(){
//	int num = 0;
//	scanf("%d", &num);
//	site(num);
//	return 0;
//}



//int print(int n){
//
//	int m = 0;
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	putchar('\n');
//	return n;
//}
//int main(){
//
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}




//判断几个二进制
//int count_bit(int num){
//
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	return count;
//
//}
//int main(){
//
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}






//tecent
//bool IsLittle()//判断主机序是否为小端
//{
//	short a = 0x0001;
//	return *(char *)&a == 0x01;
//}
//
//long Htonl(long a)
//{
//	long b = 0;
//
//	if (!IsLittle())//大端
//	{
//		return a;
//	}
//
//	for (int i = 0; i<sizeof(a); i++)
//	{
//		b = (b << 8) | (a & 0xff);
//		a >>= 8;
//	}
//	return b;
//}
//
//int main()
//{
//	printf("%x\n", Htonl(0x12345678));
//
//	return 0;
//}
/*
0001 0010 0011 0100 0101 0110 0111 1000   a
0000 0000 0000 0000 0000 0000 1111 1111   0xff //截断8bit位
0000 0000 0000 0000 0000 0000 0111 1000   0x78 -> b(0x7800)
0000 0000 0001 0010 0011 0100 0101 0110   a == 0x123456
&0xff截断末8位0x56 -> b
*/





#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>

int add(int x, int y)
{
	int tmp = 0;
	while (y != 0)
	{
		tmp = x^y;
		y = x&y;
		x = tmp;
		y = y << 1;


	}
	return x;
}
int avg(int x, int y)
{
	return add(((x^y) >> 1), x&y);
}
int main()
{
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	printf("%d\n", avg(x, y));
	return 0;

}