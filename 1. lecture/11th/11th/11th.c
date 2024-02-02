/* 34강 */
// 포인터는 *를 이용하여 선언한다.
// 포인터 = &변수; // 변수의 메모리 주소를 포인터에 할당한다.

//#include <stdio.h>
//
//int main()
//{
//	int *numPtr; // 포인터 변수선언
//
//	int num1 = 10;
//
//	numPtr = &num1; //  num1의 메모리 주소를 포인터 변수에 저장
//
//	printf("%p\n", numPtr);
//
//	printf("%p\n", &num1);
//	printf("%d\n", num1);
//
//	return 0;
//}
//


//메모리 주소를 이용해서 값을 가져오고 싶으면
// *포인터 로 값을 가져온다. 이를 역참조라고 한다.

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//
//	numPtr = &num1;
//
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//
//	int num1 = 10;
//
//	numPtr = &num1;
//
//	*numPtr = 20;
//
//	printf("%d\n", num1);
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

// 디버거 확인

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//
//	int num1 = 10;
//
//	numPtr = &num1;
//
//	*numPtr = 20;
//
//	printf("%d\n", *numPtr);
//	printf("%d\n", num1);
//
//	return 0;
//}

// 다양한 자료형의 포인터 선언
//#include <stdio.h>
//
//int main()
//{
//	long long* numPtr1;
//
//	float* numPtr2;
//
//	char* cPtr1;
//
//	long long num1 = 10;
//	float num2 = 3.5f;
//	char c1 = 'a';
//
//	numPtr1 = &num1;
//	numPtr2 = &num2;
//	cPtr1 = &c1;
//
//	printf("%lld\n", *numPtr1);
//	printf("%f\n", *numPtr2);
//	printf("%c\n", *cPtr1);
//
//	return 0;
//}


// void

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 10;
//	char c1 = 'a';
//	int* numPtr1 = &num1;
//	char* cPtr1 = &c1;
//
//	void* ptr;
//
//	ptr = numPtr1;
//	ptr = cPtr1;
//
//	numPtr1 = ptr;
//	cPtr1 = ptr;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr1;
//	int** numPtr2;
//	int num1 = 10;
//
//	numPtr1 = &num1;
//
//	numPtr2 = &numPtr1;
//
//	printf("%d\n", **numPtr2);
//
//	return 0;
//
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr = 0x100;
//
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int* numPtr1;
//	int** numPtr2;
//	int num1;
//
//	scanf("%d", &num1);
//
//	numPtr1 = &num1;
//	numPtr2 = &numPtr1;
//
//	printf("%d\n", **numPtr2);
//
//	return 0;
//}

/* 35강 */
// 포인터에 메모리를 할당하여 진행하는 방법
// 포인터 = malloc(크기);

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num1 = 20;
//	int* numPtr1;
//
//	numPtr1 = &num1;
//
//	int* numPtr2;
//
//	numPtr2 = malloc(sizeof(int));
//
//	printf("%p\n", numPtr1);
//
//	printf("%p\n", numPtr2);
//
//	free(numPtr2); // 동적으로 할당된 메모리해제
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* numPtr;
//
//	numPtr = malloc(sizeof(int));
//
//	*numPtr = 10;
//
//	printf("%d\n", *numPtr);
//
//	free(numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> // malloc, free가 선언되어있는 header file
//#include <string.h> // memset가 선언되어있는 header file
//
//int main()
//{
//	long long* numPtr = malloc(sizeof(long long));
//
//	memset(numPtr, 0x27, 8);
//
//	printf("0x%llx\n", *numPtr);
//
//	free(numPtr);
//
//	return 0;
//}

// memset 예시 memset(numPtr, 0, 8): numPtr 포인터에 8바이트를 모두 0으로 할당.

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr = NULL; // 포인터에 메모리가 할당되지 아니함
//	printf("%p\n", numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//
//int main()
//{
//	int* numPtr1 = malloc(sizeof(int));
//	long long* numPtr2 = malloc(sizeof(long long));
//
//	*numPtr1 = INT_MAX;
//	*numPtr2 = LLONG_MAX;
//
//	printf("%d, %lld\n", *numPtr1, *numPtr2);
//
//	free(numPtr1);
//	free(numPtr2);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num1;
//	int num2;
//
//	int* numPtr1 = malloc(sizeof(int));
//	int* numPtr2 = malloc(sizeof(int));
//
//	scanf("%d %d", &num1, &num2);
//
//	*numPtr1 = num1;
//	*numPtr2 = num2;
//
//	printf("%d\n", *numPtr1 + *numPtr2);
//
//	free(numPtr1);
//	free(numPtr2);
//
//	return 0;
//}

