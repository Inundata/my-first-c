/* 61강 */

//#include <stdio.h>
//
//int one()
//{
//	return 1;
//}
//
//int main()
//{
//	int num1;
//
//	num1 = one();
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//float realNumber()
//{
//	return 1.234567f;
//}
//
//bool truth()
//{
//	return true;
//}
//
//int main()
//{
//	float num1;
//	bool b1;
//
//	num1 = realNumber();
//	b1 = truth();
//
//	printf("%f\n", num1);
//	printf("%d\n", b1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int* ten()
//{
//	int num1 = 10;
//
//	return &num1;
//}
//
//int main()
//{
//	int* numPtr;
//
//	numPtr = ten();
//
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int* ten()
//{
//	int* numPtr = malloc(sizeof(int));
//
//	*numPtr = 10;
//
//	return numPtr;
//}
//
//int main()
//{
//	int* numPtr;
//
//	numPtr = ten();
//
//	printf("%d\n", *numPtr);
//
//	free(numPtr);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* helloLiteral()
//{
//	char* s1 = "Hello, world!";
//
//	return s1;
//}
//
//char* hellpDynamicMemory()
//{
//	char* s1 = malloc(sizeof(char) * 20);
//
//	strcpy(s1, "Hello, world!");
//
//	return s1;
//}
//
//int main()
//{
//	char* s1;
//	char* s2;
//
//	s1 = helloLiteral();
//	s2 = hellpDynamicMemory();
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void* allocMemeory()
//{
//	void* ptr = malloc(100);
//
//	return ptr;
//}
//
//int main()
//{
//	char* s1 = allocMemeory();
//	strcpy(s1, "Hello, world!\n");
//	printf("%s\n", s1);
//	free(s1);
//
//	int* numPtr1 = allocMemory();
//	numPtr1[0] = 10;
//	numPtr1[1] = 20;
//
//	printf("%d %d \n", numPtr1[0], numPtr1[1]);
//	free(numPtr1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//struct Person getPerson()
//{
//	struct Person p;
//
//	strcpy(p.name, "홍길동");
//	p.age = 30;
//	strcpy(p.address, "서울시 용산구 한남동");
//
//	return p;
//}
//
//int main()
//{
//	struct Person p1;
//	p1 = getPerson();
//
//	printf("이름: %s\n", p1.name);
//	printf("나이: %d\n", p1.age);
//	printf("주소: %s\n", p1.address);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//struct Person* allocPerson()
//{
//	struct Person* p = malloc(sizeof(struct Person));
//
//	strcpy(p->name, "홍길동");
//	p->age = 30;
//	strcpy(p->address, "서울시 용산구 한남동");
//
//	return p;
//}
//
//int main()
//{
//	struct Person* p1;
//
//	p1 = allocPerson();
//
//	printf("이름: %s\n", p1->name);
//	printf("나이: %d\n", p1->age);
//	printf("주소: %s\n", p1->address);
//
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int getMana()
//{
//	return 22;
//}
//
//float getAttackSpeed()
//{
//	return 0.679f;
//}
//
//bool isMelee()
//{
//	return true;
//}
//
//int main()
//{
//	int mana;
//	float attackSpeed;
//	bool melee;
//
//	mana = getMana();
//	attackSpeed = getAttackSpeed();
//	melee = isMelee();
//
//	printf("%d\n", mana);
//	printf("%f\n", attackSpeed);
//	printf("%d\n", melee);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* getName()
//{
//	char* str = malloc(sizeof(char) * 20);
//	strcpy(str, "Mars");
//	
//	return str;
//}
//
//int main()
//{
//	char* name;
//	name = getName();
//	printf("%s\n", name);
//
//	free(name);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void* allocMemory()
//{
//	char* ptr = malloc(sizeof(char) * 30);
//
//	return ptr;
//}
//
//int main()
//{
//	char* s1;
//	s1 = allocMemory();
//	strcpy(s1, "Uranus");https://dojang.io/mod/page/view.php?id=536
//	printf("%s\n", s1);
//
//	free(s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//};
//
//struct Person* allocPerson()
//{
//	struct Person* p = malloc(sizeof(struct Person));
//
//	strcpy(p->name, "Kayle");
//	p->age = 22;
//
//	return p;
//}
//
//int main()
//{
//	struct Person* p1;
//
//	p1 = allocPerson();
//
//	printf("%s\n", p1->name);
//	printf("%d\n", p1->age);
//
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//float getArmor()
//{
//	return 20.5f;
//}
//
//bool hasSlowSkill()
//{
//	return false;
//}
//
//int main()
//{
//	float armor;
//	bool slow;
//
//	armor = getArmor();
//	slow = hasSlowSkill();
//
//	printf("%f\n", armor);
//	printf("%s\n", slow == true ? "true" : "false");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* getName()
//{
//	char* name = malloc(sizeof(char) * 30);
//
//	strcpy(name, "Neptune");
//
//	return name;
//}
//
//int main()
//{
//	char* name;
//	name = getName();
//	printf("%s\n", name);
//
//	free(name);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void* allocMemory()
//{
//	return malloc(100);
//}
//
//int main()
//{
//	char* name;
//	float* stats;
//
//	name = allocMemory();
//	strcpy(name, "Mercury");
//	printf("%s\n", name);
//	free(name);
//
//	stats = allocMemory();
//	stats[0] = 87.969f;
//	stats[1] = 115.8776f;
//	printf("%f %fn", stats[0], stats[1]);
//	free(stats);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//struct Point2D* allocPoint2D()
//{
//
//	struct Point2D* p = malloc(sizeof(struct Point2D));
//
//	p->x = 90;
//	p->y = 75;
//
//	return p;
//
//}
//
//int main()
//{
//	struct Point2D* pos1;
//	pos1 = allocPoint2D();
//
//	printf("%d %d\n", pos1->x, pos1->y);
//
//	free(pos1);
//
//	return 0;
//}

