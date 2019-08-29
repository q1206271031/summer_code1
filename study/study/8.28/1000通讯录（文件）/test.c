#include"test.h"

//��ʼ��
void InitContact(pContact pc){

	pc->size = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
	LoadContact(pc);
}

//����ͨѶ¼
void DestroyContact(pContact pc){
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->size = 0;
}

//����Ƿ�����
void* CheckCapacity(pContact pc){
	if (pc->capacity == pc->size){
		PeoInfo* tmp = (PeoInfo*)(realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo)));
		if (tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
			return pc->data;
		}
		return NULL;
	}
	return pc->data;
}



//�����ϵ��
void AddContact(pContact pc){

	assert(pc);
	if (CheckCapacity(pc) == NULL){
		return;
	}
	printf("����������: ");
	scanf("%s", pc->data[pc->size].name);
	printf("�������Ա�: ");
	scanf("%s", pc->data[pc->size].sex);
	printf("����������: ");
	scanf("%d", &pc->data[pc->size].age);
	printf("������绰: ");
	scanf("%s", pc->data[pc->size].tel);
	printf("�������ַ: ");
	scanf("%s", pc->data[pc->size].addr);

	pc->size++;





	/*if (pc->size == MAX){
		printf("ͨѶ¼�Ѿ�����\n");
	}
	int i = 0;
	FILE* pf = fopen("F:/���ؿƼ�/C���Կμ�V3/����/contact.dat", "w");
	for (i = 0; i < pc->size; i++){
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
*/

	

}

//��ʾͨѶ¼����
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

//���Һ���
static int FindEntry(pContact pc, char name[20]){

	assert(pc);
	int i = 0;
	for (i = 0; i < pc->size; i++){
		if (strcmp(pc->data[i].name, name) == 0){
			return i;
		}
	}
	return -1;				//û�ҵ�
}

//ɾ����ϵ��
void DelContact(pContact pc){

	assert(pc);
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	printf("����ɾ��������: ");
	scanf("%s", name);
	//����
	pos = FindEntry(pc, name);
	//ɾ��
	if (pos != -1){
		for (j = pos; j < pc->size; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->size--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("ɾ�����˲�����\n");
	}
}


//������ϵ��
void SearchContact(pContact pc){

	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������������֣� ");
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
		printf("�����˲�����");
	}
	putchar('\n');
}



//�޸���ϵ��
void ModifyContact(pContact pc){

	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("�����޸�������");
	scanf("%s", name);
	//����
	int pos = 0;
	pos = FindEntry(pc, name);
	if (pos != -1)
	{
		printf("������������");
		scanf("%s", pc->data[pos].name);
		printf("�������Ա�: ");
		scanf("%s", pc->data[pos].sex);
		printf("����������: ");
		scanf("%d", &pc->data[pos].age);
		printf("������绰: ");
		scanf("%s", pc->data[pos].tel);
		printf("�������ַ: ");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
	else{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
}


//����������
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
	printf("����ɹ�");
}

//����Ԫ��
void SaveContact(pContact pc){

	int i = 0;
	FILE* pf = fopen("F:/���ؿƼ�/C���Կμ�V3/����/contact.dat", "w");
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

//��ʼ�������Ѵ��ں���
void LoadContact(pContact pc){
	PeoInfo tmp = { 0 };
	FILE* pf = fopen("F:/���ؿƼ�/C���Կμ�V3/����/contact.dat","rb");
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


//���ͨѶ¼
void EmptyContact(pContact pc){

	pc->size = 0;
	printf("ͨѶ¼�����\n");
}