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

// ====== 7.0 ������ ���� ===== //
// ���� �������� signed�� unsigned�� ������.
//signed�� ��ȣ�� �����ϴ� ��, unsigned�� ��ȣ�� �������� �ʴ� ��
// unsigned�� 0���� �����ϸ�, ���� ���� char�� 2^8�� ������.
// signed�� unsigned�� �������� �ڸ� ������ �������� ��������� ���ϰ� ����.
// char < short< int ������ Ŀ���µ�, power�� 2�� ���ϸ� �Ȥ�.
// ����, char = 2^8, short int = 2^16, int = 2^32
// �׸��� �������� 1�� ���ָ� �ȴ�(����� ����������)
// �뷮�� ������� 1����Ʈ < 2����Ʈ < 4����Ʈ��.

// ====== 7.1 ������������ ���� ===== //
/*
#include <stdio.h>

int main()
{
	char num1 = 10; // 1����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� ���� �Ҵ�
	short num2 = 30000; // 2����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� ���� �Ҵ�
	int num3 = -1234567890; // 4����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� ���� �Ҵ�
    long num4 = 1234567890; // 4����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� ���� �Ҵ�
	long long num5 = -1234567890123456789; // 8����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� ���� �Ҵ�

	// char, short, int�� %d�� ����ϰ� long�� %ld, long long�� %lld�� ���
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}
/*
���⼭ ����ؾ� �� ���� char, short, int�� %d��,
long�� %ld��
long long�� %lld�� ����� �ߴٴ� ���̴�.
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
* ������ �������� �̰� unsigned�� ���̴�.
* ���⼭ ����ؾ� �� ���� char, short, int�� %u��,
long�� %lu��
long long�� %llu�� ����� �ߴٴ� ���̴�.

*/

// ====== 7.2 �����÷ο�� ����÷ο� ===== //

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

// num1 = 128�� ��µ��� �ʰ� -127�� ��µ�.
// �̴� char num1�� ������ �� �ִ� �ִ��� 127�� �Ѿ �׷���.
// num2�� �̿� ����������.
// �̷��� ������ Overflow��� ��.

// �ݴ�� �Ǵ� ���� Underflow��� ��.
// �Ʒ��� Underflow�� ���̽���.

/*

#include <stdio.h>

int main()
{
	char num1 = -129; // num1�� ��°��� 127
	unsigned char num2 = -1; // num2�� ��°��� 255
	printf("%d %u\n", num1, num2);

	return 0;
}

*/

// ====== 7.3 �ڷ��� ũ�� ���ϱ� ===== //

// �ڷ���(Ÿ��)�� ũ�⸦ ����Ʈ(byte)������ ���ϴ� ��� -> sizeof ������

/*
#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof(int); // num1�� �ڷ��� ũ�⸦ ����

	printf("num1�� ũ��: %d\n", size);

	return 0;
}
*/

// ũ�⸦ ���ϴ� ����� �Ʒ��� 3������
// 1. sizeof ǥ����(=����)
// 2. sizeof(�ڷ���)(=int, char...)
// 3. sizeof(ǥ����)

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
// ====== 7.4 �ּڰ��� �ִ� ǥ���ϱ� ===== //
// ��ȣ�� �ִ� int�� ��� �ּڰ��� -2,147,483,648������,
// �̸� �Է��ϸ� ������ ��.
// �ֳ��ϸ� �ʿ��� header�� �߰����� �ʾұ� ������
// limits.h header�� �߰��Ͽ�����

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
// ���� ���⼭�� �����ϰ� �����÷ο�� ����÷ο� ������ �߻��Ѵ�.

/*
// �����÷ο� ����
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

// ����÷ο� ����

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

// ====== 7.5 ũ�Ⱑ ǥ�õ� ���� �ڷ��� ����ϱ� ===== //
// �ð��� �帧�� ���� 16��Ʈ, 32��Ʈ, 64��Ʈ CPU�� ����
// �ٵ� C����� ���� �ڷ����� �̸��� ȥ���� �������� ������
// �׷��� stdint.h ����� �߰��� ũ�Ⱑ ǥ�õ� ���� �ڷ������� ǥ���� �� ����.

/*
#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128; // 8��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	int16_t num2 = 32767; // 16��Ʈ(2����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ���� 
	int32_t num3 = 214783647; // 32��Ʈ(4����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	int64_t num4 = 9223372036854775807; // 64��Ʈ(8����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	uint8_t num5 = 255; // 8��Ʈ(1����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
	uint16_t num6 = 65535; // 16��Ʈ(2����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
	uint32_t num7 = 4294967295; // 32��Ʈ(4����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
	uint64_t num8 = 18446744073709551615; // 64��Ʈ(8����Ʈ) ũ���� ��ȣ ���� ������ ���� ����

	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}
*/
//stdint.h�ȿ� limits.h ����� ������ �Ǿ������ϱ�, stdint.h�� �������.

// ====== 7.7 ��������: ������ ���� ����� �����÷ο� ===== //

// 0 0 -9223372036854775808�� ��µǰ� ����

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

// ====== 7.8 ��������: �ڷ��� ũ�� ���ϱ� ===== //
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 14�� ��µǰ� ���弼��

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

// ====== 7.9 ��������: �ִ� ǥ���ϱ� ===== //
//���� �ҽ� �ڵ带 �ϼ��Ͽ� 127 32767 
// 2147483647 2147483647 9223372036854775807�� ��µǰ� ���弼��

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

// ====== 7.10 ��������: ũ�Ⱑ ǥ�õ� ���� �ڷ��� ����ϱ� ===== 
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� - 128 65535 2147483647 
// 18446744073709551615�� ��µǰ� ���弼��.

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

// ====== 7.11 �ɻ繮�� ===== 
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 0 0 -128�� ��µǰ� ���弼��.

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

// ====== 7.12 �ɻ繮��: �ڷ��� ũ�� ���ϱ� ===== 
//���� �ҽ� �ڵ带 �ϼ��Ͽ� 11�� ��µǰ� ���弼��..

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

// ====== 7.13 �ɻ繮��: �ּڰ� ǥ���ϱ� ===== 
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� - 128 0 - 2147483648 
// 0 - 9223372036854775808�� ��µǰ� ���弼��.

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

// ====== 7.14 �ɻ繮��: ũ�Ⱑ ǥ�õ� ���� �ڷ��� ����ϱ� ===== 
//���� �ҽ� �ڵ带 �ϼ��Ͽ� -128 65535 0 
// 9223372036854775807�� ��µǰ� ���弼��.

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