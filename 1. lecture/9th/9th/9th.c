// =================== 21��

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 1 && 1);
//	printf("%d\n", 1 && 0);
//	printf("%d\n", 0 && 1);
//	printf("%d\n", 0 && 0);
//	printf("%d\n", 2 && 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 1 || 1);
//	printf("%d\n", 1 || 0);
//	printf("%d\n", 0 || 1);
//	printf("%d\n", 0 || 0);
//	printf("%d\n", 2 || 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", !1);
//	printf("%d\n", !0);
//
//	printf("%d\n", !3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int num3 = 30;
//	int num4 = 15;
//
//	printf("%d\n", num1 > num2 && num3 > num4);
//	printf("%d\n", num1 > num2 && num3 < num4);
//	
//	printf("%d\n", num1 > num2 || num3 < num4);
//	printf("%d\n", num1 < num2 || num3 < num4);
//
//	printf("%d\n", !(num1 > num2));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 0;
//
//	if (num1 && num2)
//		printf("True\n");
//	else
//		printf("False\n");
//
//	if (num1 || num2)
//		printf("True\n");
//	else
//		printf("False\n");
//
//	if (!num1)
//		printf("True\n");
//	else
//		printf("False\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int num1 = 0;
//int num2 = 10;
//
//int main()
//{
//	if ((num1 != 0) && (num2 / num1) < 20)
//		printf("True\n");
//	else
//		printf("False\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 0;
//
//	printf("%s\n", num1 && num2 ? "True" : "False");
//
//	printf("%s\n", num1 || num2 ? "True" : "False");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num1, num2;
//
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 && num2)
//		printf("��\n");
//	else
//		printf("����\n");
//
//	if (num1 || num2)
//		printf("��\n");
//	else
//		printf("����\n");
//
//	if (!num1)
//		printf("��\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

// =================== 22��

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	bool b1 = true;
//
//	if (b1 == true)
//		printf("True\n");
//	else
//		printf("False\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	printf("int�� ũ��: %d\n", sizeof(int));
//
//	printf("bool�� ũ��: %d\n", sizeof(bool));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	printf("%d\n", true && false);
//	printf("%d\n", true && false);
//	printf("%d\n", false && false);
//	printf("%d\n", false && false);
//
//	printf("%d\n", )
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	bool b1 = false;
//	bool b2 = true;
//
//	if (b1 != true)
//		printf("��\n");
//	else
//		printf("����\n");
//
//	printf("%s\n", b2 == false ? "��" : "����");
//
//	return 0;
//}

// =================== 23��

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 1; // 0000 0001
//	unsigned char num2 = 3; // 0000 0011
//
//	printf("%d\n", num1 & num2);// 0000 0001
//	printf("%d\n", num1 | num2); // 0000 0011
//	printf("%d\n", num1 ^ num2); // 0000 0010
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 162; // 1010 0010
//	unsigned char num2;
//
//	num2 = ~num1; // 0101 1101 // 2^6 + 2^4 + 2^3 + 2^2 + 1 = 93
//	
//	printf("%d\n", num2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 3; // 0000 0011
//	unsigned char num2 = 24; // 0001 1000
//
//	printf("%u\n", num1 << 3); // 0001 1000
//	printf("%u\n", num2 >> 2); // 0000 0110
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 4; // 0000 0100;
//	unsigned char num2 = 4; // 0000 0100;
//	unsigned char num3 = 4; // 0000 0100;
//	unsigned char num4 = 4; // 0000 0100;
//	unsigned char num5 = 4; // 0000 0100;
//
//	num1 %= 5; // 5(0000 0101) AND ���� �� �Ҵ�
//	num2 |= 2; // 2(0000 0010) OR ���� �� �Ҵ�
//	num3 ^= 3; // 3(0000 0011) XOR ���� �� �Ҵ�
//	num4 <<= 2; // ��Ʈ�� �������� 2�� �̵��� �� �Ҵ�
//	num5 >>= 2; // ��Ʈ�� ���������� 2�� �̵��� �� �Ҵ�
//
//	printf("%u\n", num1);
//	printf("%u\n", num2);
//	printf("%u\n", num3);
//	printf("%u\n", num4);
//	printf("%u\n", num5);
//
//	return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 1; // 0000 0001
//	unsigned char num2 = 5; // 0000 0101
//
//	printf("%u\n", num1 | num2);
//	printf("%u\n", num1 ^ num2);
//	printf("%u\n", num1 & num2);
//	//250 = 128 + 64 + 32 + 16 + 8 + 2 = 1111 1010
//	
//	num1 = ~num2;
//
//	printf("%u\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 32; // 0010 0000
//
//	num1 = num1 >> 4 << 1; // 0000 0010 -> 
//
//	printf("%u\n", num1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	unsigned int num1; 
//	unsigned int num2; 
//
//	scanf("%d %d", &num1, &num2);
//
//	printf("%u\n", num1 ^ num2);
//	printf("%u\n", num1 | num2);
//	printf("%u\n", num1 & num2);
//	printf("%u\n", ~num1);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	unsigned long long num1; 
//
//	scanf("%lld", &num1);
//
//	num1 = num1 << 20 >> 4;
//
//	printf("%llu\n", num1);
//
//	return 0;
//
//}

