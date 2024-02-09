/* 72강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#pragma pack(push, 1)
//struct Data
//{
//	short num1;
//	short num2;
//	short num3;
//	short num4;
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct Data d1;
//	d1.num1 = 100;
//	d1.num2 = 200;
//	d1.num3 = 300;
//	d1.num4 = 400;
//
//	FILE* fp = fopen("data.bin", "wb");
//
//	fwrite(&d1, sizeof(d1), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#pragma pack(push, 1)
//
//struct Data
//{
//	char c1;
//	short num1;
//	int num2;
//	char s1[20];
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct Data d1;
//	memset(&d1, 0, sizeof(d1));
//
//	d1.c1 = 'a';
//	d1.num1 = 32100;
//	d1.num2 = 2100000100;
//	strcpy(d1.s1, "Hello, world!");
//
//	FILE* fp = fopen("data2.bin", "wb");
//
//	fwrite(&d1, sizeof(d1), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#pragma pack(push, 1)
//
//struct Data
//{
//	char c1;
//	short num1;
//	int num2;
//	char s1[20];
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct Data d1;
//
//	FILE* fp = fopen("data2.bin", "rb");
//	fread(&d1, sizeof(d1), 1, fp);
//
//	printf("%c %d %d %s\n", d1.c1, d1.num1, d1.num2, d1.s1);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#pragma pack(push, 1)
//struct Point2D
//{
//	float x;
//	float y;
//};
//
//struct RectangleFileFormat
//{
//	short magic;
//	int version;
//	struct Point2D p1;
//	struct Point2D p2;
//	char desc[30];
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct RectangleFileFormat rf;
//	memset(&rf, 0, sizeof(rf));
//
//	rf.magic = "re";
//	rf.version = 1;
//	rf.p1.x = 4.5f;
//	rf.p1.y = 2.1f;
//	rf.p2.x = 9.2f;
//	rf.p2.y = 8.7f;
//
//	strcpy(rf.desc, "Rectangle File Format");
//
//	FILE* fp = fopen("rect.bin", "wb");
//
//	fwrite(&rf, sizeof(rf), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#pragma pack(push, 1)
//
//struct X820Firmware
//{
//	int serial;
//	char desc[13];
//	short tag;
//	char mode;
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct X820Firmware x1;
//	memset(&x1, 0, sizeof(x1));
//
//	FILE* fp = stdout;
//
//	x1.serial = 1800891002;
//	strcpy(x1.desc, "X820 Firmware");
//	x1.tag = 8512;
//	x1.mode = '-';
//
//	fwrite(&x1, sizeof(x1), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#pragma pack(push, 1)
//struct X850Firmware
//{
//	short serial;
//	char mode;
//	char desc[20];
//	int version;
//};
//
//#pragma pack(pop)
//int main()
//{
//	struct X850Firmware x1;
//
//	FILE* fp = fopen("x850.bin", "rb");
//
//	fread(&x1, sizeof(x1), 1, fp);
//
//	printf("%d\n%c\n%s\n%d", x1.serial, x1.mode, x1.desc, x1.version);
//
//	return 0;
//}

/* 73강 */

