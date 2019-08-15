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


int main()
{
	//d3p1();
	//d3p2();
	//d3p3();
	//d5p1();


}