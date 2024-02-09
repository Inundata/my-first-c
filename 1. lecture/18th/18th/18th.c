/* 74강 */

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
//	struct NODE* head = malloc(sizeof(struct NODE));
//
//	struct NODE* node1 = malloc(sizeof(struct NODE));
//	head->next = node1;
//	node1->data = 10;
//
//	struct NODE* node2 = malloc(sizeof(struct NODE));
//	node1->next = node2;
//	node2->data = 20;
//
//	node2->next = NULL;
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
//void addFirst(struct NODE* target, int data)
//{
//	struct NODE* nextNode = malloc(sizeof(struct NODE));
//	nextNode->next = target->next;
//	nextNode->data = data;
//
//	target->next = nextNode;
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
//
//	while (curr != NULL)
//	{
//		printf("%d\n", curr->data);
//		curr = curr->next;
//	}
//
//	curr = head->next;
//	while (curr != NULL)
//	{
//		struct NODE* temp = curr;
//		curr = curr->next;
//		free(temp);
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
//	struct NODE* nextNode = malloc(sizeof(struct NODE));
//	nextNode->next = target->next;
//	nextNode->data = data;
//
//	target->next = nextNode;
//}
//
//void removeFirst(struct NODE* target)
//{
//	struct NODE* removeNode = target->next;
//
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
//		struct NODE* temp = curr;
//		curr = curr->next;
//		free(temp);
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
//struct NODE *findNode(struct NODE* target, int data)
//{
//	struct NODE* foundedNode = target->next;
//
//	while (foundedNode != NULL)
//	{
//		if (foundedNode->data == data)
//		{
//			return foundedNode;
//		}
//
//		foundedNode = foundedNode->next;
//	}
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
//		struct NODE* temp = curr;
//		curr = curr->next;
//		free(temp);
//	}
//
//	free(head);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
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
//	struct NODE* nextNode = malloc(sizeof(struct NODE));
//	nextNode->next = target->next;
//	nextNode->data = data;
//
//	target->next = nextNode;
//}
//
//void removeNode(struct NODE* node, int data)
//{
//	struct NODE* curr = node;
//	struct NODE* prev = NULL;
//
//	while (curr != NULL)
//	{
//		if (curr->data == data)
//		{
//			prev->next = curr->next;
//			free(curr);
//			return;
//		}
//
//		prev = curr;
//		curr = curr->next;
//	}
//}
//
//int main()
//{
//	int numArr[10] = { 0, };
//	int removeNum;
//
//	scanf("%d %d %d %d %d %d %d %d %d %d"
//		, &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]
//		, &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
//
//	scanf("%d", &removeNum);
//
//	struct NODE* head = malloc(sizeof(struct NODE));
//	head->next = NULL;
//
//	for (int i = 0; i < 10; i++)
//	{
//		addFirst(head, numArr[i]);
//	}
//
//	removeNode(head, removeNum);
//
//	struct NODE* curr = head->next;
//	while (curr != NULL)
//	{
//		printf("%d ", curr->data);
//		curr = curr->next;
//	}
//
//	curr = head->next;
//	while (curr != NULL)
//	{
//		struct NODE* temp = curr;
//		curr = curr->next;
//		free(temp);
//	}
//
//	free(head);
//
//	return 0;
//}

/* 75강 */
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		s1[i] = 97 + i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c ", s1[i]);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//#define ARRAY_SIZE 10
//
//int main()
//{
//	char s1[ARRAY_SIZE];
//
//	for (int i = 0; i < ARRAY_SIZE; i++)
//	{
//		s1[i] = 97 + i;
//	}
//
//	for (int i = 0; i < ARRAY_SIZE; i++)
//	{
//		printf("%c ", s1[i]);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//#define COUNT 10
//
//int main()
//{
//	printf("%d\n", COUNT);
//
//#undef COUNT
//#define COUNT 20
//
//	printf("%d\n", COUNT);
//
//	return 0;
//}

