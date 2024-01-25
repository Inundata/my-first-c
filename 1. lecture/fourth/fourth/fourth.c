/* [�ε��Ҽ��� ���]
* �ڷ����� �����κ��� ��Ʈ ������ ������
* ��ȣ(significand), ���(base), ����(exponent)�� �����Ͽ� �Ǽ��� ǥ���Ѵ�.
* ������ ���� ���(n)�� ����(p)��ŭ �ŵ������� ���� ����(m)�� ���ϴ� ����� �����
* ����� 2�� �����Ǿ��־� �̸� ���� �������� ����
* (�ε��Ҽ���) = ��ȣ m * n^p 

float: �����е�
double: �����е� -> ���� ��Ȯ��
*/

// ====== 8.1 �Ǽ��� ������ ���� ======
/*
#include <stdio.h>

int main()
{
	float num1 = 0.1f; // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�

	double num2 = 3867.215820; // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
								// double�� ���� �ڿ� �ƹ��͵� ������ ����.

	long double num3 = 9.327513l; // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
								// long double�� ���� �ڿ� l�� ����.

	// float�� double�� %f�� ���, long double�� %Lf�� ���
	printf("%f %f %Lf\n", num1, num2, num3);
	// �̶� f�� floating point��� �ǹ��̸�
	// Lf�� long floating point�� �ǹ��̴�.

	return 0;

}
*/

/*
#include <stdio.h>

int main()
{
	float num1 = 3.e5f; // ���� ǥ������� 300000�� ǥ��
						// float�� ���� �ڿ� f�� ����

	double num2 = -1.3827e-2; // ���� ǥ������� -0.013827�� ǥ��
							// double�� ���� �ڿ� �ƹ��͵� ������ ����

	long double num3 = 5.21e+9l; // ���� ǥ������� 5210000000�� ǥ��
								// long double�� ���� �ڿ� l�� ����

	// float�� double�� %f�� ���, long double�� %Lf�� ���
	printf("%f %f %Lf", num1, num2, num3);

	//  ���� ǥ������� ����Ҷ�, float�� double�� %e�� ���, long double�� %Le�� ���
	printf("%e %e %Le", num1, num2, num3);

	return 0;
}
*/
// ====== 8.2 �ڷ��� ũ�� ���ϱ� ======

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


// ====== 8.3 ��� �ּڰ��� �ִ� ǥ���ϱ� ======
/*
#include <stdio.h>
#include <float.h> // �Ǽ� �ڷ����� ��� �ּڰ�, �ִ��� ���ǵ� ��� ����

int main()
{
	float num1 = FLT_MIN; // float�� ��� �ּڰ�
	float num2 = FLT_MAX;// float�� ��� �ִ�
	double num3 = DBL_MIN; // double�� ��� �ּڰ�
	double num4 = DBL_MAX; // double�� ��� �ִ�
	long double num5 = LDBL_MIN; // long double�� ��� �ּڰ�
	long double num6 = LDBL_MAX; // long double�� ��� �ִ�

	printf("%.40f %.2f\n", num1, num2);

	printf("%e %e\n", num3, num4);

	printf("%Le %Le\n", num5, num6);

	return 0;
}
*/

// ====== 8.4 �����÷ο�� ����÷ο� �˾ƺ��� ======
/*
#include <stdio.h>
#include <float.h> // �Ǽ� �ڷ����� ��� �ּڰ��� �ִ��� ���ǵ� ��� ����

int main()
{
	float num1 = FLT_MIN; // float�� ��� �ּڰ�
	float num2 = FLT_MAX; // float�� ��� �ִ�

	//float�� ��� �ּڰ��� 100000000.0���� ������ ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
	num1 /= 100000000.0f;

	//float�� ��� �ִ񰪿� 1000.0�� ���ϸ� ������ �� �ִ� ������ �Ѿ�Ƿ� �����÷ο� �߻�

	num2 *= 1000.0f;

	printf("%e %e\n", num1, num2); // 0.000000e+00 inf: �Ǽ��� ����÷ο�� 0
									// �����÷ο�� ���Ѵ밡 ��

	return 0;

}
*/

