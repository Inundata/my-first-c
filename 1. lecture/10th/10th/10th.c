/* 26강 */

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	scanf("%d", &num1);
//
//	switch (num1)
//	{
//	case 1:
//		printf("It is 1.\n");
//		
//	case 2:
//		printf("It is 2.\n");
//		
//	default:
//		printf("Default.\n");
//		
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//
//	scanf("%d", &num1);
//
//	switch (num1)
//	{
//	case 1:  // 1또는
//	case 2:  // 2일때 코드를 실행
//		printf("it is 1 or 2\n", num1);
//		break;
//	case 3: // 3또는
//	case 4: //4일때 코드를 실행
//		printf("it is 3 or 4\n", num1);
//		break;
//	default:
//		printf("Default\n");
//		break;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//
//	scanf("%d", &num1);
//
//	switch (num1)
//	{
//	case 1:
//	{
//		int num2 = num1;
//		printf("It is %d\n", num2);
//		break;
//	}
//	case 2:
//		printf("It is 2\n");
//	default:
//		printf("default\n");
//		break;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1;
//
//	scanf("%c", &c1);
//
//	switch (c1)
//	{
//	case 'a':
//		printf("It is %c\n", c1);
//		break;
//	case 'b':
//		printf("It is %c\n", c1);
//		break;
//	default:
//		printf("Default\n");
//		break;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char menu;
//	
//	scanf("%c", &menu);
//
//	switch (menu)
//	{
//	case 'f':
//		printf("환타");
//		break;
//	
//	case 'c':
//		printf("콜라");
//		break;
//
//	case 'p':
//		printf("포카리스웨트");
//		break;
//	default:
//		printf("판매하지 않는 메뉴");
//		break;
//	}
//
//	return 0;
//}

/* 27강 */

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("Hello, world!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("Hello, world!\n");
//	}
//
//	printf("%d\n", i);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		printf("Hello, world! %d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{	
//	int i;
//	for (i = 10; i > 1; i--)
//	{
//		printf("Hello, world!%d\n", i);
//	}
//
//	printf("i: %d\n", i);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 100; i++);
//	{
//		printf("Hello, world!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 100; i++)
//		printf("Hello, world!\n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	for (int i = count; i > 0; i--)
//	{
//		printf("Hello world!%d\n", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	for (; count > 0; count--)
//	{
//		printf("Hello, world! %d\n", count);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0, j = 0; i < 10; i++, j += 2)
//	{
//		printf("i: %d, j: %d\n", i, j);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (;;)
//	{
//		printf("Hello, world!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 2, j = 5; i < 64; i *= 2, j--)
//	{
//		printf("%d %d\n", i, j);
//	}
//
//	return 0;
//}

/*27강*/
//심사문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1;
//
//	scanf("%c", &c1);
//
//	for (; c1 <= 'z'; c1++)
//		printf("%c", c1);
//
//	return 0;
//}

/*28강*/

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("Hello, world\n");
//		i++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 100;
//	while (i > 0)
//	{
//		printf("Hello, world! %d\n", i);
//		i--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100);
//	{
//		printf("Hello, world!\n");
//		i++;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	int i = 0;
//	while (i < count)
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	scanf("%d", &i);
//
//	while (i > 0)
//	{
//		printf("Hello, world! %d\n", i);
//		i--;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL)); // 현재 시간 값으로 시드 설정
//
//	int i = 0;
//	while (i != 3)
//	{
//		i = rand() % 10;
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("Hello, world!\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//		printf("Hello, world!\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i > 10)
//	{
//		printf("Hello world!\n");
//		i++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char i = 1;
//	while (i != 0)
//	{
//		printf("%u\n", i);
//		i <<= 1;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int amount;
//
//	scanf("%d", &amount);
//
//	amount -= 1200;
//	while (amount > 0)
//	{
//		printf("%d\n", amount);
//
//		amount -= 1200;
//	}
//
//	return 0;
//}

/* 29강 */

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	do
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	} while (i < 100);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	printf("Hello, world ! %d\n", i);
//	i++;
//
//	while (i < 100)
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	} while (i <= 100);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 100;
//
//	do
//	{
//		printf("Hello, world! %d\n", i);
//		i--;
//	} while (i > 0);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int count;
//	scanf("%d", &count);
//
//	int i = 0;
//	do
//	{
//		printf("Hello, world! %d\n", i);
//		i++;
//	} while (i < count);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	do
//	{
//		printf("Hello, world! %d\n", count);
//		count--;
//	} while (count > 0);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//
//	int i = 0;
//	do
//	{
//		i = rand() % 10;
//
//		printf("%d\n", i);
//	} while (i != 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	do
//	{
//		printf("Hello, world!\n");
//	} while (1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1;
//	do
//	{
//		scanf("%c", &c1);
//	} while (c1 > 'q');
//
//	printf("프로그램 종료 \n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	unsigned int num1;
//	unsigned int sum = 0;
//
//	scanf("%d", &num1);
//
//	unsigned int i = 0;
//
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= num1);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

