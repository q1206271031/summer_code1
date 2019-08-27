#include"test.h"


//void bubble_sort(int* arr, int len){
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len-1; i++){
//		for (j = 0; j<len - i - 1; j++){
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j+ 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//void print(int* arr, int len){
//
//	int i = 0;
//	for (i = 0; i < len; i++){
//		printf("%2d", arr[i]);
//	}
//	putchar('\n');
//}
//
//int main(){
//	int arr[] = { 5, 3, 7, 9, 1, 4, 2, 6, 8 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, len);
//	print(arr, len);
//	return 0;
//}



//char* my_strcpy(char* arr1, char* arr2){
//
//	if (arr2 == NULL){
//		return arr1;
//	}
//	int i = 0;
//	for (;arr2[i] != '\0'; i++){
//		arr1[i] = arr2[i];
//	}
//	arr1[i] = '\0';
//	return arr1;
//}
//int main(){
//	char arr2[] = "hello";
//	char arr1[50];
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}


//char* my_strcpy(char* arr1, char* arr2){
//
//	if (arr2 == NULL){
//		return arr1;
//	}
//	char* tmp = arr1;
//	while (*arr1++ = *arr2++){
//		;
//	}
//	return arr1;
//}
//int main(){
//	char arr1[] = "hello";
//	char arr2[50];
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//char* my_strcat(char* arr1, char* arr2){
//	if (arr1 == NULL || arr2 == NULL){
//		return -1;
//	}
//	char* tmp = arr1;
//	while (*arr1){
//		arr1++;
//	}
//	while (*arr2){
//		*arr1++ = *arr2++;
//	}
//	return arr1;
//}
//int main(){
//	char arr1[50] = "hello ";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//const char* my_strstr(const char* dest,const char* src){
//
//	assert(dest != NULL && src != NULL);
//	const char* red = dest;
//	const char* bla = src;
//	while (*red != '\0'){
//		const char* tmp = red;
//		while (*red == *bla){
//			tmp++;
//			bla++;
//		}
//		if (*bla == '\0'){
//			return red;
//		}
//		bla = src;
//		red++;
//	}
//	return NULL;
//}
//
//int mian(){
//
//	char dest[] = "hello";
//	char src[] = "llo";
//	const char* ret = my_strstr(dest, src);
//	printf("%s", ret);
//	return 0;
//}


char* Strstr(const char* str1, const char* str2){
	if (str1 == NULL || str2 == NULL){
		return NULL;
	}
	if (*str2 == '\0'){//空字符串
		return NULL;
	}

	const char* black_ptr = str1;
	while (*black_ptr != '\0'){
	const char* red_ptr = black_ptr;
	const char* sub_ptr = str2;	//辅助指针
		//拿红色方框里的与str2字符串比较
		//若两字符串都未到末尾且对应字符相等就继续比较下一位
		while (*red_ptr != '\0' && *sub_ptr != '\0' && *red_ptr == *sub_ptr){
			++red_ptr;
			++sub_ptr;
		}
		if (*sub_ptr == '\0'){//找到了子串
			return black_ptr;
		}
		else{//若*red_ptr == '\0',或两个指针内容不同
			++black_ptr;
		}
	}
	//没找到
	return NULL;
}
int main(){
		char str1[] = "hello";
		char str2[] = "llo";
		char* ret = Strstr(str1, str2);
		if (ret == NULL){
			printf("未找到\n");
		}
		else{
			printf("找到了\n");
		}
		printf("%s\n", ret);
		return 0;
}