/* 36강 */

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110};
//
//	printf("%d\n", numArr[0]);
//	printf("%d\n", numArr[5]);
//	printf("%d\n", numArr[9]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 0, };
//
//	printf("%d\n", numArr[0]);
//	printf("%d\n", numArr[5]);
//	printf("%d\n", numArr[9]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10];
//
//	numArr[0] = 11;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	printf("%d\n", sizeof(numArr));
//	printf("%d\n", sizeof(numArr) / sizeof(int));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
//	{
//		printf("%d\n", numArr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	for (int i = sizeof(numArr) / sizeof(int) - 1
//		; i >= 0
//		; i--)
//	{
//		printf("%d\n", numArr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	int sum = 0;
//
//	for (int i = 0
//		; i < sizeof(numArr) / sizeof(int)
//		; i++)
//	{
//		sum += numArr[i];
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	for (int i = 0
//		; i < sizeof(numArr) / sizeof(int)
//		; i++)
//	{
//		numArr[i] *= 2;
//	}
//
//	for (int i = 0
//		; i < sizeof(numArr) / sizeof(int)
//		; i++)
//	{
//		printf("%d\n", numArr[i]);
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[10] = { 11, 22, 33, 44, 55
//					, 66, 77, 88, 99, 110 };
//
//	int* numPtr = numArr;
//
//	printf("%d\n", *numPtr);
//
//	printf("%d\n", *numArr);
//
//	printf("%d\n", numPtr[5]);
//
//	printf("%d\n", sizeof(numArr));
//
//	printf("%d\n", sizeof(numPtr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int decimal = 13;
//	int binary[20] = { 0, };
//
//	int position = 0;
//
//	while (1)
//	{
//		binary[position] = decimal % 2;
//		decimal /= 2;
//
//		position++;
//
//		if (decimal == 0)
//			break;
//	}
//
//	// 배열의 요소를 역순으로 출력
//
//	for (int i = position - 1
//		; i >= 0
//		; i--)
//	{
//		printf("%d", binary[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float scores[10] = { 67.2f, 84.3f, 97.0f, 87.1f
//					, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f
//					, 95.3f };
//
//	float sum = 0.0f;
//	float average;
//
//	for (int i = 0
//		; i < sizeof(scores) / sizeof(float)
//		; i++)
//	{
//		sum += scores[i];
//	}
//
//	average = sum / (sizeof(scores) / sizeof(float));
//
//	printf("%f\n", average);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int decimal = 0;
//
//	int binary[4] = { 1, 1, 0, 1 };
//
//	int position = 0;
//	for (int i = sizeof(binary) / sizeof(int) - 1
//		; i >= 0
//		; i--)
//	{
//		if (binary[i] == 1)
//			decimal += 1 << position;
//
//		position++;
//	}
//
//	printf("%d\n", decimal);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int numArr[5];
//	int smallestNumber;
//
//	scanf("%d %d %d %d %d", &numArr[0], &numArr[1]
//		, &numArr[2], &numArr[3]
//		, &numArr[4]);
//
//	for (int i = 0
//		; i < sizeof(numArr) / sizeof(int) 
//		; i++)
//	{
//		if (i == 0)
//		{
//			smallestNumber = numArr[i];
//		}
//
//		else
//			if (smallestNumber > numArr[i])
//			{
//				smallestNumber = numArr[i];
//			}
//	}
//
//	printf("%d\n", smallestNumber);
//
//	return 0;
//}

/* 37강 */

//#include <stdio.h>
//
//int main()
//{
//	int numArr[3][4] = {
//		{11, 22, 33, 44}
//		, {55, 66, 77, 88}
//		, {99, 110, 121, 132}
//	};
//
//	printf("%d\n", numArr[0][0]);
//	printf("%d\n", numArr[1][2]);
//	printf("%d\n", numArr[2][0]);
//	printf("%d\n", numArr[2][3]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[3][4] = { 0, };
//
//	printf("%d\n", numArr[0][0]);
//	printf("%d\n", numArr[1][2]);
//	printf("%d\n", numArr[2][0]);
//	printf("%d\n", numArr[2][3]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[3][4];
//
//	numArr[0][0] = 11;
//	numArr[0][1] = 22;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[3][4] = {
//		{11, 22, 33, 44}
//		, {55, 66, 77, 88}
//		, {99, 110, 121, 132}
//	};
//
//	printf("%d\n", sizeof(numArr));
//
//	int col = sizeof(numArr[0]) / sizeof(int);
//
//	int row = sizeof(numArr) / sizeof(numArr[0]);
//
//	printf("%d\n", col);
//	printf("%d\n", row);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[3][4] = {
//		{11, 22, 33, 44}
//		, {55, 66, 77, 88}
//		, {99, 110, 121, 132}
//	};
//
//	int col = sizeof(numArr[0]) / sizeof(int);
//
//	int row = sizeof(numArr) / sizeof(numArr[0]);
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col
//			; j++)
//		{
//			printf("%d ", numArr[i][j]);
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
//	int numArr[3][4] = {
//		{11, 22, 33, 44}
//		, {55, 66, 77, 88}
//		, {99, 110, 121, 132}
//	};
//
//	int col = sizeof(numArr[0]) / sizeof(int);
//	int row = sizeof(numArr) / sizeof(numArr[1]);
//
//	for (int i = row -1
//		; i >= 0
//		; i--)
//	{
//		for (int j = col - 1
//			; j >= 0
//			; j--)
//		{
//			printf("%d ", numArr[i][j]);
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
//	int numArr[3][4] = {
//		{11, 22, 33, 44}
//		, {55, 66, 77, 88}
//		, {99, 110, 121, 132}
//	};
//
//	//int(*numPtr)[sizeof(numArr) / sizeof(numArr[0])] = numArr;
//	int(*numPtr)[sizeof(numArr[0]) / sizeof(int)] = numArr;
//
//	printf("%p\n", *numPtr);
//
//	printf("%p\n", *numArr);
//
//	printf("%d\n", numPtr[2][1]);
//
//	printf("%d\n", sizeof(numArr));
//
//	printf("%d\n", sizeof(numPtr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int matrix[8][8] = {
//		{1, 2, 3, 4, 5, 6, 7, 8}
//		, {9, 10, 11, 12, 13, 14, 15, 16}
//		, {17, 18, 19, 20, 21, 22, 23, 24}
//		, {25, 26, 27, 28, 29, 30, 31, 32}
//		, {33, 34, 35, 36, 37, 38, 39, 40}
//		, {41, 42, 43, 44, 45, 46, 47, 48}
//		, {49, 50, 51, 52, 53, 54, 55, 56}
//		, {57, 58, 59, 60, 61, 62, 63, 64}
//	};
//
//	int col = sizeof(matrix[0]) / sizeof(int);
//	int row = sizeof(matrix) / sizeof(matrix[0]);
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col
//			; j++)
//		{
//			if (i == j)
//			{
//				printf("%d ", matrix[i][j]);
//			}
//
//		}
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
//    int matrix[5][5];
//
//    scanf("%d %d %d %d %d",
//        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
//    scanf("%d %d %d %d %d",
//        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
//    scanf("%d %d %d %d %d",
//        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
//    scanf("%d %d %d %d %d",
//        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
//    scanf("%d %d %d %d %d",
//        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);
//
//    int col = sizeof(matrix[0]) / sizeof(int);
//    int row = sizeof(matrix) / sizeof(matrix[0]);
//
//    for (int j = 0
//        ; j < col
//        ; j++)
//    {
//        for (int i = 0
//            ; i < row
//            ; i++)
//        {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//

/* 38강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int size;
//	scanf("%d", &size);
//
//	int numArr[size];
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* numPtr = malloc(sizeof(int) * 10);
//
//	numPtr[0] = 10;
//	numPtr[9] = 20;
//
//	printf("%d\n", numPtr[0]);
//	printf("%d\n", numPtr[9]);
//
//	free(numPtr);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int size;
//	scanf("%d", &size);
//	
//	int* numPtr = malloc(sizeof(int) * size);
//
//	for (int i = 0; i < size; i++)
//	{
//		numPtr[i] = i;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", numPtr[i]);
//	}
//
//	free(numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int** m = malloc(sizeof(int*) * 3);
//
//	for (int i = 0
//		; i < 3
//		; i++)
//	{
//		m[i] = malloc(sizeof(int) * 4);
//	}
//
//	m[0][0] = 1;
//	m[2][0] = 5;
//	m[2][3] = 2;
//
//	printf("%d\n", m[0][0]);
//	printf("%d\n", m[2][0]);
//	printf("%d\n", m[2][3]);
//
//	for (int i = 0; i < 3; i++)
//	{
//		free(m[i]);
//	}
//
//	free(m);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int row, col;
//
//	scanf("%d %d", &row, &col);
//
//	int** m = malloc(sizeof(int*) * row);
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		m[i] = malloc(sizeof(int) * col);
//	}
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col
//			; j++)
//		{
//			m[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		for (int j = 0
//			; j < col
//			; j++)
//		{
//			printf("%d", m[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0
//		; i < row
//		; i++)
//	{
//		free(m[i]);
//	}
//
//	free(m);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	long long*** m = malloc(sizeof(long long**)* 2); // depth가 2짜리
//
//	//각 depth의 row에 대해서 메모리를 할당
//
//	for (int depth = 0
//		; depth < 2
//		; depth++)
//	{
//		// 각 row에 메모리 할당
//		m[depth] = malloc(sizeof(long long*) * 3);
//
//		// 각 row의 colum별로 메모리를 할당
//		for (int row = 0
//			; row < 3
//			; row++)
//		{
//			m[depth][row] = malloc(sizeof(long long) * 5);
//		}
//	}
//
//	m[1][2][4] = 100;
//
//	printf("%lld\n", m[1][2][4]);
//
//		// 각 row의 column별 메모리를 free시켜야함
//	for (int depth = 0
//			; depth < 2
//			; depth++)
//	{
//			// 각 row로 접근
//		for (int row = 0
//				; row < 3
//				; row++)
//				// 각 column으로 접근
//		{
//		free(m[depth][row]);
//		}
//	free(m[depth]);
//	}
//
//	free(m);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int size;
//
//	scanf("%d", &size);
//
//	int** m = malloc(sizeof(int*)*size);
//
//	for (int row = 0
//		; row < size
//		; row++)
//	{
//		m[row] = malloc(sizeof(int) * size);
//	}
//
//	for (int row = 0
//		; row < size
//		; row++)
//	{
//		for (int col = 0
//			; col < size
//			; col++)
//		{
//			if (row == col)
//			{
//				m[row][col] = 1;
//			}
//
//			else
//			{
//				m[row][col] = 0;
//			}
//		}
//	}
//
//	for (int row = 0
//		; row < size
//		; row++)
//	{
//		for (int col = 0
//			; col < size
//			; col++)
//		{
//			if (row == col)
//			{
//				printf("%d ", m[row][col]);
//			}
//			else
//			{
//				printf("%d ", m[row][col]);
//			}
//		}
//
//		printf("\n");
//	}
//
//	for (int row = 0
//		; row < size
//		; row++)
//	{
//		free(m[row]);
//	}
//	free(m);
//
//	return 0;
//
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	char s1, s2, s3, s4, s5; 

	scanf("%d %d", &m, &n);

	// 메모리를 할당하여야함
	char** matrix = malloc(sizeof(char*) * m);

	for (int row = 0
		; row < m
		; row++)
	{
		matrix[row] = malloc(sizeof(char) * (n + 1));
	}

	//// NULL로 값을 집어넣기
	//for (int row = 0
	//	; row < m
	//	; row++)
	//{
	//	for (int col = 0
	//		; col < n + 1
	//		; col++)
	//	{
	//		matrix[row][col] = NULL;
	//	}
	//}

	//// *, .를 입력받는 부분
	for (int i = 0; i < m; i++)
	{
		scanf("%s", matrix[i]);
	}

	// 지뢰를 찾는부분
	for (int row = 0
		; row < m
		; row++)
	{
		for (int col = 0
			; col < n
			; col++)
		{
			char bomb = '*';
			int n_bomb = 0;

			if (matrix[row][col] == '*')
			{
				printf("%c", bomb);
			}

			else
			{
				int row_start;
				int row_end;

				int col_start;
				int col_end;
				// sub loop문

				//올라갈 수 있는지 여부 확인
				if (row - 1 < 0)
				{
					row_start = row;
				}

				else
				{
					row_start = row - 1;
				}

				// 좌측으로 갈 수 있는지 여부 확인
				if (col - 1 < 0)
				{
					col_start = col;
				}

				else
				{
					col_start = col - 1;
				}

				// 내려갈 수 있는지 여부 확인
				if (row + 1 >= m)
				{
					row_end = row;
				}

				else
				{
					row_end = row + 1;
				}

				col_end = col + 1;

				// 지뢰를 찾기
				for (int i = row_start
					; i <= row_end
					; i++)
				{
					for (int j = col_start
						; j <= col_end
						; j++)
					{
						if (matrix[i][j] == '*')
						{
							n_bomb += 1;
						}
					}
				}
				printf("%d", n_bomb);
			}
		}
	printf("%\n");
	}

//// 출력 테스트
//	for (int row = 0
//		; row < m
//		; row++)
//	{
//		for (int col = 0
//			; col < n
//			; col++)
//		{
//			printf("%c", matrix[row][col]);
//		}
//		printf("%\n");
//	}

	// 메모리를 해제하여야함
	for (int row = 0
		; row < m
		; row++)
	{
		free(matrix[row]);
	}

	free(matrix);
	return 0;
}


// 흐음 위에 코드 통과되어야하는데 ㅋㅋ