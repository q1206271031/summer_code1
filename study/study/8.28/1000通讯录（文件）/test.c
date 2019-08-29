#include"test.h"

//初始化
void InitContact(pContact pc){

	pc->size = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
	LoadContact(pc);
}

//销毁通讯录
void DestroyContact(pContact pc){
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->size = 0;
}

//检查是否扩容
void* CheckCapacity(pContact pc){
	if (pc->capacity == pc->size){
		PeoInfo* tmp = (PeoInfo*)(realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo)));
		if (tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity += 2;
			printf("扩容成功\n");
			return pc->data;
		}
		return NULL;
	}
	return pc->data;
}



//添加联系人
void AddContact(pContact pc){

	assert(pc);
	if (CheckCapacity(pc) == NULL){
		return;
	}
	printf("请输入姓名: ");
	scanf("%s", pc->data[pc->size].name);
	printf("请输入性别: ");
	scanf("%s", pc->data[pc->size].sex);
	printf("请输入年龄: ");
	scanf("%d", &pc->data[pc->size].age);
	printf("请输入电话: ");
	scanf("%s", pc->data[pc->size].tel);
	printf("请输入地址: ");
	scanf("%s", pc->data[pc->size].addr);

	pc->size++;





	/*if (pc->size == MAX){
		printf("通讯录已经满了\n");
	}
	int i = 0;
	FILE* pf = fopen("F:/比特科技/C语言课件V3/进阶/contact.dat", "w");
	for (i = 0; i < pc->size; i++){
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
*/

	

}

//显示通讯录内容
void ShowContact(pContact pc){

	assert(pc);
	int i = 0;
	printf("%10s\t%10s\t%4s\t%12s\t%20s\t", "name", "sex", "age", "tel", "addr");
	putchar('\n');
	for (i = 0; i < pc->size; i++){
		printf("%10s\t%10s\t%4d\t%12s\t%20s\t",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tel,
			pc->data[i].addr);
		putchar('\n');

	}
	putchar('\n');
}

//查找函数
static int FindEntry(pContact pc, char name[20]){

	assert(pc);
	int i = 0;
	for (i = 0; i < pc->size; i++){
		if (strcmp(pc->data[i].name, name) == 0){
			return i;
		}
	}
	return -1;				//没找到
}

//删除联系人
void DelContact(pContact pc){

	assert(pc);
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	printf("输入删除人名字: ");
	scanf("%s", name);
	//查找
	pos = FindEntry(pc, name);
	//删除
	if (pos != -1){
		for (j = pos; j < pc->size; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->size--;
		printf("删除成功\n");
	}
	else
	{
		printf("删除的人不存在\n");
	}
}


//查找联系人
void SearchContact(pContact pc){

	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("输入查找人名字： ");
	scanf("%10s", name);
	int pos = 0;
	pos = FindEntry(pc, name);
	if (pos != -1)
	{
		printf("%10s\t%10s\t%4s\t%12s\t%30s\t", "name", "sex", "age", "tel", "addr");
		putchar('\n');
		printf("%10s\t%10s\t%4d\t%12s\t%30s\t",
			pc->data[pos].name,
			pc->data[pos].sex,
			pc->data[pos].age,
			pc->data[pos].tel,
			pc->data[pos].addr);
	}
	else{
		printf("查找人不存在");
	}
	putchar('\n');
}



//修改联系人
void ModifyContact(pContact pc){

	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("输入修改人名字");
	scanf("%s", name);
	//查找
	int pos = 0;
	pos = FindEntry(pc, name);
	if (pos != -1)
	{
		printf("请输入姓名：");
		scanf("%s", pc->data[pos].name);
		printf("请输入性别: ");
		scanf("%s", pc->data[pos].sex);
		printf("请输入年龄: ");
		scanf("%d", &pc->data[pos].age);
		printf("请输入电话: ");
		scanf("%s", pc->data[pos].tel);
		printf("请输入地址: ");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
	else{
		printf("要修改的人不存在\n");
	}
}


//按名字排序
void SortContact(pContact pc){

	assert(pc);
	int i, j = 0;
	int flag = 0;
	for (i = 0; i < pc->size - 1; i++)
	{
		for (j = 0; j < pc->size - i - 1; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag = 0)
		{
			break;
		}
	}
	printf("排序成功");
}

//保存元素
void SaveContact(pContact pc){

	int i = 0;
	FILE* pf = fopen("F:/比特科技/C语言课件V3/进阶/contact.dat", "w");
	if (pf = NULL){
		perror("open file for write");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < pc->size; i++){
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

//初始化加载已存在函数
void LoadContact(pContact pc){
	PeoInfo tmp = { 0 };
	FILE* pf = fopen("F:/比特科技/C语言课件V3/进阶/contact.dat","rb");
	if (pf == NULL)
	{
		perror("use fopen for read");
		exit(EXIT_FAILURE);
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		if (CheckCapacity(pc) != NULL){
			pc->data[pc->size] = tmp;
			pc->size++;
		}
	}
	fclose(pf);
	pf = NULL;
}


//清空通讯录
void EmptyContact(pContact pc){

	pc->size = 0;
	printf("通讯录已清空\n");
}