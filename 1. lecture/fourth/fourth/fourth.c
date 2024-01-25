/* [부동소수점 방식]
* 자료형의 일정부분을 비트 단위로 나누어
* 부호(significand), 기수(base), 지수(exponent)를 저장하여 실수를 표현한다.
* 다음과 같이 기수(n)를 지수(p)만큼 거듭제곱한 값을 가수(m)을 곱하는 방식을 사용함
* 기수는 2로 고정되어있어 이를 따로 저장하지 않음
* (부동소수점) = 부호 m * n^p 

float: 단정밀도
double: 배정밀도 -> 보다 정확함
*/

// ====== 8.1 실수형 변수의 선언 ======
/*
#include <stdio.h>

int main()
{
	float num1 = 0.1f; // 단정밀도 부동소수점 변수를 선언하고 값을 할당

	double num2 = 3867.215820; // 배정밀도 부동소수점 변수를 선언하고 값을 할당
								// double은 숫자 뒤에 아무것도 붙이지 않음.

	long double num3 = 9.327513l; // 배정밀도 부동소수점 변수를 선언하고 값을 할당
								// long double은 숫자 뒤에 l을 붙임.

	// float와 double은 %f로 출력, long double은 %Lf로 출력
	printf("%f %f %Lf\n", num1, num2, num3);
	// 이때 f는 floating point라는 의미이며
	// Lf는 long floating point의 의미이다.

	return 0;

}
*/

/*
#include <stdio.h>

int main()
{
	float num1 = 3.e5f; // 지수 표기법으로 300000을 표기
						// float는 숫자 뒤에 f를 붙임

	double num2 = -1.3827e-2; // 지수 표기법으로 -0.013827을 표기
							// double은 숫자 뒤에 아무것도 붙이지 않음

	long double num3 = 5.21e+9l; // 지수 표기법으로 5210000000을 표기
								// long double은 숫자 뒤에 l을 붙임

	// float와 double은 %f로 출력, long double은 %Lf로 출력
	printf("%f %f %Lf", num1, num2, num3);

	//  지수 표기법으로 출력할때, float와 double은 %e로 출력, long double은 %Le로 출력
	printf("%e %e %Le", num1, num2, num3);

	return 0;
}
*/
// ====== 8.2 자료형 크기 구하기 ======

//
//#include <stdio.h>
//
//int main()
//{
//	float num1 = 0.0f;
//	double num2 = 0.0;
//	long double num3 = 0.0l;
//
//	printf("float: %d, double: %d, long double %d\n"
//		, sizeof(num1)
//		, sizeof(num2)
//		, sizeof(num3));
//
//	return 0;
//}


// ====== 8.3 양수 최솟값과 최댓값 표현하기 ======
/*
#include <stdio.h>
#include <float.h> // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
	float num1 = FLT_MIN; // float의 양수 최솟값
	float num2 = FLT_MAX;// float의 양수 최댓값
	double num3 = DBL_MIN; // double의 양수 최솟값
	double num4 = DBL_MAX; // double의 양수 최댓값
	long double num5 = LDBL_MIN; // long double의 양수 최솟값
	long double num6 = LDBL_MAX; // long double의 양수 최댓값

	printf("%.40f %.2f\n", num1, num2);

	printf("%e %e\n", num3, num4);

	printf("%Le %Le\n", num5, num6);

	return 0;
}
*/

// ====== 8.4 오버플로우와 언더플로우 알아보기 ======
/*
#include <stdio.h>
#include <float.h> // 실수 자료형의 양수 최솟값과 최댓값이 정의된 헤더 파일

int main()
{
	float num1 = FLT_MIN; // float의 양수 최솟값
	float num2 = FLT_MAX; // float의 양수 최댓값

	//float의 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생
	num1 /= 100000000.0f;

	//float의 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생

	num2 *= 1000.0f;

	printf("%e %e\n", num1, num2); // 0.000000e+00 inf: 실수의 언더플로우는 0
									// 오버플로우는 무한대가 됨

	return 0;

}
*/

// C에서는 언더플로우를 0으로 표현하고
// 오버플로우는 inf로 표시한다.

// ====== 8.6 연습문제: 실수형 변수 선언하기 ======
//
//#include <stdio.h>
//
//int main()
//{
//	float num1 = 1.97f;
//	long double num2 = 5.524218l;
//	double num3 = 3792.8e+4;
//
//	printf("%f %Lf %f\n", num1, num2, num3);
//
//	return 0;
//}

// ====== 8.7 연습문제: 자료형 크기 구하기 ======
//
//#include <stdio.h>
//
//int main()
//{
//	double num1 = 0.4284;
//	float num2 = 2.7f;
//
//	printf("num1의 크기: %d, num2의 크기: %d\n"
//		, sizeof(num1)
//		, sizeof(num2));
//
//	return 0;
//}

// ====== 8.8 연습문제: 최솟값과 최댓값 표현하기 ======
//#include <stdio.h>
//#include <float.h>
//
//int main()
//{
//	float num1 = FLT_MAX;
//	double num2 = DBL_MIN;
//	long double num3 = LDBL_MAX;
//
//	printf("%.2f, %e %Le\n", num1, num2, num3);
//
//	return 0;
//}

// ====== 8.9 연습문제: 언더플로우 ======

