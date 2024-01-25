/*
#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return 0;
}
*/

// ====== 7.0 변수의 선언 ===== //
// 숫자 변수에는 signed와 unsigned가 존재함.
//signed는 부호를 포함하는 것, unsigned는 부호를 포함하지 않는 것
// unsigned은 0부터 시작하며, 가장 작은 char는 2^8로 시작함.
// signed는 unsigned를 절반으로 자른 범위를 음수부터 양수까지로 지니고 있음.
// char < short< int 순서로 커지는데, power에 2씩 곱하면 된ㄷ.
// 가령, char = 2^8, short int = 2^16, int = 2^32
// 그리고 마지막에 1을 빼주면 된다(양수의 범위에서만)
// 용량은 순서대로 1바이트 < 2바이트 < 4바이트임.

// ====== 7.1 정수형변수의 선언 ===== //
/*
#include <stdio.h>

int main()
{
	char num1 = 10; // 1바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
	short num2 = 30000; // 2바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
	int num3 = -1234567890; // 4바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
    long num4 = 1234567890; // 4바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
	long long num5 = -1234567890123456789; // 8바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당

	// char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}
/*
여기서 기억해야 할 것은 char, short, int는 %d로,
long은 %ld로
long long은 %lld로 출력을 했다는 것이다.
*/

/*
#include <stdio.h>

int main() {
	unsigned char num1 = 200;
	unsigned short num2 = 60000;
	unsigned int num3 = 4123456789;
	unsigned long num4 = 4123456789;
	unsigned long long num5 = 12345678901234567890;

	printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}
/*
* 위와의 차이점은 이건 unsigned인 것이다.
* 여기서 기억해야 할 것은 char, short, int는 %u로,
long은 %lu로
long long은 %llu로 출력을 했다는 것이다.

*/

// ====== 7.2 오버플로우와 언더플로우 ===== //

/*
#include <stdio.h>

int main()
{
	char num1 = 128;
	unsigned char num2 = 256;
	printf("%d %u\n", num1, num2);

	return 0;
}
*/

// num1 = 128이 출력되지 않고 -127이 출력됨.
// 이는 char num1이 저장할 수 있는 최댓값인 127을 넘어서 그러함.
// num2도 이와 마찬가지임.
// 이러한 현상을 Overflow라고 함.

// 반대로 되는 경우는 Underflow라고 함.
// 아래가 Underflow의 케이스임.

/*

#include <stdio.h>

int main()
{
	char num1 = -129; // num1의 출력값은 127
	unsigned char num2 = -1; // num2의 출력값은 255
	printf("%d %u\n", num1, num2);

	return 0;
}

*/

// ====== 7.3 자료형 크기 구하기 ===== //

// 자료형(타입)의 크기를 바이트(byte)단위로 구하는 방법 -> sizeof 연산자

/*
#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof(int); // num1의 자료형 크기를 구함

	printf("num1의 크기: %d\n", size);

	return 0;
}
*/

// 크기를 구하는 방법은 아래의 3가지임
// 1. sizeof 표현식(=변수)
// 2. sizeof(자료형)(=int, char...)
// 3. sizeof(표현식)

/*
#include <stdio.h>

int main()
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n"
		, sizeof(char)
		, sizeof(short)
		, sizeof(int)
		, sizeof(long)
		, sizeof(long long));

	return 0;
}
*/
// ====== 7.4 최솟값과 최댓값 표현하기 ===== //
// 부호가 있는 int의 경우 최솟값은 -2,147,483,648이지만,
// 이를 입력하면 에러가 남.
// 왜냐하면 필요한 header를 추가하지 않았기 때문임
// limits.h header를 추가하여야함

/*
#include <stdio.h>
#include <limits.h>

int main() {
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("%d, %d, %d, %ld, %lld\n"
		, num1, num2, num3, num4, num5);
	return 0;
}
*/
// 물론 여기서도 동일하게 오버플로우와 언더플로우 에러는 발생한다.

/*
// 오버플로우 예시
#include <stdio.h>
#include <limits.h>

int main() {
	unsigned char num1 = UCHAR_MAX + 1;
	unsigned short num2 = USHRT_MAX + 1;
	unsigned int num3 = UINT_MAX + 1;
	unsigned long num4 = ULONG_MAX + 1;
	unsigned long long num5 = ULLONG_MAX + 1;

	printf("%u %u %u %lu %llu\n"
		, num1, num2, num3, num4, num5);

	return 0;
}
*/

// 언더플로우 예시

