#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>


void d3p1()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 0 };
	int tmp = 0;
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d", arr1[i]);
	}
	putchar('\n');
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d", arr2[i]);
	}
	putchar('\n');
}

void d3p2()
{
	int i = 0;
	double ret = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		ret = ret*(1.0 / i);
		sum = sum + ret;
		ret *= -1;
	}
	printf("%f", sum);
	return 0;
}


void d3p3()
{
	int  i = 0,count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%2d ", i);
		}
		if (i / 10 == 9)
		{
			printf("%2d ", i);
		}
	}return 0;
}


void d5p1()
{
	int i, j ,k= 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * (n - i - 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

}



//void init(int arr[], int len){
//
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d", &sum);
//		arr[i] = sum;
//	}
//}
//void empty(int arr[], int len){
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int len){
//
//	int i = 0;
//	int arr1[5];
//	for (i = 0; i < len; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = arr1[5 - i - 1];
//	}
//}
//int main(){
//
//	int i = 0;
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("初始化");
//	init(arr, len);
//	printf("逆置");
//	reverse(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//	printf("清空");
//	empty(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}



//int digit(int n){
//
//	int m = 0;
//	int sum = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		digit(n );
//		sum = m + digit(n);
//	}
//	return sum;
//}
//int main(){
//
//	int n;
//	scanf("%d", &n);
//	printf("和为%d", digit(n));
//	return 0;
//}


int mul(int n){
	if (n == 1)
	{
		return 1;
	}
	return n*mul(n -1);
}
int main(){
	
	int n = 5;
}


int main()
{
	//d3p1();
	//d3p2();
	//d3p3();
	//d5p1();


}