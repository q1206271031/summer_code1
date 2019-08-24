#include"test.h"

//struct stu
//{
//	char* name;
//	int age;
//	char sex[8];
//	char tel[12];
//};
//
//struct stu2
//{
//	struct stu *p2;
//	char* name;
//	char* p;
//};
////
//int main(){
//	struct stu A;
//	struct stu *p;
//	A.age = 20;
//	strcpy(A.name, "zhang");
//	struct stu2 *pc;
//	pc->p2->name = "zhang";
//}

//加入*stu无法在main函数中调用
//typedef struct student			//自定义类型名
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tel[12];
//}stu,*pc;		//别名
//
//struct stu1		//构建结构体名
//{
//	stu p;
//	char addr[30];
//	pc p1;
//};
//
//int main(){
//
//	struct stu1 A;
//	A.p1->age = 20;
//};


//struct stu
//{
//	char name[20];
//	char age;
//};
//int main(){
//	
//	/*struct stu s = { "zhangsan", 20 };*/
//	struct stu A;
//	printf("%20s\t%5s\t\n", "name", "age");
//	strcpy(A.name, "zhang");
//	A.age = 20;
//	printf("%20s\t%5d\t\n", A.name, A.age);
//}


struct s1
{
	char c1;
	int i;
	char c2;
};
int main(){

	printf("%d", sizeof(struct s1));
	return 0;
}