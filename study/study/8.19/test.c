#include"test.h"

//int main(){
//	//һά����
//	int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));					//����Ŀռ��С   16			4*4
//	//printf("%d\n", sizeof(a + 0));			//ָ���һ��Ԫ�ص�ָ�볤��Ϊ4
//	//printf("%d\n", sizeof(*a));				   //a[0]Ϊint,4���ֽ�
//	//printf("%d\n", sizeof(a + 1));				//ָ��ڶ���Ԫ�ص�ָ�볤��Ϊ4
//	//printf("%d\n", sizeof(a[1]));					//a[1]Ϊint ,4���ֽ�
//	//printf("%d\n", sizeof(&a));					//����ָ��  4					
//	//printf("%d\n", sizeof(*&a));						//����ָ������ó�ԭ����    16
//	//printf("%d\n", sizeof(&a + 1));					//��Խ��һ������ĳ���    4
//	//printf("%d\n", sizeof(&a[0]));					//ȡָ���һ��Ԫ�ص�ַ��ָ��
//	//printf("%d\n", sizeof(&a[0] + 1));				//ȡa[1]�ĵ�ַ��ָ��
//	return 0;
//
//}


//�ַ�����
//int main(){
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));				//����ĳ��ȣ�6���ֽ�    6*1
//	printf("%d\n", sizeof(arr + 0));		//ָ���һ��Ԫ�ص�ָ��
//	printf("%d\n", sizeof(*arr));				//arr[0],��һ���ַ��ĳ���
//	printf("%d\n", sizeof(arr[1]));			//�ڶ����ַ��ĳ���
//	printf("%d\n", sizeof(&arr));			//����ָ�룬ָ��arr������׵�ַ,����ֵΪchar		4
//	printf("%d\n", sizeof(&arr + 1));		//��Խһ�����鳤�ȵ�ָ��		4
//	printf("%d\n", sizeof(&arr[0] + 1));		//ȡarr[1]�ĵ�ַ��ָ��
//}



//int main(){
//
//	char arr[] = "abcdef";
/*	printf("%d\n", sizeof(arr));	*/			//�������鳤�ȣ�����'\0'			7
	//printf("%d\n", sizeof(arr + 0));		//ָ���һ��Ԫ��ָ��
	//printf("%d\n", sizeof(*arr));				//arr[0]�ַ����ȣ�'a')
	//printf("%d\n", sizeof(arr[1]));			//�ڶ����ַ�����
	//printf("%d\n", sizeof(&arr));			//����ָ�룬����ֵΪchar		4
	//printf("%d\n", sizeof(&arr + 1));		//��Խһ�����鳤�ȵ�ָ��		4
	//printf("%d\n", sizeof(&arr[0] + 1));	//ȡarr[1]�ĵ�ַ��ָ��		����b')


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
	//printf("%d\n", sizeof(p));				//ָ�볤��
	//printf("%d\n", sizeof(p + 1));		//ָ��b��ָ��
	//printf("%d\n", sizeof(*p));			//��pָ������ã�ָ��a
	//printf("%d\n", sizeof(p[0]));			//��Ԫ�� charһ���ֽ�
	//printf("%d\n", sizeof(&p));			//����ָ��
	//printf("%d\n", sizeof(&p + 1));		//��Խһ�������ָ��
	//printf("%d\n", sizeof(&p[0] + 1));		//ָ��bԪ�ص�ָ��


	//printf("%d\n", strlen(p));			//6
	//printf("%d\n", strlen(p + 1));	//�ӵڶ���Ԫ������	5
	//printf("%d\n", strlen(*p));		//δ������Ϊ
	//printf("%d\n", strlen(p[0]));		//δ������Ϊ
	// printf("%d\n", strlen(&p));			//δ������Ϊ
	//printf("%d\n", strlen(&p + 1));		//δ������Ϊ
	//printf("%d\n", strlen(&p[0] + 1));		//��bԪ������
//}



//int main(){
//	//��ά����
//
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//12*4 = 48
//	printf("%d\n", sizeof(a[0][0]));			//��һ��Ԫ��4���ֽ�
//	printf("%d\n", sizeof(a[0]));				//��a[0][0]Ϊ�׵�һά����  ����һ��Ԫ�س���  4*4 = 16
//	printf("%d\n", sizeof(a[0] + 1));		//ƫ��һ����λ��ȡa[0][1]			4
//	printf("%d\n", sizeof(*(a[0] + 1)));			//�൱��p[1]			4
//	printf("%d\n", sizeof(a + 1));					//a[1]��ַ�ĳ���	��ָ�룩
//	printf("%d\n", sizeof(*(a + 1)));			//a[1]����ֵ				16
//	printf("%d\n", sizeof(&a[0] + 1));			//ָ��a[1][0]��ָ��
//	printf("%d\n", sizeof(*(&a[0] + 1)));		//a[1][0]����ֵ		16
//	printf("%d\n", sizeof(*a));			//��a[0]Ϊ�׵�һά����
//	printf("%d\n", sizeof(a[3]));			//��a[3][0]Ϊ�׵�һά����
//}





//	1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int*ptr = (int*)(&a + 1);			//ָ���Խ��һ������
//	printf("%d,%d", *(a + 1), *(ptr - 1));			//a[1]����ֵ		ָ��ָ������Ԫ�ؽ�����
//	return 0;
//}



//�ṹ���С20�ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//} *p;
////����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);		//ָ���1����Խ��һ���繵ͨ����ӡ��ַ0x14
//	printf("%p\n", (unsigned long)p + 0x1);		//ǿתΪ����+1		1
//	printf("%p\n", (unsigned int*)p + 0x1);		//ָ��+1����һ��int4���ֽ�
//	return 0;
//}





//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int*ptr1 = (int*)(&a + 1);		//ָ���Խ��һ������
//	int*ptr2 = (int*)((int)a + 1);	//a[0]+1 = 2	������С�����	�͵�ַ������  2 00 00 00 
//	printf("%x,%x", ptr1[-1], *ptr2); 
//	return 0;
//}
/*
�ߵ�ַ
-------------- -
buf[3](0x12) --��λ
buf[2](0x34)
buf[1](0x56)
buf[0](0x78) --��λ
--------------
�͵�ַ
*/




//int main(int argc, char*argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };   //���ű��ʽ	��Ϊ{{1,3}	,{5,0},{0,0}}
//	int*p;
//	p = a[0];
//	printf("%d", p[0]);			//a[0][0]Ԫ��
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];		
//	p = a;		//�ضϣ���4��4��
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);		//���Ϊ-4	�����洢Ϊ0xfffffffc
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int*ptr1 = (int*)(&aa + 1);			//ָ���Խ��һ������
//	int*ptr2 = (int*)(*(aa + 1));		//ָ��aa[1]����Ԫ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));		//��ӡ�˿�Խ�����ǰһ��Ԫ��10			��ӡaa[1]��ǰһ��Ԫ��
//	return 0;
//}






//int main()
//{
//	char*a[] = { "work", "at", "alibaba" }; 
//	char**pa = a;		//�ַ����׵�ַ��pa
//	pa++;				//ָ����һ���ַ���
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