//#include <stdio.h>
//
//#define PRINT_NUM(y) printf("%d\n", y)
//
//int main()
//{
//	PRINT_NUM(10);
//
//	PRINT_NUM(20);
//
//	return 0;
//}

//#include <stdio.h>
//
//#define PRINT_NUM3(x) printf("%d\n", x);\
//					printf("%d\n", x+1);\
//					printf("%d\n", x+2);
//
//int main()
//{
//	PRINT_NUM3(10);
//
//	PRINT_NUM3(20);
//
//	return 0;
//}
//
//


//#include <stdio.h>
//
//#define PRINT_NUM3(x) printf("%d\n", x);\
//					printf("%d\n", x+1);\
//					printf("%d\n", x+2);
//
//int main()
//{
//	int num1 = 1;
//
//	if (num1 == 2)
//	{
//		PRINT_NUM3(10);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//#define SWAP(a, b, type) do { \
//    type temp; \
//    temp = a; \
//    a = b; \
//    b = temp; \
//} while (0)
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	SWAP(num1, num2, int);
//
//	printf("%d %d\n", num1, num2);
//
//	float num3 = 1.5f;
//	float num4 = 3.8f;
//
//	SWAP(num3, num4, float);
//	printf("%f %f\n", num3, num4);
//
//	return 0;
//}


//#include <stdio.h>
//
//#define MUL(a, b) a* b
//#define ADD(a, b) a+b
//
//int main()
//{
//	printf("%d\n", MUL(10, 20));
//	printf("%d\n", MUL(1 + 2, 3 + 4));
//
//	printf("%d\n", ADD(1, 2));
//	printf("%d\n", ADD(1, 2) * 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//#define CONCAT(a, b) a##b
//
//int main()
//{
//	printf("%d\n", CONCAT(1, 2));
//
//	return 0;
//}

//#include <stdio.h>
//
//#define EXECUTER(x) hello##x()
//
//void hello1()
//{
//	printf("hello 1\n");
//}
//
//void hello2()
//{
//	printf("hello 2\n");
//}
//
//int main()
//{
//	EXECUTER(1);
//
//	EXECUTER(2);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//#define MIN(a, b) (((a) < (b)) ? (a) : (b))
//#define MAX(a, b) (((a) > (b)) ? (a) : (b))
//
//int main()
//{
//	printf("%d\n", MIN(10, 20));
//	printf("%d\n", MAX(4 & 4, 2 & 2));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point3D
//{
//	float x, y, z;
//};
//
//#define INIT_POINT3D(a, b, c, d) struct Point3D a = {b, c, d}
//
//int main()
//{
//	INIT_POINT3D(p1, 1.0f, 2.0f, 3.0f);
//
//	printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define RGB(r, g, b) ((unsigned int)(r)) | ((unsigned int)(g) << 8) | ((unsigned int)(b) << 16)
//
//
//int main()
//{
//	int r, g, b;
//	scanf("% d % d % d", &r, &g, &b);
//
//	printf("#%06X\n", RGB(r, g, b));
//	printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point2D
//{
//	float x, y;
//};
//
//#define ARRSIZE(a) sizeof(a) / sizeof(a[0])
//
//int main()
//{
//	int numArr1[10];
//	long long numArr2[5];
//	struct Point2D p[3];
//
//	printf("%d\n", ARRSIZE(numArr1));
//	printf("%d\n", ARRSIZE(numArr2));
//	printf("%d\n", ARRSIZE(p));
//
//	return 0;
//}

//#include <stdio.h>
//
//#define DEBUG
//
//int main()
//{
//#ifdef DEBUG
//	printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//
//#define DEBUG_LEVEL 2
//
//int main()
//{
//#if DEBUG_LEVEL >= 2
//	printf("Debug Level 2\n");
//#endif
//
//#if 1
//	printf("1\n");
//#endif
//
//#if 0
//	printf("0\n");
//#endif
//
//	return 9;
//}