/*
#include <stdio.h>
#include <limits.h>

int main() {
	
	unsigned char num1 = 0 - 1;
	unsigned short num2 = 0 - 1;
	unsigned int num3 = 0 - 1;
	unsigned long num4 = 0 - 1;
	unsigned long long num5 = 0 - 1;

	printf("%u %u %u %lu %llu\n"
		, num1, num2, num3, num4, num5);

	return 0;
}
*/

// ====== 7.5 크기가 표시된 정수 자료형 사용하기 ===== //
// 시간이 흐름에 따라 16비트, 32비트, 64비트 CPU가 나옴
// 근데 C언어의 정수 자료형의 이름은 혼란을 가져오기 시작함
// 그래서 stdint.h 헤더의 추가로 크기가 표시된 정수 자료형으로 표시할 수 있음.

/*
#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128; // 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
	int16_t num2 = 32767; // 16비트(2바이트) 크기의 부호 있는 정수형 변수 선언 
	int32_t num3 = 214783647; // 32비트(4바이트) 크기의 부호 있는 정수형 변수 선언
	int64_t num4 = 9223372036854775807; // 64비트(8바이트) 크기의 부호 있는 정수형 변수 선언

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	uint8_t num5 = 255; // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
	uint16_t num6 = 65535; // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
	uint32_t num7 = 4294967295; // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
	uint64_t num8 = 18446744073709551615; // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언

	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}
*/
//stdint.h안에 limits.h 헤더도 포함이 되어있으니까, stdint.h를 사용하자.

// ====== 7.7 연습문제: 정수형 변수 선언과 오버플로우 ===== //

// 0 0 -9223372036854775808이 출력되게 하자

/*
#include <stdio.h>

int main()
{
	unsigned char num1 = 256;
	unsigned short num2 = 65536;
	long long num3 = 9223372036854775808;

	printf("%u %u %lld\n", num1, num2, num3);

	return 0;
}

*/

// ====== 7.8 연습문제: 자료형 크기 구하기 ===== //
// 다음 소스 코드를 완성하여 14가 출력되게 만드세요

/*
#include <stdio.h>

int main()
{

	short num1;
	long long num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));

	return 0;
}

*/

// ====== 7.9 연습문제: 최댓값 표현하기 ===== //
//다음 소스 코드를 완성하여 127 32767 
// 2147483647 2147483647 9223372036854775807가 출력되게 만드세요

/*
#include <stdio.h>
#include <limits.h>
int main()
{
	char num1 = CHAR_MAX;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	long long num5 = LLONG_MAX;

	printf("%d %d %d %ld %lld\n"
		, num1, num2, num3, num4, num5);

	return 0;
}
*/

// ====== 7.10 연습문제: 크기가 표시된 정수 자료형 사용하기 ===== 
// 다음 소스 코드를 완성하여 - 128 65535 2147483647 
// 18446744073709551615가 출력되게 만드세요.

/*
#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	int32_t num3 = INT32_MAX;
	uint64_t num4 = UINT64_MAX;

	printf("%d %d %ld %llu\n", num1, num2, num3, num4);

	return 0;
}
*/

// ====== 7.11 심사문제 ===== 
// 다음 소스 코드를 완성하여 0 0 -128이 출력되게 만드세요.

/*
#include <stdio.h>

int main()
{
	unsigned short num1;
	unsigned int num2;
	char num3;

	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d", num1, num2, num3);

	return 0;

}
*/

// ====== 7.12 심사문제: 자료형 크기 구하기 ===== 
//다음 소스 코드를 완성하여 11이 출력되게 만드세요..

/*
#include <stdio.h>

int main()
{
	char num1;
	short num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));

	return 0;
}
*/

// ====== 7.13 심사문제: 최솟값 표현하기 ===== 
// 다음 소스 코드를 완성하여 - 128 0 - 2147483648 
// 0 - 9223372036854775808가 출력되게 만드세요.

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MIN;
	unsigned short num2 = 0;
	int num3 = INT_MIN;
	unsigned long num4 = 0;
	long long num5 = LLONG_MIN;

	printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);

	return 0;
}
*/

// ====== 7.14 심사문제: 크기가 표시된 정수 자료형 사용하기 ===== 
//다음 소스 코드를 완성하여 -128 65535 0 
// 9223372036854775807가 출력되게 만드세요.

#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	uint32_t num3 = 0;
	int64_t num4 = INT64_MAX;

	printf("%d %u %u %lld\n", num1, num2, num3, num4);

	return 0;
}