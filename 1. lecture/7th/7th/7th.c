//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#ifndef M_PI
//#define M_PI 3.14159265358979323846
//#endif
//
//int main()
//{
//	float diameter;
//	float radius;
//	float area;
//
//	scanf("%f", &diameter);
//
//	radius = diameter / 2;
//
//	area = M_PI * radius * radius;
//
//	printf("%f\n", area);
//
//	return 0;
//}

// ######## 15강

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 1 % 3);
//	printf("%d\n", 2 % 3);
//	printf("%d\n", 3 % 3);
//	printf("%d\n", 4 % 3);
//	printf("%d\n", 5 % 3);
//	printf("%d\n", 6 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 7;
//	num1 %= 2;
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 15;
//	int num2 = 27;
//	int num3 = 3;
//	num1 %= num3;
//	num2 %= num3;
//
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	int num1;
//	int num2;
//	int num3;
//	int num4;
//	int num5;
//
//	scanf("%d", &num);
//
//	num1 = num % 10;
//	num /= 10;
//	num2 = num % 10;
//	num /= 10;
//	num3 = num % 10;
//	num /= 10;
//	num4 = num % 10;
//	num /= 10;
//	num5 = num % 10;
//
//
//	printf("%d %d %d %d %d", num1, num2, num3, num4, num5);
//	return 0;
//}

// ######## 16강

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 11;
//	float num2 = 4.4f;
//
//	printf("%f\n", num1 + num2);
//	printf("%f\n", num1 - num2);
//	printf("%f\n", num1 * num2);
//	printf("%f\n", num1 / num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	long long num1 = 123456789000;
//	int num2 = 10;
//
//	// int보다 long long이 자료형 크기가 크므로 long long 으로 변환
//
//	printf("%lld\n", num1 + num2);
//	printf("%lld\n", num1 - num2);
//	printf("%lld\n", num1 * num2);
//	printf("%lld\n", num1 / num2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float num1 = 11.0f;
//	float num2 = 5.0f;
//
//	int num3 = num1 / num2;
//
//	printf("%d\n", num3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 'a';
//
//	int num2 = c1;
//
//	printf("%c\n", num2);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	float num1;

	scanf("%f", &num1);

	int num2 = num1;

	printf("%d\n", num2);

	return 0;
}