//#include <stdio.h>
//
//void bubble_sort(int arr[], int count)
//{
//	int temp;
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };
//
//	bubble_sort(numArr, sizeof(numArr) / sizeof(int));
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numArr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* a, const void* b)
//{
//	int num1 = *(int* )a;
//	int num2 = *(int* )b;
//
//	if (num1 < num2)
//	{
//		return -1;
//	}
//
//	if (num1 > num2)
//	{
//		return 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };
//
//	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numArr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//void bubble_sort(int arr[], int count)
//{
//	int temp;
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };
//
//	bubble_sort(numArr, sizeof(numArr) / sizeof(int));
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numArr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int compare(const void* a, const void* b)
//{
//	char num1 = *(char*)a;
//	char num2 = *(char*)b;
//
//	if (num1 > num2)
//	{
//		return 1;
//	}
//
//	if (num1 < num2)
//	{
//		return -1;
//	}
//
//	return 0;
//
//}
//
//int main()
//{
//	char s1[10][8] = {
//		"india", "delta", "bravo", "kilo", "alfa"
//		, "echo", "hoteml", "juliett", "golf", "charlie"
//	};
//
//	qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%s ", s1[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void bubble_sort(int arr[], int count)
//{
//	int temp;
//
//	for (int i = 0
//		; i < count
//		; i++)
//	{
//		for (int j = 0
//			; j < count - 1
//			; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int numArr[10];
//	
//	scanf("%d %d %d %d %d %d %d %d %d %d"
//		, &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]
//		, &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
//
//	bubble_sort(numArr, sizeof(numArr) / sizeof(int));
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numArr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int compare(const void* a, const void* b)
//{
//	return strcmp((char*)b, (char*)a);
//}
//
//int main()
//{
//	char s1[10][20];
//
//	scanf("%s %s %s %s %s %s %s %s %s %s"
//		, s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8], s1[9]);
//
//	qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%s ", s1[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	struct NODE* next;
//	int data;
//};
//
//int main()
//{
//	struct NODE* head = malloc(sizeof(struct NODE)); // 머리노드는 데이터를 저장하지 않음.
//
//	struct NODE* node1 = malloc(sizeof(struct NODE));
//	head->next = node1; // 머리 노드 다음의 첫번째 노드
//	node1->data = 10; // 첫번째 노드에 10 저장
//
//	struct NODE* node2 = malloc(sizeof(struct NODE));
//	node1->next = node2;
//	node2->data = 20;
//
//	node2->next = NULL; // 다음엔 노드가 존재하지 않음.
//
//	struct NODE* curr = head->next;
//
//	while (curr != NULL)
//	{
//		printf("%d\n", curr->data);
//		curr = curr->next;
//	}
//
//	free(node2);
//	free(node1);
//	free(head);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	struct NODE* next;
//	int data;
//};
//
//void addFirst(struct NODE* target, int data) // 기준 노드 뒤에 노드를 추가하는 함수
//{
//	struct NODE* newNode = malloc(sizeof(struct NODE));
//	newNode->next = target->next; // 새 노드의 다음 노드에 기준 노드의 다음 노드를지정
//	newNode->data = data; // 데이터를 저장
//
//	target->next = newNode;
//}
//
//int main()
//{
//	struct NODE* head = malloc(sizeof(struct NODE));
//
//	head->next = NULL;
//
//	addFirst(head, 10);
//	addFirst(head, 20);
//	addFirst(head, 30);
//
//	struct NODE* curr = head->next;
//	while (curr != NULL)
//	{
//		printf("%d\n", curr->data);
//		curr = curr->next;
//	}
//
//	curr = head->next;
//
//	while (curr != NULL)
//	{
//		struct NODE* next = curr->next;
//		free(curr);
//		curr = next;
//	}
//
//	free(head);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	struct NODE* next;
//	int data;
//};
//
//void addFirst(struct NODE* target, int data)
//{ 
//	struct NODE* newNode = malloc(sizeof(struct NODE));
//	newNode->next = target->next;
//	newNode->data = data;
//
//	target->next = newNode;
//}
//
//void removeFirst(struct NODE* target)
//{
//	struct NODE* removeNode = target->next;
//	target->next = removeNode->next;
//
//	free(removeNode);
//}
//
//int main()
//{
//	struct NODE* head = malloc(sizeof(struct NODE));
//
//	head->next = NULL;
//
//	addFirst(head, 10);
//	addFirst(head, 20);
//	addFirst(head, 30);
//
//	removeFirst(head);
//
//	struct NODE* curr = head->next;
//
//	while (curr != NULL)
//	{
//		printf("%d\n", curr->data);
//		curr = curr->next;
//	}
//
//	curr = head->next;
//
//	while (curr != NULL)
//	{
//		struct NODE* next = curr->next;
//
//		free(curr);
//
//		curr = next;
//
//	}
//
//	free(head);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	struct NODE* next;
//	int data;
//};
//
//void addFirst(struct NODE* target, int data)
//{
//	struct NODE* newNode = malloc(sizeof(struct NODE));
//	newNode->next = target->next;
//	newNode->data = data;
//
//	target->next = newNode;
//}
//
//struct NODE* findNode(struct NODE* node, int data)
//{
//	if (node == NULL)
//		return NULL;
//
//	struct NODE* curr = node->next;
//	
//	while (curr != NULL)
//	{
//		if (curr->data == data)
//		{
//			return curr;
//		}
//
//		curr = curr->next;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	struct NODE* head = malloc(sizeof(struct NODE));
//	head->next = NULL;
//
//	addFirst(head, 10);
//	addFirst(head, 20);
//	addFirst(head, 30);
//
//	struct NODE* found = findNode(head, 20);
//	printf("%d\n", found->data);
//
//	struct NODE* curr = head->next;
//	while (curr != NULL)
//	{
//		struct NODE* next = curr->next;
//		free(curr);
//		curr = next;
//	}
//
//	free(head);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE* next;
	int data;
};

void addFirst(struct NODE* target, int data)
{
	struct NODE* newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;
	target->next = newNode;
}

void removeNode(struct NODE* node, int data)
{
	struct NODE* curr = node;
	struct NODE* prev = NULL;

	while (curr != NULL)
	{
		if (curr->data == data)
		{
			prev->next = curr->next;
			free(curr);
			return;
		}

		prev = curr;
		curr = curr->next;
	}
}

//void removeFirst(struct NODE* target)
//{
//	struct NODE* removeNode = target->next;
//	target->next = removeNode->next;
//
//	free(removeNode);
//}


int main()
{
	int numArr[10] = { 0, };
	int removeNum;

	scanf("%d %d %d %d %d %d %d %d %d %d"
		, &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]
		, &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);

	scanf("%d", &removeNum);

	struct NODE* head = malloc(sizeof(struct NODE));
	head->next = NULL;

	for (int i = 0; i < 10; i++)
	{
		addFirst(head, numArr[i]);
	}

	removeNode(head, removeNum);

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("%d ", curr->data);
		curr = curr->next;
	}

	curr = head->next;

	while (curr != NULL)
	{
		struct NODE* next = curr->next;
		free(curr);
		curr->next;
	}

	free(head);

	return 0;

}