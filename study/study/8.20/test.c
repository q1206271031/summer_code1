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



//void Bubble_sort(int *arr, int len){				//ð������
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



//qsort��������ð�ݣ�
int s[1000], n, i;
int cmp(const void* a, const void* b){

	return (*(int*)a) - *(int*)b;
	//��С��������		a�ĵ�ַ����b��ַ			�����������򣬸�������
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

//cmp�Ǻ���ָ�����ͣ�cmp����Ӧ����������int������ͬʱ����ֵҲ��int
typedef int(*cmp)(int, int);


//����ͨ���ص�����
void BubbleSort(int arr[],int size,cmp cmp){
	//ÿ������СԪ��
	//[0,bound������������
	//[bound,size)����������
	int bound = 0;//�߽�
	//ÿ��ѭ�����ҳ���СԪ�ز�������ǰ
	for (; bound < size; ++bound)
	{//�ڶ���ѭ��������С
		for (int i = size - 1; i>bound; --i)
		{
			if(cmp (arr[i-1] , arr[i]))		//�����潻�������򲻽���
				//��ǰ���������򣬲���������Ҫ�󣬽�������
			{
				swap(&arr[i - 1], &arr[i]);
			}
		}
	}
}



int less(int x, int y){
	//�ƶ������������
	//x��ǰһ��Ԫ�أ�y�Ǻ�һ��Ԫ��
	if (x < y)
	{
		return 0;
	}
	return 1;
}

int greater(int x,int y){
	//�ƶ������������
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
	//��������
	BubbleSort(arr1, 4,less);

	//��������
	BubbleSort(arr2, 4,greater);


	return 0;
}
*/