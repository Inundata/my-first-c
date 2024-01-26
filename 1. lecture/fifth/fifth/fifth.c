// ========== 10.1 ���ͷ� ����ϱ� ==========
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 10); // 10: ���� ���ͷ�
//	printf("%f\n", 0.1f); // 0.100000: �Ǽ� ���ͷ�
//	printf("%c\n", 'a'); // a: ���� ���ͷ� // ���� �ϳ��� ������ ���� ����ǥ �Ѱ�
//	printf("%s\n", "Hello world!"); // Hello world! : ���ڿ� ���ͷ�
//									// ���ڿ��� ������ ū����ǥ��
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 19); // 19: 10�� ���� ���ͷ�
//	printf("0%o\n", 017); // 017: 8�� ���� ���ͷ�
//	printf("0x%X\n", 0x1F); // 0x1F: 16�� ���� ���ͷ�
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


// ========== 10.2 ��� ����ϱ� ==========
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

// ========== 10.3 ���� ���ͷ� ���̻� ����ϱ� ==========

// ���ͷ��� ũ�⸦ ��Ȯ�ϰ� ǥ���ϱ� ���� ���̻縦 ����� �� ����.
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%ld\n", -10L); // long ũ���� ���� ���ͷ�
//	printf("%lld\n", -1234567890123456789LL); // long long ũ���� ���� ���ͷ�
//
//	printf("%u\n", 10U); // unsigned int ũ���� ���� ���ͷ�
//	printf("%lu\n", 1234567890UL); // unsigned long ũ���� ���� ���ͷ�
//
//	printf("%lu\n", 10UL); // unsigned long ũ���� ���� ���ͷ�
//	printf("%llu\n", 1234567890123456789ULL); // unsigned long long ũ���� ���� ���ͷ�
//
//	return 0;
//}

// ���̻縦 �����ϸ� intũ�Ⱑ ��.
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

// �Ǽ����ͷ�

//#include <stdio.h>
//
//int main()
//{
//	printf("%f\n", 0.1f); // 0.100000: float ũ���� �Ǽ� ���ͷ�
//	printf("%f\n", 0.1F); // 0.100000: float ũ���� �Ǽ� ���ͷ�
//	printf("%f\n", 0.1); // 0.100000: double ũ���� �Ǽ� ���ͷ�
//	printf("%Lf\n", 0.1l); // 0.100000: long double ũ���� �Ǽ� ���ͷ�
//	printf("%Lf\n", 0.1L); // 0.100000: long double ũ���� �Ǽ� ���ͷ�
//
//	printf("%f\n", 1.0e-5f); // 0.000010: float ũ���� �Ǽ� ���ͷ�
//	printf("%f\n", 1.0e-5F); // 0.000010: float ũ���� �Ǽ� ���ͷ�
//	printf("%f\n", 1.0e-5); // 0.000010: double ũ���� �Ǽ� ���ͷ�
//	printf("%Lf\n", 1.0e-5l); // 0.000010: long double ũ���� �Ǽ� ���ͷ�
//	printf("%Lf\n", 1.0e-5L);  // 0.000010: long double ũ���� �Ǽ� ���ͷ�
//}

// ========== 10.6 ��������: ���ͷ� ����ϱ� ==========
//���� �ҽ� �ڵ带 �ϼ��Ͽ�
//Hello, world! 8 4.900000e-302�� ��µǰ� ���弼��.
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

// ========== 10.7 ��������: ��� ����ϱ� ==========
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

// ========== 10.8 �ɻ繮��: ���ͷ� ����ϱ� ==========

//#include <stdio.h>

//int main()
//{
//	printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);
//
//	return 0;
//}

// ========== 10.9 �ɻ繮��: ��� ����ϱ� ==========

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


// ************************ 11. ���� �Է� �ϱ�

// ========== 11.1 ���� �Է¹ޱ� ==========
//#define _CRT_SECURE_NO_WARNINGS // scaf ���� ���� ���� ������ ���� ����
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &num1); // ǥ�� �Է��� �޾Ƽ� ������ ����
//
//	printf("%d\n", num1); // ������ ������ ���
//
//	return 0;
//}

// ========== 11.2 �� ���� ���� �ΰ� �Է¹ޱ� ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1, num2;
//
//	printf("������ �� �� �Է��ϼ���: ");
//	scanf("%d %d", &num1, &num2); // ���� �� �� �Է¹޾Ƽ� ���� �ΰ��� ����
//
//	printf("%d %d\n", num1, num2); // ������ ������ ���
//
//	return 0;
//}

// ========== 11.3 �Ǽ� �Է¹ޱ� ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	float num1;
//
//	printf("�Ǽ��� �Է��ϼ���: ");
//	scanf("%f", &num1); // �Ǽ��� �Է¹޾Ƽ� ������ ����
//
//	printf("%f\n", num1); // ������ ������ ���
//
//	return 0;
//}

// ========== 11.4 ���� �Է¹ޱ� ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char c1;
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf("%c", &c1); // ���ڸ� �Է¹޾Ƽ� ������ ����
//
//	printf("%c\n", c1); //������ ������ ���
//
//	return 0;
//}

// ========== 11.6 ��������: �ѹ��� ���� ���� �Է¹ޱ� ==========
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	int num2;
//	int num3;
//
//	printf("���� �� ���� �Է��ϼ���: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	printf("%d\n", num3);
//
//	return 0;
//}

// ========== 11.7 �ɻ繮��: ����, �Ǽ�, ���� �Է¹ޱ� ==========
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