//#include <stdio.h>
//
//void helloNumber(int num1)
//{
//	printf("Hello, %d\n", num1);
//}
//
//int main()
//{
//	helloNumber(10);
//	helloNumber(20);
//
//	return 0;
//}

//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int num1;
//
//	num1 = add(10, 20);
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int num1;
//	num1 = add(10, 20);
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//char setAttackSpeed(float a)
//{
//	return printf("Attack Speed: %f\n", a);
//}
//
//int main()
//{
//	setAttackSpeed(0.638f);
//	setAttackSpeed(1.23f);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//long long add(long long num1, long long  num2)
//{
//	return num1 + num2;
//}
//
//int main()
//{
//	long long num1, num2;
//
//	scanf("%lld %lld", &num1, &num2);
//
//	printf("%lld\n", add(num1, num2));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point3D
//{
//	float x;
//	float y;
//	float z;
//};
//
//struct Point3D* allocPoint3D(float x, float y, float z)
//{
//	struct Point3D* p = malloc(sizeof(struct Point3D));
//
//	p->x = x;
//	p->y = y;
//	p->z = z;
//
//	return p;
//}
//
//int main()
//{
//	float x, y, z;
//	struct Point3D* pos1;
//
//	scanf("%f %f %f", &x, &y, &z);
//
//	pos1 = allocPoint3D(x, y, z);
//
//	printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);
//
//	free(pos1);
//
//	return 0;
//}

/* 63강 */

//#include <stdio.h>
//
//void swapNumber(int first, int second)
//{
//	int temp;
//
//	temp = first;
//	first = second;
//	second = temp;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	swapNumber(num1, num2);
//
//	printf("%d %d\n", num1, num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//void swapNumber(int* first, int* second)
//{
//	int temp;
//	temp = *first;
//	*first = *second;
//	*second = temp;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	swapNumber(&num1, &num2);
//
//	printf("%d %d\n", num1, num2);
//	
//	return 0;
//}

