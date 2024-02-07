/*69강*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int funcNumber;
//	int num1, num2;
//
//	int (*fp)(int, int) = NULL;
//
//	printf("함수 번호와 계산할 값을 입력하세요: ");
//	scanf("%d %d %d", &funcNumber, &num1, &num2);
//
//	switch (funcNumber)
//	{
//	case 0:
//		fp = add;
//		break;
//	case 1:
//		fp = sub;
//		break;
//	case 2:
//		fp = mul;
//		break;
//	case 3:
//		fp = div;
//		break;
//	}
//
//	printf("%d\n", fp(num1, num2));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int funcNumber;
//	int num1, num2;
//	int (*fp[4])(int, int);
//
//	fp[0] = add;
//	fp[1] = sub;
//	fp[2] = mul;
//	fp[3] = div;
//
//	printf("함수 번호와 계산할 값을 입력하세요: ");
//	scanf("%d %d %d", &funcNumber, &num1, &num2);
//
//	printf("%d\n", fp[funcNumber](num1, num2));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Calc {
//	int (*fp)(int, int);
//};
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	struct Calc c;
//
//	c.fp = add;
//
//	printf("%d\n", c.fp(10, 20));
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
//void executer(int (*fp)(int, int))
//{
//	printf("%d\n", fp(10, 20));
//}
//
//int main()
//{
//	executer(add);
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
//int (*gettAdd())(int, int)
//{
//	return add;
//}
//
//int main()
//{
//	printf("%d\n", gettAdd()(10, 20));
//
//	return 0;
//}
//
//int (*getAdd(int x, int y))(int, int)
//{
//	printf("%d %d", x, y);
//	return add;
//}
//
//int main()
//{
//	printf("%d\n", getAdd(8, 9)(10, 20));
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
//typedef int (*FP)(int, int);
//
//FP getAdd()
//{
//	return add;
//}
//
//int main()
//{
//	printf("%d\n", getAdd()(10, 20));
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
//typedef int (*FP)(int, int);
//
//struct Calc {
//	FP fp;
//};
//
//void executer(FP fp)
//{
//	printf("%d\n", fp(70, 80));
//}
//
//int main()
//{
//	FP fp1;
//	fp1 = add;
//	printf("%d\n", fp1(10, 20));
//
//	FP fp[10];
//	fp[0] = add;
//	printf("%d\n", fp[0](30, 40));
//
//	struct Calc c;
//	c.fp = add;
//	printf("%d\n", c.fp(50, 60));
//
//	executer(add);
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
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//struct Calc {
//	int(*fp[2])(int, int);
//};
//
//int executer(int (*fp)(int, int), int a, int b)
//{
//	return fp(a, b);
//}
//
//int (*getFunc(struct Calc *c, int index))(int, int)
//{
//	return c->fp[index];
//}
//
//int main()
//{
//	struct Calc c = { { add, sub} };
//
//	printf("%d\n", executer(getFunc(&c, 0), 10, 20));
//	printf("%d\n", executer(getFunc(&c, 1), 10, 20));
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct Person
//{
//	char name[30];
//	int age;
//	void (*print)(struct Person*);
//};
//
//void print(struct Person* p)
//{
//	printf("%s %d\n", p->name, p->age);
//}
//
//void executer(void (*fp[])(struct Person*), struct Person p[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		fp[i](&p[i]); // fp라는 함수포인터에 인자로 &p를 던져야함
//	}
//}
//
//void (*getPrintFunc(struct Person *p))(struct Person*)
//{
//	return p->print;
//}
//
//int main()
//{
//	struct Person p[3];
//	p[0].print = print;
//	p[1].print = print;
//	p[2].print = print;
//
//	scanf("%s %d %s %d %s %d"
//		, p[0].name, &p[0].age
//		, p[1].name, &p[1].age
//		, p[2].name, &p[2].age);
//
//	void (*fp[3])(struct Person*);
//
//	for (int i = 0
//		; i < sizeof(p) / sizeof(struct Person)
//		; i++)
//	{
//		fp[i] = getPrintFunc(&p[i]);
//	}
//
//	executer(fp, p, sizeof(p) / sizeof(struct Person));
//
//	return 0;
//}

/* 70강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("hello.txt", "w");
//
//	fprintf(fp, "%s %d\n", "Hello", 100);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//	int num1;
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	fscanf(fp, "%s %d", s1, &num1);
//
//	printf("%s %d\n", s1, num1);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("hello.txt", "w");
//
//	fputs("Hello, world!", fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* s1 = "Hello, world!";
//
//	FILE* fp = fopen("hello.txt", "w");
//
//	fwrite(s1, strlen(s1), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char buffer[5];
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	fgets(buffer, sizeof(buffer), fp);
//
//	printf("%s\n", buffer);
//
//	fclose(fp);
//
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char buffer[20] = { 0, };
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	fread(buffer, sizeof(buffer), 1, fp);
//	printf("%s\n", buffer);
//
//	fclose(fp);
//
//	return 0;
//
//	fprintf()
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[20] = "안녕하세요.";
//
//	FILE* fp = fopen("hello.txt", "w");
//
//	fwrite(s1, strlen(s1), 1, fp);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1, c2;
//	int x, y;
//
//	FILE* fp = fopen("position.txt", "r");
//
//	fscanf(fp, "%c %d %c %d", &c1, &x, &c2, &y);
//
//	printf("%d %d\n", x, y);
//
//	fclose(fp);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char name[31];
//	int order;
//
//	scanf("%s %d", name, &order);
//
//	FILE* fp = stdout;
//
//	fprintf(fp, "The %dth Satellite of Jupiter: %s", order, name);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* buffer = malloc(100);
//	memset(buffer, 0, 100);
//
//	FILE* fp = fopen("words.txt", "r");
//
//	fread(buffer, 100, 1, fp);
//
//	printf("%s\n", buffer);
//	
//	fclose(fp);
//
//	free(buffer);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int size;
//	FILE* fp = fopen("hello.txt", "r");
//
//	fseek(fp, 0, SEEK_END);
//	size = ftell(fp);
//
//	printf("%d\n", size);
//
//	fclose(fp);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* buffer;
//	int size;
//	int count;
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	fseek(fp, 0, SEEK_END);
//	size = ftell(fp);
//
//	buffer = malloc(size + 1);
//	memset(buffer, 0, size + 1);
//
//	fseek(fp, 0, SEEK_SET);
//	count = fread(buffer, size, 1, fp);
//
//	printf("%s size: %d, count: %d\n", buffer, size, count);
//
//	fclose(fp);
//
//	free(buffer);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buffer[10] = { 0, };
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	fseek(fp, 2, SEEK_SET);
//	fread(buffer, 3, 1, fp);
//
//	printf("%s\n", buffer);
//
//	memset(buffer, 0, 10);
//
//	fseek(fp, 3, SEEK_CUR);
//	fread(buffer, 4, 1, fp);
//
//	printf("%s\n", buffer);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* s1 = "abcd";
//	char buffer[20] = { 0, };
//
//	FILE* fp = fopen("hello.txt", "r+");
//
//	fseek(fp, 3, SEEK_SET);
//	fwrite(s1, strlen(s1), 1, fp);
//
//	rewind(fp);
//	fread(buffer, 20, 1, fp);
//
//	printf("%s\n", buffer);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buffer[5] = { 0, };
//	int count = 0;
//	int total = 0;
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	while (feof(fp) == 0)
//	{
//		count = fread(buffer, sizeof(char), 4, fp);
//		printf("%s", buffer);
//		memset(buffer, 0, 5);
//		total += count;
//	}
//
//	printf("\ntotal: %d\n", total);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int getFileSize(FILE* fp)
//{
//	int size;
//	int currPos = ftell(fp);
//
//	fseek(fp, 0, SEEK_END);
//	size = ftell(fp);
//
//	fseek(fp, currPos, SEEK_SET);
//
//	return size;
//}
//
//int main()
//{
//	char* buffer;
//	int size;
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	size = getFileSize(fp);
//	buffer = malloc(size + 1);
//	memset(buffer, 0, size + 1);
//
//	fread(buffer, size, 1, fp);
//	printf("%s\n", buffer);
//
//	fclose(fp);
//	
//	free(buffer);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int readData(char* buffer, int offset, int size, FILE* fp)
//{
//	int count;
//
//	if (feof(fp) == 1)
//		return 0;
//
//	fseek(fp, offset, SEEK_SET);
//	count = fread(buffer, 1, size, fp);
//
//	return count;
//}
//
//int main()
//{
//	char buffer[10] = { 0, };
//
//	int count;
//
//	FILE* fp = fopen("hello.txt", "r");
//	
//	count = readData(buffer, 9, 3, fp);
//
//	printf("%s, count: %d\n", buffer, count);
//
//	fclose(fp);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int count;
//	char buffer[5] = { 0, };
//
//	FILE* src = fopen("hello.txt", "r");
//	FILE* dest = fopen("hello2.txt", "w");
//
//	while (feof(src) == 0)
//	{
//		count = fread(buffer, sizeof(char), 4, src);
//		printf("%s", buffer);
//		fwrite(buffer, sizeof(char), count, dest);
//		memset(buffer, 0, 5);
//	}
//
//	fclose(dest);
//	fclose(src);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int getFileSize(FILE* fp)
//{
//	int size;
//	int currPos = ftell(fp);
//
//	fseek(fp, 0, SEEK_END);
//	size = ftell(fp);
//
//	fseek(fp, currPos, SEEK_SET);
//
//	return size;
//}
//
//char* getData(int offset, int size, int* count, FILE* fp)
//{
//	char *buffer = malloc(size + 1);
//	memset(buffer, 0, size + 1);
//
//	fseek(fp, 0, SEEK_SET);
//
//	*count = fread(buffer, sizeof(char), size + 1, fp);
//	return buffer;
//}
//
//int main()
//{
//	char* buffer;
//	int size;
//	int count;
//
//	FILE* fp = fopen("hello.txt", "r");
//
//	size = getFileSize(fp);
//	buffer = getData(0, size, &count, fp);
//
//	printf("%s\n", buffer);
//	printf("%d", count);
//
//	fclose(fp);
//
//	free(buffer);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* buffer = malloc(7);
//	memset(buffer, 0, 7);
//	FILE* fp = fopen("words.txt", "r");
//	fseek(fp, 7, SEEK_SET);
//
//	fread(buffer, 1, 4, fp);
//
//	rewind(fp);
//
//	fseek(fp, -6, SEEK_END);
//
//	fread(buffer + 4, 1, 2, fp);
//
//	printf("%s", buffer);
//
//	fclose(fp);
//	free(buffer);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int file_size;

	FILE* fp = fopen("words.txt", "r");

	fseek(fp, 0, SEEK_END);
	file_size = ftell(fp);
	rewind(fp);

	char* buffer = malloc(file_size + 1);
	memset(buffer, 0, file_size + 1);

	for (int i = file_size - 1
		; i >= 0
		; i--)
	{
	
		fseek(fp, i, SEEK_SET);
		fread(buffer+(file_size - 1 - i), sizeof(char), 1, fp);
	}

	fclose(fp);


	fwrite(buffer, file_size, 1, stdout);
	//printf("%d\n", file_size);

	free(buffer);

	return 0;

}