//#include <stdio.h>
//#include <float.h>
//
//int main()
//{
//	float num1 = FLT_MIN;
//
//	num1 /= 10e+10;
//
//	printf("%e\n", num1);
//
//	return 0;
// }

// ====== 8.10 심사문제 ======
// 다음 소스 코드를 완성하여 1.800000 2.900000 3.700000과 4 8이 출력되게 만드세요.

//#include <stdio.h>
//
//int main()
//{
//	float num1 = 1.8f;
//	double num2 = 2.9;
//	long double num3 = 3.7l;
//
//	printf("%f %f %Lf\n", num1, num2, num3);
//	printf("%d %d\n", sizeof(num1), sizeof(num2));
//
//	return 0;
//}

// ====== 8.11 심사문제: 최솟값과 최댓값 표현하기 ======
//다음 소스 코드를 완성하여 각 실수 자료형의 최솟값과 최댓값이 출력되게 만드세요.
//#include <stdio.h>
//#include <float.h>
//
//int main()
//{
//	double doubleMin;
//	double doubleMax;
//
//	long double longDoubleMin;
//	long double longDoubleMax;
//
//	doubleMin = DBL_MIN;
//	doubleMax = DBL_MAX;
//	longDoubleMin = LDBL_MIN;
//	longDoubleMax = LDBL_MAX;
//
//	printf("%e %e\n", doubleMin, doubleMax);
//	printf("%Le %Le\n", longDoubleMin, longDoubleMax);
//
//	return 0;
//
//}

// ====== 8.12 심사문제: 오버플로우 ======
//다음 소스 코드를 완성하여 -inf가 출력되게 만드세요.
//#include <stdio.h>
//#include <float.h>
//
//int main()
//{
//	float num1 = -FLT_MAX;
//
//	num1 *= 1000.0f;
//	
//	printf("%f\n", num1);
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <limits.h>
//
//int main()
//{
//	int num1 = -INT_MAX;
//
//	return 0;
//}

// ====== 9.0 문자 자료형 사용하기 ======
// A: 65, a: 97
// C언어에서 문자는 ''로 묶어서 표현하며, 
// 한개의 문자만 묶을 수 있음.

// ====== 9.1 문자 변수 선언하기 ======

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//
//	// char를 %c로 출력하면 문자가 출력이되고
//	// %d로 출력하면 정숫값이 출력됨.
//
//	printf("%c %d\n", c1, c1);
//	printf("%c %d\n", c2, c2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 0x61;
//	char c2 = 0x62;
//
//	// char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
//	// %x로 출력하면 16진수로 출력됨
//
//	printf("%c %d, 0%x\n", c1, c1, c1);
//	printf("%c %d, 0x%x\n", c2, c2, c2);
//}

//숫자 0과 문자 0은 다르다.
//#include <stdio.h>
//
//int main()
//{
//	char c1 = '0';
//	char c2 = 0;
//
//	printf("%c %d\n", c1, c1);
//	printf("%c %d\n", c2, c2); // ASCII에서 숫자 은 NULL임.
//
//	return 0;
//}

// ====== 9.2 문자로 연산하기 ======

// 문자도 C에서 정수로 저장이 되기 때문에 연산이 가능하다

//#include <stdio.h>
//
//int main()
//{
//	printf("%c %d\n", 'a' + 1, 'a' + 1);
//
//	printf("%c %d\n", 97 + 1, 97 + 1);
//
//	return 0;
//}

// ====== 9.3 제어 문자 사용하기 ======
//
//#include <stdio.h>
//int main()
//{
//	char c1 = 'a'; 
//	char c2 = 'b';
//	char lineFeed = '\n'; // 제어 문자 할당
//
//	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char lineFeed = '\n';
//
//	printf("%d 0x%x\n", lineFeed, lineFeed);
//
//	return 0;
//}

// ====== 9.5 연습문제 ======
//다음 소스 코드를 완성하여 "Hello   world"가 출력되게 만드세요
// ("Hello"와 "world" 사이는 탭으로 띄웁니다).

//#include <stdio.h>
//
//int main()
//{
//	char c1 = '\t';
//
//	printf("Hello");
//	printf("%c", c1);
//	printf("world\n");
//
//	return 0;
//}

// ====== 9.6 정수 숫자를 문자로 변환하기 ======
// 다음 소스 코드를 완성하여 2와 5가 각 줄에 출력되게 만드세요.

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 2;
//	char c2 = 5;
//
//	printf("%c\n", c1 = '2');
//	printf("%c\n", c2 = '5');
//
//	return 0;
//}

// ====== 9.7 심사 문제: 제어 문자 사용하기 ======
//다음 소스 코드를 완성하여 "Hello   world"가 각 줄에 두 번 출력되게 만드세요
//("Hello"와 "world" 사이는 탭으로 띄웁니다).

//#include <stdio.h>
//
//int main()
//{
//	char c1;
//	char c2;
//	char c3;
//
//	c1 = '\t';
//	c2 = '\n';
//	c3 = '\t';
//
//	printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);
//
//	return 0;
//}

// ====== 9.8 소문자를 대문자로 바꾸기 ======

// 'A'가 출력되게 바꿔라

#include <stdio.h>

int main()
{
	char c1 = 'a';

	printf("%c\n", c1 -= 32);

	return 0;
}