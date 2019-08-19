#include"test.h"

//int main(){
//	//一维数组
//	int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));					//数组的空间大小   16			4*4
//	//printf("%d\n", sizeof(a + 0));			//指向第一个元素的指针长度为4
//	//printf("%d\n", sizeof(*a));				   //a[0]为int,4个字节
//	//printf("%d\n", sizeof(a + 1));				//指向第二个元素的指针长度为4
//	//printf("%d\n", sizeof(a[1]));					//a[1]为int ,4个字节
//	//printf("%d\n", sizeof(&a));					//数组指针  4					
//	//printf("%d\n", sizeof(*&a));						//数组指针解引用成原数组    16
//	//printf("%d\n", sizeof(&a + 1));					//跨越了一个数组的长度    4
//	//printf("%d\n", sizeof(&a[0]));					//取指向第一个元素地址的指针
//	//printf("%d\n", sizeof(&a[0] + 1));				//取a[1]的地址的指针
//	return 0;
//
//}


//字符数组
//int main(){
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));				//数组的长度，6个字节    6*1
//	printf("%d\n", sizeof(arr + 0));		//指向第一个元素的指针
//	printf("%d\n", sizeof(*arr));				//arr[0],第一个字符的长度
//	printf("%d\n", sizeof(arr[1]));			//第二个字符的长度
//	printf("%d\n", sizeof(&arr));			//数组指针，指向arr数组的首地址,返回值为char		4
//	printf("%d\n", sizeof(&arr + 1));		//跨越一个数组长度的指针		4
//	printf("%d\n", sizeof(&arr[0] + 1));		//取arr[1]的地址的指针
//}



//int main(){
//
//	char arr[] = "abcdef";
/*	printf("%d\n", sizeof(arr));	*/			//整个数组长度，包括'\0'			7
	//printf("%d\n", sizeof(arr + 0));		//指向第一个元素指针
	//printf("%d\n", sizeof(*arr));				//arr[0]字符长度（'a')
	//printf("%d\n", sizeof(arr[1]));			//第二个字符长度
	//printf("%d\n", sizeof(&arr));			//数组指针，返回值为char		4
	//printf("%d\n", sizeof(&arr + 1));		//跨越一个数组长度的指针		4
	//printf("%d\n", sizeof(&arr[0] + 1));	//取arr[1]的地址的指针		（‘b')


	//printf("%d\n", strlen(arr));				//6
	//printf("%d\n", strlen(arr + 0));		//6
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));
//}


//int main(){

	//char*p = "abcdef";
	//printf("%d\n", sizeof(p));				//指针长度
	//printf("%d\n", sizeof(p + 1));		//指向b的指针
	//printf("%d\n", sizeof(*p));			//对p指针解引用，指向a
	//printf("%d\n", sizeof(p[0]));			//首元素 char一个字节
	//printf("%d\n", sizeof(&p));			//数组指针
	//printf("%d\n", sizeof(&p + 1));		//跨越一个数组的指针
	//printf("%d\n", sizeof(&p[0] + 1));		//指向b元素的指针


	//printf("%d\n", strlen(p));			//6
	//printf("%d\n", strlen(p + 1));	//从第二个元素算起	5
	//printf("%d\n", strlen(*p));		//未定义行为
	//printf("%d\n", strlen(p[0]));		//未定义行为
	// printf("%d\n", strlen(&p));			//未定义行为
	//printf("%d\n", strlen(&p + 1));		//未定义行为
	//printf("%d\n", strlen(&p[0] + 1));		//从b元素算起
//}



//int main(){
//	//二维数组
//
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//12*4 = 48
//	printf("%d\n", sizeof(a[0][0]));			//第一个元素4个字节
//	printf("%d\n", sizeof(a[0]));				//以a[0][0]为首的一维数组  即第一行元素长度  4*4 = 16
//	printf("%d\n", sizeof(a[0] + 1));		//偏移一个单位，取a[0][1]			4
//	printf("%d\n", sizeof(*(a[0] + 1)));			//相当于p[1]			4
//	printf("%d\n", sizeof(a + 1));					//a[1]地址的长度	（指针）
//	printf("%d\n", sizeof(*(a + 1)));			//a[1]的数值				16
//	printf("%d\n", sizeof(&a[0] + 1));			//指向a[1][0]的指针
//	printf("%d\n", sizeof(*(&a[0] + 1)));		//a[1][0]的数值		16
//	printf("%d\n", sizeof(*a));			//以a[0]为首的一维数组
//	printf("%d\n", sizeof(a[3]));			//以a[3][0]为首的一维数组
//}





//	1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int*ptr = (int*)(&a + 1);			//指针跨越了一个数组
//	printf("%d,%d", *(a + 1), *(ptr - 1));			//a[1]的数值		指针指向第五个元素解引用
//	return 0;
//}



//结构体大小20字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//} *p;
////假设p的值为0x100000。如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);		//指针加1，跨越了一个界沟通，打印地址0x14
//	printf("%p\n", (unsigned long)p + 0x1);		//强转为数字+1		1
//	printf("%p\n", (unsigned int*)p + 0x1);		//指针+1，加一个int4个字节
//	return 0;
//}





//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int*ptr1 = (int*)(&a + 1);		//指针跨越了一个数组
//	int*ptr2 = (int*)((int)a + 1);	//a[0]+1 = 2	二进制小端输出	低地址低数据  2 00 00 00 
//	printf("%x,%x", ptr1[-1], *ptr2); 
//	return 0;
//}
/*
高地址
-------------- -
buf[3](0x12) --高位
buf[2](0x34)
buf[1](0x56)
buf[0](0x78) --低位
--------------
低地址
*/




//int main(int argc, char*argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };   //逗号表达式	即为{{1,3}	,{5,0},{0,0}}
//	int*p;
//	p = a[0];
//	printf("%d", p[0]);			//a[0][0]元素
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];		
//	p = a;		//截断，仅4行4列
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);		//相差为-4	负数存储为0xfffffffc
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int*ptr1 = (int*)(&aa + 1);			//指针跨越了一个数组
//	int*ptr2 = (int*)(*(aa + 1));		//指向aa[1]的首元素
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));		//打印了跨越数组的前一个元素10			打印aa[1]的前一个元素
//	return 0;
//}






//int main()
//{
//	char*a[] = { "work", "at", "alibaba" }; 
//	char**pa = a;		//字符串首地址给pa
//	pa++;				//指向下一个字符串
//	printf("%s\n", *pa);
//	return 0;
//}




int main()
{
	char*c[] = { "ENTER", "NEW", "POINT", "FIRST" }; 
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}