/* 30강 */

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//
//	while (1)
//	{
//		num1++;
//		printf("%d\n", num1);
//
//		if (num1 == 100)
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//
//	for (;;)
//
//	{
//		num1++;
//		printf("%d\n", num1);
//
//		if (num1 == 100)
//			break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			continue;
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//
//	{
//		i++;
//		if (i % 2 != 0)
//			continue;
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	int i = 1;
//	while (1)
//	{
//		printf("%d\n", i);
//
//		if (i == count)
//			break;
//
//		i++;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int count;
//
//	scanf("%d", &count);
//
//	for (int i = 1; i <= count; i++)
//	{
//		if (i % 2 != 0)
//			continue;
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//
//	for (;;)
//	{
//		if (i % 10 != 3)
//		{
//			i++;
//			continue;
//		}
//
//		if (i > 103)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1, num2, i;
//
//	scanf("%d %d", &num1, &num2);
//
//	i = num1;
//
//	while (1)
//	{
//
//		if (i % 10 == 7)
//		{
//			i++;
//			continue;
//		}
//
//		if (i > num2)
//		{
//			break;
//		}
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

/* 31강 */

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("j: %d ", j);
//		}
//		
//		printf("i: %d ", i);
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (j <= i)
//				printf("*");
//		}
//
//		printf("\n");
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (j == i)
//				printf("*");
//			else 
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (j >= i)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int n;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            printf(" ");
//        }
//
//        for (int j = 0; j < 2 * i + 1; j++) {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

/* 32강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//
//	scanf("%d", &num1);
//
//	if (num1 == 1)
//		goto ONE;
//	else if (num1 == 2)
//		goto TWO;
//	else
//		goto EXIT;
//
//ONE:
//	printf("it is one\n");
//	goto EXIT;
//TWO:
//	printf("it is two\n");
//	goto EXIT;
//EXIT:
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	int num1 = 0;
//
//	bool exitOuterLoop = false;
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (num1 == 20)
//			{
//				exitOuterLoop = true;
//				break;
//			}
//
//			num1++;
//		}
//
//		if (exitOuterLoop == true)
//			break;
//	}
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (num1 == 20)
//				goto EXIT;
//
//			num1++;
//		}
//	}
//
//EXIT:
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		switch (num1)
//		{
//		case 1:
//			printf("1입니다.\n");
//			goto EXIT;
//
//		default:
//			break;
//		}
//	}
//EXIT:
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int gender, age, isOwner;
//
//	scanf("%d %d %d", &gender, &age, &isOwner);
//
//	printf("안녕하세요\n");
//	printf("문을 연다\n");
//
//	if (gender == 2)
//	{
//		printf("안녕히 계세요.\n");
//		printf("문을 닫는다.\n");
//		return 0;
//	}
//
//	if (age < 30)
//	{
//		printf("안녕히 계세요 \n");
//		printf("문을 닫는다.\n");
//		return 0;
//	}
//
//	if (isOwner == 0)
//	{
//		printf("안녕히 계세요.\n");
//		printf("문을 닫는다.\n");
//		return 0;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (num1 == 10)
//				goto EXIT2;
//
//			num1++;
//		}
//	}
//
//EXIT1:
//	printf("100\n");
//EXIT2:
//	printf("200\n");
//EXIT3:
//	printf("300\n");
//
//	return 0;
//}

/* 33강 */
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("Fizz\n");
//		else if (i % 5 == 0)
//			printf("Buzz\n");
//		else
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if ((i % 3 == 0) && (i % 5 == 0))
//			printf("FizzBuzz\n");
//		else if (i % 3 == 0)
//			printf("Fizz\n");
//		else if (i % 5 == 0)
//			printf("Buzz\n");
//		else 
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 15 == 0)
//			printf("FizzBuzz\n");
//		else if (i % 3 == 0)
//			printf("Fizz\n");
//		else if (i % 5 == 0)
//			printf("Buzz\n");
//		else
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; ++i <= 100;)
//		printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if ((i % 2 == 0) && (i % 7 == 0))
//			printf("FizzBuzz\n");
//		else if (i % 2 == 0)
//			printf("Fizz\n");
//		else if (i % 7 == 0)
//			printf("Buzz\n");
//		else
//			printf("%d\n", i);
//
//	}
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
	{
		if ((num1 % 5 == 0) && (num1 % 11) == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (num1 % 5 == 0)
		{
			printf("Fizz\n");
		}
		else if (num1 % 11 == 0)
		{
			printf("Buzz\n");
		}
		else
			printf("%d\n", num1);
	}

	return 0;
}