// --------------------- 5-1~2  ---------------------
/*
[변수 설정의 규칙]
- 영문 문자와 숫자를 사용할 수 있습니다.
- 대소문자를 구분합니다.
- 문자부터 시작해야 하며 숫자부터 시작하면 안 됩니다.
- _(밑줄 문자)로 시작할 수 있습니다.
- C 언어의 키워드(int, short, long, float, void, if, for, while, switch 등)는 사용할 수 없습니다.

- 변수 선언이 완료된 이후에는 마지막에 ; 을 붙여줘야 한다.
*/

/* 변수를 할당하는 방법
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	num1 = 10;
	num2 = 20;
	num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}

*/

// --------------------- 5-3 여러 변수를 한번에 할당---------------------
/*
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	num1 = 10;
	num2 = 20;
	num3 = 30;

	printf("%d %d %d", num1, num2, num3);

	return 0;
}
*/

// ------------- 5.4 변수 할당 뒤 다른 곳에서 초기화 -------------

/*
#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20, num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}
*/

// ------------- 5.5 연습문제 -------------
// 변수 여러 개를 선언하면서 값 초기화 하기
/*
#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}
*/