//#include <stdio.h>
//
//enum TYPE
//{
//	TYPE_CHAR
//	, TYPE_INT
//	, TYPE_FLOAT
//};
//
//void swapValue(void* ptr1, void* ptr2, enum TYPE t)
//{
//	switch (t)
//	{
//		case TYPE_CHAR:
//		{
//			char temp;
//			temp = *(char*)ptr1;
//			*(char*)ptr1 = *(char*)ptr2;
//			*(char*)ptr2 = temp;
//			break;
//		}
//
//		case TYPE_INT:
//		{
//			int temp;
//			temp = *(int*)ptr1;
//			*(int*)ptr1 = *(int*)ptr2;
//			*(int*)ptr2 = temp;
//			break;
//		}
//	
//		case TYPE_FLOAT:
//		{
//			float temp;
//			temp = *(float*)ptr1;
//			*(float*)ptr1 = *(float*)ptr2;
//			*(float*)ptr2 = temp;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//	swapValue(&c1, &c2, TYPE_CHAR);
//	printf("%c %c\n", c1, c2);
//
//	int num1 = 10;
//	int num2 = 20;
//	swapValue(&num1, &num2, TYPE_INT);
//	printf("%d %d\n", num1, num2);
//
//	float num3 = 1.234567f;
//	float num4 = 7.654321f;
//	swapValue(&num3, &num4, TYPE_FLOAT);
//	printf("%f %f\n", num3, num4);
//
//	return 0;
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void allocMemory(void** ptr, int size)
//{
//	*ptr = malloc(size);
//}
//
//int main()
//{
//	long long* numPtr;
//
//	allocMemory((void**)&numPtr, sizeof(long long));
//
//	*numPtr = 10;
//	printf("%lld\n", *numPtr);
//
//	free(numPtr);
//
//	return 0;
//}

//#include <stdio.h>

//void helloString(char* s1)
//{
//	printf("Hello, %s\n", s1);
//}
//
//
//int main()
//{
//	helloString("world!\n");
//
//	return 0;
//}

//void helloInt(int* d1)
//{
//    printf("Hello, %d\n", *d1);
//}
//
//int main() {
//    int myNumber = 42;
//    helloInt(&myNumber);
//    return 0;
//}

//#include <stdio.h>
//
//void helloString(char* s1)
//{
//	printf("Hello, %s\n", s1);
//}
//
//int main()
//{
//	char s1[10] = "world!";
//
//	helloString(s1);
//
//	return 0;
//}

//#include <stdio.h>
//
//void helloString(char s1[])
//{
//	printf("Hello %s\n", s1);
//}
//
//int main()
//{
//	char s1[10] = "world!";
//
//	helloString(s1);
//	helloString("world!");
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int getNumber(int* a, int* b)
//{
//	*a = 10;
//	*b = 20;
//	return 30;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int result = 0;
//
//	result = getNumber(&num1, &num2);
//
//	printf("%d %d %d\n", num1, num2, result);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void allocMatrix(void*** a, int rows, int columns, int size)
//{
//
//	*a = malloc(sizeof(void*) * rows);
//
//	for (int i = 0
//		; i < rows
//		; i++)
//	{
//		(*a)[i] = malloc(size * columns);
//	}
//}
//
//void freeMatrix(void*** a, int rows)
//{
//	for (int i = 0
//		; i < rows
//		; i++)
//	{
//		free((*a)[i]);
//	}
//
//	free(*a);
//}
//
//int main()
//{
//	short** matrix;
//
//	allocMatrix(&matrix, 3, 3, sizeof(short));
//
//	matrix[0][2] = 10;
//	matrix[1][1] = 20;
//
//	printf("%d %d\n", matrix[0][2], matrix[1][1]);
//
//	freeMatrix(&matrix, 3);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void compareString(char *s1, char *s2)
//{
//	if (strcmp(s1, s2) == 0)
//	{
//		printf("같음\n");
//	}
//	else
//	{
//		printf("다름\n");
//	}
//}
//
//int main()
//{
//	char* s1 = malloc(sizeof(char) * 10);
//
//	strcpy(s1, "Venus");
//
//	compareString(s1, "Venus");
//
//	free(s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int getQuotientAndRemainder(int num1, int num2, int* remainder)
//{
//	
//	int quoitent = num1 / num2;
//
//	*remainder = num1 % num2;
//
//	return quoitent;
//}
//
//int main()
//{
//	int num1;
//	int num2;
//	int quotient;
//	int remainder;
//
//	scanf("%d %d", &num1, &num2);
//
//	quotient = getQuotientAndRemainder(num1, num2, &remainder);
//
//	printf("%d %d\n", quotient, remainder);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void allocArray(void**matrix, int length, int elem_size)
//{
//	*matrix = malloc(length * elem_size);
//
//	return matrix;
//}
//
//int main()
//{
//	long long* numArr1;
//	int *numArr2;
//
//	allocArray((void**)&numArr1, 10, sizeof(long long));
//	allocArray((void**)&numArr2, 3, sizeof(int));
//
//	scanf("%lld %d", &numArr1[9], &numArr2[2]);
//	printf("%lld %d\n", numArr1[9], numArr2[2]);
//
//	free(numArr2);
//	free(numArr1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printFullName(char* s1, char* s2)
//{
//	printf("%s%s", s1, s2);
//}
//
//int main()
//{
//	char familyName[31];
//	char givenName[31];
//
//	scanf("%s %s", familyName, givenName);
//
//	printFullName(familyName, givenName);
//
//	return 0;
//}