// C������ ����÷ο츦 0���� ǥ���ϰ�
// �����÷ο�� inf�� ǥ���Ѵ�.

// ====== 8.6 ��������: �Ǽ��� ���� �����ϱ� ======
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

// ====== 8.7 ��������: �ڷ��� ũ�� ���ϱ� ======
//
//#include <stdio.h>
//
//int main()
//{
//	double num1 = 0.4284;
//	float num2 = 2.7f;
//
//	printf("num1�� ũ��: %d, num2�� ũ��: %d\n"
//		, sizeof(num1)
//		, sizeof(num2));
//
//	return 0;
//}

// ====== 8.8 ��������: �ּڰ��� �ִ� ǥ���ϱ� ======
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

// ====== 8.9 ��������: ����÷ο� ======

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

// ====== 8.10 �ɻ繮�� ======
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 1.800000 2.900000 3.700000�� 4 8�� ��µǰ� ���弼��.

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

// ====== 8.11 �ɻ繮��: �ּڰ��� �ִ� ǥ���ϱ� ======
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �� �Ǽ� �ڷ����� �ּڰ��� �ִ��� ��µǰ� ���弼��.
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

// ====== 8.12 �ɻ繮��: �����÷ο� ======
//���� �ҽ� �ڵ带 �ϼ��Ͽ� -inf�� ��µǰ� ���弼��.
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

// ====== 9.0 ���� �ڷ��� ����ϱ� ======
// A: 65, a: 97
// C���� ���ڴ� ''�� ��� ǥ���ϸ�, 
// �Ѱ��� ���ڸ� ���� �� ����.

// ====== 9.1 ���� ���� �����ϱ� ======

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//
//	// char�� %c�� ����ϸ� ���ڰ� ����̵ǰ�
//	// %d�� ����ϸ� �������� ��µ�.
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
//	// char�� %c�� ����ϸ� ���ڰ� ��µǰ�, %d�� ����ϸ� ���� ���� ��µ�
//	// %x�� ����ϸ� 16������ ��µ�
//
//	printf("%c %d, 0%x\n", c1, c1, c1);
//	printf("%c %d, 0x%x\n", c2, c2, c2);
//}

//���� 0�� ���� 0�� �ٸ���.
//#include <stdio.h>
//
//int main()
//{
//	char c1 = '0';
//	char c2 = 0;
//
//	printf("%c %d\n", c1, c1);
//	printf("%c %d\n", c2, c2); // ASCII���� ���� �� NULL��.
//
//	return 0;
//}

// ====== 9.2 ���ڷ� �����ϱ� ======

// ���ڵ� C���� ������ ������ �Ǳ� ������ ������ �����ϴ�

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

// ====== 9.3 ���� ���� ����ϱ� ======
//
//#include <stdio.h>
//int main()
//{
//	char c1 = 'a'; 
//	char c2 = 'b';
//	char lineFeed = '\n'; // ���� ���� �Ҵ�
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

// ====== 9.5 �������� ======
//���� �ҽ� �ڵ带 �ϼ��Ͽ� "Hello   world"�� ��µǰ� ���弼��
// ("Hello"�� "world" ���̴� ������ ���ϴ�).

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

// ====== 9.6 ���� ���ڸ� ���ڷ� ��ȯ�ϱ� ======
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 2�� 5�� �� �ٿ� ��µǰ� ���弼��.

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

// ====== 9.7 �ɻ� ����: ���� ���� ����ϱ� ======
//���� �ҽ� �ڵ带 �ϼ��Ͽ� "Hello   world"�� �� �ٿ� �� �� ��µǰ� ���弼��
//("Hello"�� "world" ���̴� ������ ���ϴ�).

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

// ====== 9.8 �ҹ��ڸ� �빮�ڷ� �ٲٱ� ======

// 'A'�� ��µǰ� �ٲ��

#include <stdio.h>

int main()
{
	char c1 = 'a';

	printf("%c\n", c1 -= 32);

	return 0;
}