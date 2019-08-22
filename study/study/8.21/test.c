#include"test.h"


//char *my_copy(char* dest, const char* src){
//
//	if (src == NULL || dest == NULL){
//		return dest;
//	}
//	int i = 0;
//	for (; src[i] != '\0'; i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[i] = '\0';
//	return dest;
//}
//int main(){
//
//	char str1[100] = "jugle";
//	char str2[100] = "jesus";
//	char* str3 = (char*)0x10;		//非法内存（未申请的内存地址）
//	my_copy(str2, str3);
//	printf("%s\n", str2);
//	return 0;
//
//
//}



//char *my_strcpy(char *arr1, char *arr2){
//
//	if (arr1 == NULL)
//	{
//		return arr1;
//	}
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main(){
//
//	char src[] = "hello";
//	char str[50];
//	my_strcpy(str, src);
//	printf("%s\n", str);
//	return 0;
//
//}








//char *Strcat(char* str1, char* str2){
//
//	char* ret = str1;
//	while (*str1){
//		str1++;
//	}
//	while (*str2){
//		*str1++ = *str2++;
//	}
//	
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



//char* Strcat(char* dest, char* src){
//
//	if (dest == NULL || src == NULL){
//		return dest;
//	}
//	//先找dest末尾
//	char* p = dest;
//	while(*p != '\0'){
//		++p;
//	}
//	//当循环结束，p就指向了\0的位置
//	//开始拷贝
//	while (*src != '\0'){
//		*p = *src;
//		++p;
//		++src;
//	}
//	//\0需要拷贝
//	*p = '\0';
//	return dest;
//}
//
//int main(){
//
//	char str1[100] = "hehe";
//	char str2[] = "haha";
//	Strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}


//const char* my_strstr(const char* dest, const char* src){
//
//	assert(dest != NULL && src != NULL);
//
//	const char* red = dest;
//	const char* bla = src;
//	while (*red != '\0'){
//		const char* tmp = red;
//		while (*tmp == *bla){
//			bla++;
//			tmp++;
//		}
//		if (*bla == '\0'){
//			return red;
//		}
//		bla = src;
//		red++;
//	}
//	return NULL;
//}
//int main(){
//	char str1[] = "hello bit";
//	char str2[] = "bit";
//	const char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}




//char* Strstr(const char* str1, const char* str2){
//	if (str1 == NULL || str2 == NULL){
//		return NULL;
//	}
//	if (*str2 == '\0'){//空字符串
//		return NULL;
//	}
//
//	char* black_ptr = str1;
//	while (*black_ptr != '\0'){
//		char* red_ptr = black_ptr;
//		char* sub_ptr = str2;	//辅助指针
//		//拿红色方框里的与str2字符串比较
//		//若两字符串都未到末尾且对应字符相等就继续比较下一位
//		while (*red_ptr != '\0' && *sub_ptr != '\0' && *red_ptr == *sub_ptr){
//			++red_ptr;
//			++sub_ptr;
//		}
//		if (*sub_ptr == '\0'){//找到了子串
//			return black_ptr;
//		}
//		else{//若*red_ptr == '\0',或两个指针内容不同
//			++black_ptr;
//		}
//	}
//	//没找到
//	return NULL;
//}
//int main(){
//		char str1[] = "hello bit";
//		char str2[] = "bit";
//		char* ret = Strstr(str1, str2);
//		if (ret == NULL){
//			printf("未找到\n");
//		}
//		else{
//			printf("找到了\n");
//		}
//		printf("%s\n", ret);
//		return 0;
//}



//char* my_strchr(char* dest, char c){
//
//	const char* p = dest;
//	while (*dest){
//		if (*dest == c){
//			return dest;
//		}
//		dest++;
//	}
//	if (dest != '\0'){
//		return dest;
//	}
//	return NULL;
//}
//int main(){
//	char c = 'e';
//	char arr2[] = "hello";
//	char*  index = my_strchr(arr2, c);
//	printf("%s\n", index);
//	return 0;
//
//}



//int my_strcmp(const char* str1, const char* str2){
//
//	int i = 0;
//	while (str1 != '\0' && *str1 == *str2){
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main(){
//
//	char str1[] = "haha";
//	char str2[] = "hehe";
//	int index = my_strcmp(str1, str2);
//	if (index == 0){
//		printf("相等");
//	}
//	else if (index < 0){
//		printf("str1 < str2");
//	}
//	else{
//		printf("str1 > str2");
//	}
//	return 0;
//
//}





//void *my_memcpy(char* dest, char* src, size_t num){
//
//	int i = 0;
//	for (i = 0; i <= (int)num; i++){	//要么小于等于多拷贝一个字符0，否则需要	dest[i] = '\0'来拷贝字符0
//
//		dest[i] = src[i];
//	}
//
//	return dest;
//}
//int main(){
//	char arr1[40];
//	char arr2[] = "jesus";
//	size_t num = 5;
//	my_memcpy(arr1, arr2,num);
//	printf("%s\n", arr1);
//	return 0;
//}




void *my_memmove(void *dest, const void *src, size_t count)
{
	assert((dest != 0) && (src != 0));
	unsigned char *pdest = (char *)dest;
	unsigned char *psrc = (char *)src;
	int i = 0;

	if ((pdest < psrc) || (pdest > psrc + count)) ///正向拷贝
	{
		for (i = 0; i < (int)count; i++)
		{
			*pdest++ = *psrc++;
		}
	}
	else      /*反向拷贝*/
	{
		psrc += count;
		pdest += count;
		for (i = 0; i < (int)count; i++)
		{
			psrc--;
			pdest--;
			*pdest = *psrc;
		}
	}

	return dest;
}
int main(){

	char arr1[40] = "hello";
	char arr2[] = "hello bit";
	my_memmove(arr1, arr2,strlen(arr2));
	printf("%s\n", arr1);
	return 0;


}