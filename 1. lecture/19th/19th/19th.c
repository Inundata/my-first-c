//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//struct Point2D* p1;
//
//void printPoint2D()
//{
//	printf("%d %d\n", p1->x, p1->y);
//}
//
//int main()
//{
//	p1 = malloc(sizeof(struct Point2D));
//	p1->x = 10;
//	p1->y = 20;
//
//	printPoint2D();
//
//	free(p1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
//extern struct Person* p1;
//
//int main()
//{
//	p1 = malloc(sizeof(struct Person));
//
//	strcpy(p1->name, "홍길동");
//	p1->age = 30;
//	strcpy(p1->address, "서울시 용산구 한남동");
//
//	printf("%s %d %s\n", p1->name, p1->age, p1->address);
//	
//	free(p1);
//	
//	return 0;
//}

/* 79강 */

//#include <stdio.h>
//
//int main()
//{
//	auto int num1 = 10;
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//void increaseNumber()
//{
//	static int num1 = 0;
//
//	printf("%d\n", num1);
//
//	num1++;
//}
//
//int main()
//{
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//
//	return 0;
//}

//#include <stdio.h>
//
//extern int num1;
//
//int main()
//{
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//static int num1;
//
//int main()
//{
//	static int num2;
//
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//
//	return 9;
//}

//#include <stdio.h>
//
//static void print()
//{
//	printf("main.c\n");
//}
//
//int main()
//{
//	print();
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int i, j;
//    for (i = 0; i < 1000000; i++)
//    {
//        for (j = 0; j < 10000; j++)
//        {
//        }
//    }
//
//	return 0;
//}

//#include <stdio.h>
//
//int getPowerOf2()
//{
//	static int num1 = 1;
//
//	num1 *= 2;
//
//	return num1;
//}
//
//int main()
//{
//	printf("%d\n", getPowerOf2());
//	printf("%d\n", getPowerOf2());
//	printf("%d\n", getPowerOf2());
//	printf("%d\n", getPowerOf2());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//static bool output = true;
//
//static bool getOutputConfig()
//{
//	return output;
//}
//
//int main()
//{
//	if (getOutputConfig())
//	{
//		printf("The Little Prince\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct Point2D
//{
//	int x, y;
//};
//
//struct Point2D movePoint(int offset)
//{
//
//	static struct Point2D p = { 10, 20 };
//
//	p.x += offset;
//	p.y += offset;
//
//	return p;
//
//}
//
//int main()
//{
//	int num1;
//	struct Point2D p;
//
//	scanf("%d", &num1);
//
//	p = movePoint(num1);
//	printf("%d %d\n", p.x, p.y);
//	
//	p = movePoint(num1);
//	printf("%d %d\n", p.x, p.y);
//	
//	p = movePoint(num1);
//	printf("%d %d\n", p.x, p.y);
//	
//	return 0;
//}

/* 80강 */