//#include <stdio.h>
//
//#define DEBUG
//#define TEST
//
//int main()
//{
//#if (defined DEBUG || defined TEST) && !defined(VERSION_10)
//	printf("Debug\n");
//#endif
//
//	return 9;
//}

//#include <stdio.h>
//
//#define USB
//
//int main()
//{
//#ifdef PS2
//	printf("PS2\n");
//#elif defined USB
//	printf("USB\n");
//#else
//	printf("지원하지 않는 장치입니다.\n");
//#endif
//
//	return 0;
//}
//


//#include <stdio.h>
//
//#define NDEBUG
//
//int main()
//{
//#ifndef DEBUG
//	printf("main function\n");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//#define KO
//#include "message.h"
//
//int main()
//{
//	printf("%s\n", HELLO_MESSAGE);
//
//	return 0;
//}

//#include <stdio.h>
//#define DEBUG_LEVEL 2
//#define DEBUG 1
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//	
//#if DEBUG_LEVEL >= 2 && defined DEBUG
//	char residentRegistrationNumber[15];
//#endif
//};
//
//int main()
//{
//	struct Person p1 = {
//		"홍길동"
//		, 30
//		, "서울시 용산구 한남동"
//		,
//#if DEBUG_LEVEL >= 2 && defined DEBUG
//		"860821-1326821"
//#endif
//	};
//
//#if DEBUG_LEVEL >=2 && defined DEBUG
//	printf("%s %d %s %s\n", p1.name, p1.age, p1.address, p1.residentRegistrationNumber);
//#else
//	printf("%s %d %s\n", p1.name, p1.age, p1.address);
//#endif
//
//	return 0;
//}
//
//#include <stdio.h>
//
//#ifndef DEBUG
//#define DEBUG
//#endif
//
//#include "debug.h"
//
//int main()
//{
//#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
//	printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//
//#define LINUX
//
//#define PLATFORM_UNKNOWN 0
//#define PLATFORM_IOS 1
//#define PLATFORM_ANDROID 2
//#define PLATFORM_WIN32 3
//#define PLATFORM_LINUX 4
//#define PLATFORM_MAC 5
//
//#if defined(IOS)
//#define TARGET_PLATFORM PLATFORM_IOS
//#endif
//
//#if defined(ANDRIOD)
//#define TARGET_PLATFORM PLATFORM_ANDROID
//#endif
//
//#if defined(WIN32) && defined(_WINDOWS)
//#define TARGET_PLATFORM PLATFORM_WIN32
//#endif
//
//#if defined(LINUX)
//#define TARGET_PLATFORM PLATFORM_LINUX
//#endif
//
//#if defined(MAC)
//#define TARGET_PLATFORM PLATFORM_MAC
//#endif
//
//#if TARGET_PLATFORM == PLATFORM_LINUX
//#define printf printf
//#define fprint fprintf
//#else
//#define printf
//#define fprintf
//#endif
//
//int main()
//{
//	printf("OS: Linux\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//#define printf
//#define fprintf
//
//#define ANDROID
//#define MOBILE
//#include "platform.h"
//
//int main()
//{
//	printf("OS: Android\n");
//
//	return 0;
//}


/* 78강 */

//#include <stdio.h>
//
//int num1 = 10;
//
//void printGlobal()
//{
//	printf("%d\n", num1);
//}
//
//int main()
//{
//	printf("%d\n", num1);
//
//	num1 = 20;
//
//	printGlobal();
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int num1;
//
//int main()
//{
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point2D {
//    int x;
//    int y;
//};
//
//struct Point2D p1 = { 10, 20 };
//
//void printPoint2D()
//{
//    printf("%d %d\n", p1.x, p1.y);
//}
//
//int main()
//{
//    printf("%d %d\n", p1.x, p1.y);
//
//    p1.x = 30;
//    p1.y = 40;
//    printPoint2D();
//
//    return 0;
//}