/* 24�� */

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 1;
//
//	printf("%u\n", num1 << 1);
//	printf("%u\n", num1 << 2);
//	printf("%u\n", num1 << 3);
//	printf("%u\n", num1 << 4);
//	printf("%u\n", num1 << 5);
//	printf("%u\n", num1 << 6);
//	printf("%u\n", num1 << 7);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char num1 = 131; // 131: 1000 0011
//	char num2 = -125; // 1000 0011
//
//	unsigned char num3;
//	char num4;
//
//	num3 = num1 >> 5;
//	num4 = num2 >> 5;
//
//	printf("%u\n", num3);
//	printf("%d\n", num4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char num1 = 67; // 67: 0100 0011
//	char num2;
//
//	num2 = num1 >> 5; // 0000 0010
//
//	printf("%d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char num1 = 113; // 113: 0111 0001
//	char num2 = -15; // -15: 1111 0001
//	char num3, num4, num5, num6;
//
//	num3 = num1 << 2; // 1100 0100
//	num4 = num2 << 2; // 1100 0100
//	num5 = num1 << 4; // 0001 0000
//	num6 = num2 << 4; // 0001 0000
//
//	printf("%d\n", num3);
//	printf("%d\n", num4);
//	printf("%d\n", num5);
//	printf("%d\n", num6);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char flag = 0;
//
//	flag |= 1;
//	flag |= 2;
//	flag |= 4;
//
//	printf("%u\n", flag);
//
//    if (flag & 1)    // & �����ڷ� 0000 0001 ��Ʈ�� ���� �ִ��� Ȯ��
//        printf("0000 0001�� ���� ����\n");
//    else
//        printf("0000 0001�� ���� ����\n");
//
//    if (flag & 2)    // & �����ڷ� 0000 0010 ��Ʈ�� ���� �ִ��� Ȯ��
//        printf("0000 0010�� ���� ����\n");
//    else
//        printf("0000 0010�� ���� ����\n");
//
//    if (flag & 4)    // & �����ڷ� 0000 0100 ��Ʈ�� ���� �ִ��� Ȯ��
//        printf("0000 0100�� ���� ����\n");
//    else
//        printf("0000 0100�� ���� ����\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char flag = 7; // 7: 0000 0111
//
//	flag &= ~2; // 0000 0010 -> 1111 1101 -> 0000 0101
//
//	printf("%u\n", flag);
//
//	if (flag & 1)
//		printf("0000 0001�� ���� ����\n");
//	else
//		printf("0000 0001�� ���� ����\n");
//
//	if (flag & 2)
//		printf("0000 0010�� ���� ����\n");
//	else
//		printf("0000 0010�� ���� ����\n");
//
//	if (flag & 4)
//		printf("0000 0100�� ���� ����\n");
//	else
//		printf("0000 0100�� ���� ����\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char flag = 7; // 0000 0111
//
//	flag ^=2; // 0000 0111 �׸��� 0000 0010�� XOR ���� -> 0000 0101
//	flag ^= 8; // 0000 0101 �׸��� 0000 1000�� XOR ���� -> 0000 1101
//
//	printf("%u\n", flag);
//
//	if (flag & 1)
//		printf("0000 0001�� ���� ����\n");
//	else
//		printf("0000 0001�� ���� ����\n");
//
//	if (flag & 2)
//		printf("0000 0010�� ���� ����\n");
//	else
//		printf("0000 0010�� ���� ����\n");
//
//	if (flag & 4)
//		printf("0000 0100�� ���� ����\n");
//	else
//		printf("0000 0100�� ���� ����\n");
//
//	if (flag & 8)
//		printf("0000 1000�� ���� ����\n");
//	else
//		printf("0000 1000�� ���� ����\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char num1 = 128;
//
//	num1 = num1 >> 2;
//
//	printf("%u\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned char flag1 = 1 << 7; // 1000 0000
//	unsigned char flag2 = 1 << 3; // 0000 1000
//
//	flag1 |= 1 << 2; // 1000 0100
//	flag1 &= ~(1 << 7); // 1000 0100 & 0111 1111
//	flag2 ^= 1 << 3;
//
//	printf("%u %u\n", flag1, flag2);
//
//	return 0;
//}

//#define _USE_MINGW_ANSI_STDIO 1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	unsigned char flag = 16; // 0001 0000
//	unsigned char num1, num2;
//	// num1 = 0000 0001 
//	// num2 = 0100 0000
//
//	scanf("%hhu %hhu", &num1, &num2);
//
//	flag |= num1 << 3; // num1: 0000 1000 --> ��� 0001 1000
//	flag &= ~(num2 >> 2); // num2: 1110 1111 --> ��� 0000 1000
//	flag ^= 128; // 1000 0000
//
//	printf("%u\n", flag);
//
//	return 0;
//
//
//}


/* 25�� */

//#include <stdio.h>
//
//int main()
//{
//	int num1;
//
//	num1 = 35 + 1 * 2;
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	int num2 = 3;
//
//	num1 = 10 + 2 / (5 - 3) * ++num2;
//
//	printf("%d\n", num1);
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	bool b1;
//
//	b1 = (false || false) && !false || false;
//
//	printf("%d\n", b1);
//
//	return 0
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1;
//
//	num1 = 5 == 5 < 10;
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 1;
//	int num2;
//
//	num2 = 32 >> 2 * ++num1 + (5 % 2);
//
//	printf("%d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	bool b1 = !false && true || (false || false);
//
//	printf("%d\n", b1);
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int num1 = 2;
//	int num2 = 4;
//
//	num2 = num1 << num1 < num2 + 1;
//
//	printf("%d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int num3;
//
//	num3 = 2 * ((1 << num1) + (2 >> num2));
//
//	printf("%d\n", num3);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d\n", ((num1 + num2) * 10) - num3);

	return 0;
}