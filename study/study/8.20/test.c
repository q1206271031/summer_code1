#include"test.h"

//char Strcat(char* str1, char* str2){
//
//	char* ret = str1;
//	while (*str1){
//		str1++;
//	}
//	while (*str2){
//		*str1++ = *str2++;
//	}
//	*str1 = '\0';
//	return ret;
//}
//int main(){
//
//	char str1[10] = "abc";
//	char str2[] = "def";
//	Strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}



//void Bubble_sort(int *arr, int len){				//冒泡排序
//
//	int i, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - i - 1;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void print(int* arr, int len){
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//			printf("%2d", arr[i]);
//	}
//}
//int main(){
//
//	int arr[] = { 1, 3, 7, 6, 4, 2, 5, 9, 8 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, len);
//	print(arr, len);
//	return 0;
//
//}



//qsort快速排序（冒泡）
int s[1000], n, i;
int cmp(const void* a, const void* b){

	return (*(int*)a) - *(int*)b;
	//从小到大排序		a的地址高于b地址			返回正数升序，负数降序
}
int main(){

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}	
	qsort(s, n, sizeof(s[0]), cmp);
	for (i = 0; i < n; i++)
	{
		printf("%d", s[i]);
	}
	return 0;
}


/*
void swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//cmp是函数指针类型，cmp函数应该是有两个int参数，同时返回值也是int
typedef int(*cmp)(int, int);


//可以通过回调函数
void BubbleSort(int arr[],int size,cmp cmp){
	//每次找最小元素
	//[0,bound）已排序区间
	//[bound,size)待排序区间
	int bound = 0;//边界
	//每次循环都找出最小元素并放在最前
	for (; bound < size; ++bound)
	{//第二重循环，找最小
		for (int i = size - 1; i>bound; --i)
		{
			if(cmp (arr[i-1] , arr[i]))		//返回真交换，否则不交换
				//当前是升序排序，不符合排序要求，交换内容
			{
				swap(&arr[i - 1], &arr[i]);
			}
		}
	}
}



int less(int x, int y){
	//制定升序排序规则
	//x是前一个元素，y是后一个元素
	if (x < y)
	{
		return 0;
	}
	return 1;
}

int greater(int x,int y){
	//制定降序排序规则
	if (x>y)
	{
		return 0;
	}
	return 1;

}

int main(){
	int arr1[] = { 3, 1, 5, 4, 2 };
	int arr2[] = { 3, 1, 5, 4, 2 };
	int size = sizeof(arr1) / sizeof(arr1[0]);
	//升序排序
	BubbleSort(arr1, 4,less);

	//降序排序
	BubbleSort(arr2, 4,greater);


	return 0;
}
*/