//#include <stdio.h>
//
//void printArray(int arr[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//}
//
//int main()
//{
//	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printArray(numArr, sizeof(numArr) / sizeof(int));
//
//	return 0;
//}

//#include <stdio.h>
//
//void setElement(int arr[])
//{
//	arr[2] = 300;
//}
//
//int main()
//{
//	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	setElement(numArr);
//
//	printf("%d\n", numArr[2]);
//
//	return 0;
//}

//#include <stdio.h>
//
//void printArray(int* arr, int count)
//{
//	for (int i = 0
//		; i < count
//		; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//}
//
//int main()
//{
//	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printArray(numArr, sizeof(numArr) / sizeof(int));
//
//	return 0;
//}

//#include <stdio.h>
//
//void swapElement(int arr[], int first, int second)
//{
//	int temp;
//	temp = arr[first];
//	arr[first] = arr[second];
//	arr[second] = temp;
//}
//
//int main()
//{
//	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	swapElement(numArr, 0, 1);
//
//	printf("%d %d\n", numArr[0], numArr[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//void print2DArray(int arr[][5], int col, int row)
//{
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int numArr[2][5] = {
//		{1, 2, 3, 4, 5}
//		, {6, 7, 8, 9, 10}
//	};
//
//	int col = sizeof(numArr[0]) / sizeof(int);
//
//	int row = sizeof(numArr) / sizeof(numArr[0]);
//
//	print2DArray(numArr, col, row);
//
//	return 0;
//}

//#include <stdio.h>
//
//void print2DArray(int(*arr)[5], int col, int row)
//{
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col
//			; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int numArr[2][5] = {
//		{1, 2, 3, 4, 5}
//		, {6, 7, 8, 9, 10}
//	};
//
//	int col = sizeof(numArr[0]) / sizeof(int);
//	int row = sizeof(numArr) / sizeof(numArr[0]);
//
//	print2DArray(numArr, col, row);
//
//	return 0;
//}

//#include <stdio.h>
//
//void setElements(float arr[], int count)
//{
//	for (int i = 0
//		; i < count
//		; i++)
//	{
//		arr[i] = 1.2f;
//	}
//}
//
//int main()
//{
//	float numArr[5];
//
//	setElements(numArr, sizeof(numArr) / sizeof(float));
//
//	for (int i = 0
//		; i < sizeof(numArr) / sizeof(float)
//		; i++)
//	{
//		printf("%f ", numArr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//void setIdentityMatrix(float arr[][4], int dimension)
//{
//	for (int i = 0
//		; i < dimension
//		; i++)
//	{
//		for (int j = 0
//			; j < dimension
//			; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1.0f;
//			}
//
//			else
//			{ }
//		}
//	}
//}
//
//int main()
//{
//	float matrix[4][4] = { 0.0f, };
//
//	int n = sizeof(matrix[0]) / sizeof(float);
//
//	setIdentityMatrix(matrix, n);
//
//	for (int i = 0
//		; i < n
//		; i++)
//	{
//		for (int j = 0
//			; j < n
//			; j++)
//		{
//			printf("%f ", matrix[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int printReverse(int arr[], int dimension)
//{
//	for (int i = dimension - 1
//		; i >= 0
//		; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
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
//	printReverse(numArr, sizeof(numArr) / sizeof(int));
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int transpose(int arr[][4], int dimension)
//{
//	int new_matrix[4][4];
//	for (int j = 0
//		; j < dimension
//		; j++)
//	{
//		for (int i = 0
//			; i < dimension
//			; i++)
//		{
//			new_matrix[i][j] = arr[j][i];
//		}
//
//	}
//
//	for (int i = 0
//		; i < dimension
//		; i++)
//	{
//		for (int j = 0
//			; j < dimension
//			; j++)
//		{
//			arr[i][j] = new_matrix[i][j];
//		}
//	}
//}
//
//
//int main()
//{
//	int matrix[4][4];
//
//	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
//		, &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3]
//		, &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3]
//		, &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3]
//		, &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]);
//
//	int n = sizeof(matrix[0]) / sizeof(int);
//
//	transpose(matrix, n);
//
//	for (int i = 0
//		; i < n
//		; i++)
//	{
//		for (int j = 0
//			; j < n
//			; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//
//		printf("\n");
//	}
//}

/* 65강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//void printPerson(struct Person p)
//{
//	printf("name: %s\n", p.name);
//	printf("age: %d\n", p.age);
//	printf("address: %s\n", p.address);
//}
//
//int main()
//{
//	struct Person p1;
//
//	strcpy(p1.name, "Minho");
//	p1.age = 30;
//	strcpy(p1.address, "Seoul");
//
//	printPerson(p1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//void setPerson(struct Person* p)
//{
//	strcpy(p->name, "Minho");
//	p->age = 40;
//	strcpy(p->address, "Seoul");
//}
//
//int main()
//{
//	struct Person p1;
//
//	strcpy(p1.name, "Hi");
//	p1.age = 20;
//	strcpy(p1.address, "US");
//
//	setPerson(&p1);
//
//	printf("Name: %s\n", p1.name);
//	printf("Age: %d\n", p1.age);
//	printf("Address: %s\n", p1.address);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//void printPoint2D(struct Point2D p)
//{
//	printf("%d %d\n", p.x, p.y);
//}
//
//int main()
//{
//	struct Point2D p1;
//
//	p1.x = 10;
//	p1.y = 20;
//
//	printPoint2D(p1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//void setPoint2D(struct Point2D* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//
//int main()
//{
//	struct Point2D* p1 = malloc(sizeof(struct Point2D));
//
//	setPoint2D(p1, 10, 20);
//
//	printf("%d %d\n", p1->x, p1->y);
//
//	free(p1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//double getDistance(struct Point2D p1, struct Point2D p2)
//{
//	int x1 = p1.x;
//	int y1 = p1.y;
//
//	int x2 = p2.x;
//	int y2 = p2.y;
//
//	double distance = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
//
//	return distance;
//}
//
//int main()
//{
//	struct Point2D p1;
//	struct Point2D p2;
//
//	scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
//
//	printf("%f\n", getDistance(p1, p2));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//void movePoint2D(struct Point2D* p, int offsetX, int offsetY)
//{
//	p->x += offsetX;
//	p->y += offsetY;
//}
//
//int main()
//{
//	struct Point2D p1;
//	int offsetX, offsetY;
//
//	scanf("%d %d %d %d", &p1.x, &p1.y, &offsetX, &offsetY);
//
//	movePoint2D(&p1, offsetX, offsetY);
//
//	printf("%d %d\n", p1.x, p1.y);
//}

/* 66강 */

//#include <stdio.h>
//
//void printNumber(int args, ...)
//{
//	printf("%d ", args);
//}
//
//int main()
//{
//	printNumber(1, 10);
//	printNumber(2, 10, 20);
//	printNumber(3, 10, 20, 30);
//	printNumber(4, 10, 20, 30, 40);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdarg.h>
//
//void printNumbers(int args, ...)
//{
//	va_list ap;
//
//	va_start(ap, args);
//
//	for (int i = 0
//		; i < args
//		; i++)
//	{
//		int num = va_arg(ap, int);
//
//		printf("%d ", num);
//	}
//
//	va_end(ap);
//
//	printf("\n");
//}

//int main()
//{
//	printNumbers(1, 10);
//	printNumbers(2, 10, 20);
//	printNumbers(3, 10, 20, 30);
//	printNumbers(4, 10, 20, 30, 40);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdarg.h>
//
//void printValues(char* types, ...)
//{
//	va_list ap;
//	int i = 0;
//
//	va_start(ap, types);
//
//	while (types[i] != '\0')
//	{
//		switch (types[i])
//		{
//		case 'i':
//			printf("%d ", va_arg(ap, int));
//
//			break;
//
//		case 'd':
//			printf("%f ", va_arg(ap, double));
//
//			break;
//
//		case 'c':
//			printf("%c ", va_arg(ap, char));
//
//			break;
//
//		case 's':
//			printf("%s ", va_arg(ap, char*));
//
//			break;
//
//		default:
//			break;
//		}
//
//		i++;
//	}
//
//	va_end(ap);
//
//	printf("\n");
//}
//
//int main()
//{
//	printValues("i", 10);
//	printValues("ci", 'a', 10);
//	printValues("dci", 1.234567, 'a', 10);
//	printValues("sicd", "Hello, world!", 10, 'a', 1.234567);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdarg.h>
//
//void printStrings(int args, ...)
//{
//	va_list ap;
//
//	va_start(ap, args);
//
//	for (int i = 0
//		; i < args
//		; i++)
//	{
//		char* str = va_arg(ap, char*);
//		printf("%s ", str);
//	}
//
//	va_end(ap);
//
//	printf("\n");
//}
//
//int main()
//{
//	printStrings(2, "C", "Language");
//	printStrings(3, "The", "Little", "Prince");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdarg.h>
//#include <stdlib.h>
//
//long long getSum(char* types, ...)
//{
//	va_list ap;
//	int i = 0;
//	long long result = 0;
//
//	va_start(ap, types);
//
//	while (types[i] != '\0')
//	{	
//		switch (types[i])
//		{
//		case 's':
//			result += atoi(va_arg(ap, char*));
//			break;
//
//		case 'i':
//			result += va_arg(ap, int);
//			break;
//		default:
//			break;
//		}
//		i++;
//	}
//	va_end(ap);
//
//	return result;
//}
//
//int main()
//{
//	printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
//	printf("%lld\n", getSum("ssi", "150", "150", 100));
//
//	return 0;
//}

//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdarg.h>
//
//int sum(int args, ...)
//{
//
//	va_list ap;
//	va_start(ap, args);
//
//	int result = 0;
//
//	for (int i = 0
//		; i < args
//		; i++)
//	{
//		result += va_arg(ap, int);
//	}
//	va_end(ap);
//
//	return result;
//}
//
//int main()
//{
//	int num1, num2;
//	int num3, num4, num5;
//
//	scanf("%d %d", &num1, &num2);
//	scanf("%d %d %d", &num3, &num4, &num5);
//
//	printf("%d\n", sum(2, num1, num2));
//	printf("%d\n", sum(3, num3, num4, num5));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdarg.h>
//
//int getSum(char *types, ...)
//{
//	
//	va_list ap;
//	va_start(ap, types);
//
//	int result = 0;
//	int i = 0;
//	
//	while (types[i] != '\0')
//	{
//		switch (types[i])
//		{
//		case 'i':
//			result += va_arg(ap, int);
//			break;
//
//		case 'd':
//			va_arg(ap, double);
//			break;
//
//		case 's':
//			va_arg(ap, char *);
//			break;
//		}
//		i++;
//	}
//	va_end(ap);
//
//	return result;
//}
//
//int main()
//{
//	int num1, num2, num3;
//
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d\n", getSum("isi", num1, "C", 10));
//	printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
//	printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
//	printf("%d\n", getSum("sidii", "Hello C", num3, 2.234567, 878, 1291));
//
//	return 0;
//}

/* 67강 */

//#include <stdio.h>
//
//void hello(int count)
//{
//	if (count == 0)
//		return;
//	printf("Hello, world! %d\n", count);
//
//	hello(--count);
//}
//
//int main()
//{
//	hello(5);
//	return 0;
//}

//#include <stdio.h>
//
//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//
//	return n * factorial(n - 1);
//}
//
//int main()
//{
//	printf("%d", factorial(5));
//
//	return 0;
//}

//#include <stdio.h>
//
//void printNumber(int count)
//{
//	if (count > 3)
//	{
//		return;
//	}
//
//	printf("%d\n", count);
//
//	printNumber(++count);
//}
//
//int main()
//{
//	int count = 1;
//
//	printNumber(count);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int sum(int n)
//{
//	if (n == 100)
//	{
//		return 100;
//	}
//
//	return n + sum(n+1);
//}
//
//int main()
//{
//	printf("%d\n", sum(1));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fib(int num)
//{
//
//	if (num == 0)
//	{
//		return 0;
//	}
//
//	else if (num == 1)
//	{
//		return 1;
//	}
//
//	else
//	{
//		return fib(num - 1) + fib(num - 2);
//	}
//}
//
//int main()
//{
//	int num1;
//
//	scanf("%d", &num1);
//
//	printf("%d\n", fib(num1));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int sum(int n)
//{
//	if (n == 1)
//		return 1;
//
//	return n + sum(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", sum(n));
//
//	return 0;
//}

/* 68강*/
//#include <stdio.h>
//
//void hello()
//{
//	printf("Hello, world!\n");
//}
//
//int main()
//{
//	printf("%p\n", hello);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//void hello()
//{
//	printf("Hello, world!\n");
//}
//
//void bonjour()
//{
//	printf("bonjour le monde!\n");
//}
//
//int main()
//{
//	void (*fp)();
//
//	fp = hello;
//	fp();
//
//	fp = bonjour;
//	fp();
//
//	return 0;
//}

//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int main()
//{
//	int (*fp)(int, int);
//
//	fp = add;
//	printf("%d\n", fp(10, 20));
//
//	fp = mul;
//	printf("%d\n", fp(10, 20));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void hello()
//{
//	printf("Hello, ");
//}
//
//void numberToString(int n, char* buffer)
//{
//	sprintf(buffer, "%d", n);
//}
//
//int main()
//{
//	void(*fp1)();
//	void(*fp2)(int, char*);
//	char buffer[20];
//
//	fp1 = hello;
//	fp2 = numberToString;
//
//	fp1();
//	fp2(100, buffer);
//	printf("%s\n", buffer);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int* a, int* b)
{
	return *a + *b;
}

int sub(int* a, int* b)
{
	return *a - *b;
}

int mul(int* a, int* b)
{
	return *a * *b;
}

int div(int* a, int* b)
{
	return *a / *b;
}

int main()
{
	char funcName[10];
	int num1, num2;

	scanf("%s %d %d", funcName, &num1, &num2);

	int(*fp)(int*, int*);

	if (strcmp(funcName, "add") == 0)
	{
		fp = add;
	}

	else if (strcmp(funcName, "sub") == 0)
	{
		fp = sub;
	}

	else if (strcmp(funcName, "mul") == 0)
	{
		fp = mul;
	}

	else
	{
		fp = div;
	}

	printf("%d\n", fp(&num1, &num2));
}