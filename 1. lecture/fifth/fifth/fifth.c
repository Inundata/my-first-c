// ========== 10.1 리터럴 사용하기 ==========
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 10); // 10: 정수 리터럴
//	printf("%f\n", 0.1f); // 0.100000: 실수 리터럴
//	printf("%c\n", 'a'); // a: 문자 리터럴 // 문자 하나는 무조건 작은 따옴표 한개
//	printf("%s\n", "Hello world!"); // Hello world! : 문자열 리터럴
//									// 문자열은 무조건 큰따옴표로
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 19); // 19: 10진 정수 리터럴
//	printf("0%o\n", 017); // 017: 8진 정수 리터럴
//	printf("0x%X\n", 0x1F); // 0x1F: 16진 정수 리터럴
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%f\n", 0.1f);
//	printf("%f\n", 0.1F);
//	printf("%f\n", 1.0e-5f);
//	printf("%f\n", 1.0E-5F);
//}


// ========== 10.2 상수 사용하기 ==========
//
//#include <stdio.h>
//
//int main()
//{
//	const int con1 = 1;
//	const float con2 = 0.1f;
//	const char con3 = 'a';
//
//	printf("%d %f %c\n", con1, con2, con3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	const int con1 = 1;
//	con1 = 2;
//
//	printf("%d\n", con1);
//
//	return 0;
//}

// ========== 10.3 정수 리터럴 접미사 사용하기 ==========

// 리터럴의 크기를 명확하게 표현하기 위해 접미사를 사용할 수 있음.
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%ld\n", -10L); // long 크기의 정수 리터럴
//	printf("%lld\n", -1234567890123456789LL); // long long 크기의 정수 리터럴
//
//	printf("%u\n", 10U); // unsigned int 크기의 정수 리터럴
//	printf("%lu\n", 1234567890UL); // unsigned long 크기의 정수 리터럴
//
//	printf("%lu\n", 10UL); // unsigned long 크기의 정수 리터럴
//	printf("%llu\n", 1234567890123456789ULL); // unsigned long long 크기의 정수 리터럴
//
//	return 0;
//}

// 접미사를 생략하면 int크기가 됨.
//
//#include <stdio.h>
//
//int main()
//{
//	printf("0%lo\n", 017L);
//	printf("0%lo\n", 017UL);
//	printf("0x%lX\n", 0x7FFFFFL);
//	printf("0x%lX\n", 0xFFFFFFFUL);
//
//	return 0;
//}

// 실수리터럴

//#include <stdio.h>
//
//int main()
//{
//	printf("%f\n", 0.1f); // 0.100000: float 크기의 실수 리터럴
//	printf("%f\n", 0.1F); // 0.100000: float 크기의 실수 리터럴
//	printf("%f\n", 0.1); // 0.100000: double 크기의 실수 리터럴
//	printf("%Lf\n", 0.1l); // 0.100000: long double 크기의 실수 리터럴
//	printf("%Lf\n", 0.1L); // 0.100000: long double 크기의 실수 리터럴
//
//	printf("%f\n", 1.0e-5f); // 0.000010: float 크기의 실수 리터럴
//	printf("%f\n", 1.0e-5F); // 0.000010: float 크기의 실수 리터럴
//	printf("%f\n", 1.0e-5); // 0.000010: double 크기의 실수 리터럴
//	printf("%Lf\n", 1.0e-5l); // 0.000010: long double 크기의 실수 리터럴
//	printf("%Lf\n", 1.0e-5L);  // 0.000010: long double 크기의 실수 리터럴
//}

// ========== 10.6 연습문제: 리터럴 사용하기 ==========
//다음 소스 코드를 완성하여
//Hello, world! 8 4.900000e-302가 출력되게 만드세요.
//
//#include <stdio.h>
//
//int main()
//{
//	printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L);
//
//	return 0;
//
//}

// ========== 10.7 연습문제: 상수 사용하기 ==========
//
//#include <stdio.h>
//
//int main()
//{
//	const unsigned long long con1 = 10ULL;
//	const float con2 = 3.2f;
//	const char con3 = 't';
//
//	printf("%llu %f %c\n", con1, con2, con3);
//
//	return 0;
//}

// ========== 10.8 심사문제: 리터럴 사용하기 ==========

//#include <stdio.h>

//int main()
//{
//	printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);
//
//	return 0;
//}

// ========== 10.9 심사문제: 상수 사용하기 ==========

#include <stdio.h>

//int main()
//{
//	const long double con1 = -2.225074e-308L;
//
//	const int con2 = 0x1285;
//
//	const long long con3 = 9223372036854775807LL;
//
//	printf("%Le 0x%x %lld\n", con1, con2, con3);
//
//	return 0;
//}


// ************************ 11. 정수 입력 하기

// ========== 11.1 정수 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS // scaf 보안 경고로 인한 컴파일 에러 방지
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &num1); // 표준 입력을 받아서 변수에 저장
//
//	printf("%d\n", num1); // 변수의 내용을 출력
//
//	return 0;
//}

// ========== 11.2 한 번에 정수 두개 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1, num2;
//
//	printf("정수를 두 개 입력하세요: ");
//	scanf("%d %d", &num1, &num2); // 값을 두 개 입력받아서 변수 두개에 저장
//
//	printf("%d %d\n", num1, num2); // 변수의 내용을 출력
//
//	return 0;
//}

// ========== 11.3 실수 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	float num1;
//
//	printf("실수를 입력하세요: ");
//	scanf("%f", &num1); // 실수를 입력받아서 변수에 저장
//
//	printf("%f\n", num1); // 변수의 내용을 출력
//
//	return 0;
//}

// ========== 11.4 문자 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1;
//	printf("문자를 입력하세요: ");
//	scanf("%c", &c1); // 문자를 입력받아서 변수에 저장
//
//	printf("%c\n", c1); //변수의 내용을 출력
//
//	return 0;
//}

// ========== 11.6 연습문제: 한번에 정수 세개 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	int num2;
//	int num3;
//
//	printf("정수 세 개를 입력하세요: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	printf("%d\n", num3);
//
//	return 0;
//}

// ========== 11.7 심사문제: 정수, 실수, 문자 입력받기 ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	float float1;
//	char char1;
//
//	scanf("%d %f %c", &num1, &float1, &char1);
//
//	printf("%d\n", num1);
//	printf("%f\n", float1);
//	printf("%c\n", char1);
//
//	return 0;
//}