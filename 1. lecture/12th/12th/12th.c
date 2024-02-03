/* 39강 */
//#include <stdio.h>
//
//int main()
//{
//	char s1 = "Hello";
//
//	printf("%s", s1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char c1 = 'a';
//
//	char* s1 = "Hello";
//
//	printf("%c\n", c1);
//	printf("%s\n", s1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char* s1 = "Hello";
//
//	printf("%c\n", s1[1]);
//	printf("%c\n", s1[4]);
//	printf("%c\n", s1[5]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char s1[10] = "Hello";
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char s1[10] = "Hello";
//
//	printf("%c\n", s1[1]);
//	printf("%c\n", s1[4]);
//	printf("%c\n", s1[5]);
//
//	return 0;
//}

#/*include <stdio.h>

int main()
{
	char s1[10] = "Hello";

	s1[0] = 'A';

	printf("%s\n", s1);

	return 0;
}*/

//#include <stdio.h>
//
//int main()
//{
//	char* s1 = "Beethoven 9th Symphony";
//	printf("%s\n", s1);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char* s1 = "Beethoven\n9th\nSymphony";
//
//	printf("%s\n", s1);
//
//	return 0;
//}

/* 40강 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//
//	printf("문자열을 입력하세요: ");
//	scanf("%s", s1);
//
//	printf("%s\n", s1);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[30];
//
//	printf("문자열을 입력하세요: ");
//	scanf("%[^\n]s", s1);
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = malloc(sizeof(char) * 10);
//
//	printf("문자열을 입력하세요: ");
//	scanf("%s", s1);
//
//	printf("%s\n", s1);
//
//	free(s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//	char s2[10];
//
//	printf("문자열을 입력하세요: ");
//	scanf("%s %s", s1, s2);
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[30], s2[30], s3[30], s4[30];
//
//	scanf("%s %s %s %s", s1, s2, s3, s4);
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//	printf("%s\n", s3);
//	printf("%s\n", s4);
//
//	return 0;
//
//}

/* 41강 */

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//	printf("%d\n", strlen(s1));
//	printf("%d\n", strlen(s2));
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[10] = "Hello";
//	char* s2 = "Hello";
//
//	int ret = strcmp(s1, s2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%d\n", strcmp("aaa", "aaa"));
//	printf("%d\n", strcmp("aab", "aaa"));
//	printf("%d\n", strcmp("aab", "aac"));
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[20];
//	char s2[20];
//
//	printf("문자열 두 개를 입력하세요: ");
//	scanf("%s %s", s1, s2);
//
//	int ret = strcmp(s1, s2);
//
//	switch (ret)
//	{
//	case 0:
//		printf("두 문자열이 같음.\n");
//		break;
//	case 1:
//		printf("%s보다 %s이 큼.\n", s2, s1);
//		break;
//	case -1:
//		printf("%s보다 %s이 큼.\n", s1, s2);
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30];
//	int length;
//
//	scanf("%s", s1);
//
//	length = strlen(s1);
//
//	printf("%d\n", length);
//
//	return 0;
//	
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30], s2[30];
//
//	scanf("%s %s", s1, s2);
//
//	int ret;
//
//	ret = strcmp(s1, s2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

/* 42강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[10] = "Hello";
//	char s2[10];
//
//	strcpy(s2, s1);
//
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* s1 = "Hello";
//	char* s2 = "";
//
//	strcpy(s2, s1);
//
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "hello";
//	char* s2 = malloc(sizeof(char) * 10);
//
//	strcpy(s2, s1);
//
//	printf("%s\n", s2);
//
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[10] = "world";
//	char s2[20] = "Hello";
//
//	strcat(s2, s1);
//
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "world";
//	char* s2 = malloc(sizeof(char) * 20);
//
//	strcpy(s2, "Hello");
//
//	strcat(s2, s1);
//
//	printf("%s\n", s2);
//
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char s1[10] = "Hello";
//	char* s2 = malloc(sizeof(char) * 10);
//
//	strcpy(s2, s1);
//
//	printf("%s\n", s2);
//
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char s1[10] = "world";
//	char* s2 = malloc(sizeof(char) * 20);
//
//	strcpy(s2, "Hello");
//	strcat(s2, s1);
//
//	printf("%s\n", s2);
//
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = " Wonderland";
//	char* s2 = malloc(sizeof(char) * 30);
//
//	s2 = strcpy(s2, "Alice in");
//
//	s2 = strcat(s2, s1);
//
//	printf("%s\n", s2);
//	
//	free(s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[31];
//	char s2[31];
//
//	scanf("%s", s1);
//	strcpy(s2, s1);
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[40];
//
//	scanf("%s", s1);
//	strcat(s1, "th");
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[20];
//
//	sprintf(s1, "Hello, %s", "world!");
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[30];
//	sprintf(s1, "%c %d %f %e", 'a', 10, 3.f, 1.123456e-12f);
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = malloc(sizeof(char) * 20);
//
//	sprintf(s1, "Hello, %s", "world!");
//
//	printf("%s\n", s1);
//
//	free(s1);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[20];
//
//	sprintf(s1, "%dth %s", 9, "Symphony");
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[20];
//
//	sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99);
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	char name[31], result[40];
//
//	scanf("%d %s", &number, name);
//
//	if (number == 1)
//		sprintf(result, "%dst %s", number, name);
//
//	else if (number == 2)
//		sprintf(result, "%dnd %s", number, name);
//
//	else if (number == 3)
//		sprintf(result, "%drd %s", number, name);
//	else
//		sprintf(result, "%dth %s", number, name);
//
//	printf("%s\n", result);
//
//	return 0;
//}

/* 44강 */

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "A Garden Diary";
//
//	char* ptr = strchr(s1, 'a');
//
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strchr(ptr + 1, 'a');
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "A Garden Diary";
//
//	char* ptr = strrchr(s1, 'a');
//
//	printf("%s\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "A Graden Diary";
//
//	char* ptr = strstr(s1, "den");
//
//	printf("%s\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "Alice in Wonderland";
//
//	char* ptr = strchr(s1, 'n');
//
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strchr(ptr +1, 'n');
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "The Little Prince";
//
//	char* ptr = strstr(s1, "ince");
//
//	printf("%s\n", ptr);
//
//	return 0;
//}

//#define _CR_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	char s1[1100];
//
//	scanf("%[^\n]s", s1);
//
//	char* ptr = strchr(s1, ' ');
//
//	int number = 0;
//
//	while (ptr != NULL)
//	{
//		number += 1;
//		ptr = strchr(ptr + 1, ' ');
//	}
//
//	printf("%d", number);
//
//	return 0;
//}

/* 45강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "The Little Prince";
//
//	char* ptr = strtok(s1, " ");
//
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, " ");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "2015-06-10T15:32:19";
//
//	char* ptr = strtok(s1, "-T:");
//
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, " ");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[30] = "The Little Prince";
//	char* sArr[10] = { NULL, };
//	int i = 0;
//
//	char* ptr = strtok(s1, " ");
//
//	while (ptr != NULL)
//	{
//		sArr[i] = ptr;
//		i++;
//
//		ptr = strtok(NULL, " ");
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (sArr[i] != NULL)
//			printf("%s\n", sArr[i]);
//	}
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[40] = "Alice's Adventures in Wonderland";
//
//	char* tok = strtok(s1, " ");
//
//	while (tok != NULL)
//	{
//		printf("%s\n", tok);
//		tok = strtok(NULL, " ");
//	}
//
//	return;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[61];
//	scanf("%s", s1);
//
//	char* ptr = strtok(s1, ".");
//
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, ".");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s1[1001];
//
//    scanf("%[^\n]s", s1);
//
//    char* ptr = strtok(s1, " .,"); 
//
//    int number = 0;
//
//    while (ptr != NULL)
//    {
//        if (strcmp(ptr, "the") == 0) // 수정: 현재 토큰이 "the"인지 확인
//        {
//            number += 1;
//        }
//
//        ptr = strtok(NULL, " .,");
//    }
//
//    printf("%d\n", number);
//
//    return 0;
//}

/* 46강 */

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "283";
//	int num1;
//
//	num1 = atoi(s1);
//
//	printf("%d\n", num1);
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* s1 = "0xaf10";
//	int num1;
//
//	num1 = strtol(s1, NULL, 16);
//
//	printf("%x %d\n", num1, num1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "0xaf10 42 0x27C 9952";
//	int num1, num2,  num3,  num4;
//	char* end;
//
//	num1 = strtol(s1, &end, 16);
//	num2 = strtol(end, &end, 10);
//	num3 = strtol(end, &end, 16);
//	num4 = strtol(end, NULL, 10);
//
//	printf("%x\n", num1);
//	printf("%d\n", num2);
//	printf("%x\n", num3);
//	printf("%d\n", num4);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "35.283672";
//	float num1;
//
//	num1 = atof(s1);
//
//	printf("%f\n", num1);
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "3.e5";
//	float num1;
//
//	num1 = atof(s1);
//
//	printf("%e %f\n", num1, num1);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "35.283572 3.e5 9.281772 7.e-5";
//	float num1, num2, num3, num4;
//	char* end;
//
//	num1 = strtof(s1, &end);
//	num2 = strtof(end, &end);
//	num3 = strtof(end, &end);
//	num4 = strtof(end, NULL);
//
//	printf("%f\n", num1);
//	printf("%e\n", num2);
//	printf("%f\n", num3);
//	printf("%e\n", num4);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//	int num1 = 283;
//
//	sprintf(s1, "0x%x", num1);
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//	float num1 = 38.972340f;
//
//	sprintf(s1, "%f", num1);
//	printf("%s\n", s1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "20972";
//	int num1;
//
//	num1 = atoi(s1);
//
//	printf("%d\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "0x1facefee";
//	int num1;
//
//	num1 = strtol(s1, NULL, 16);
//
//	printf("0x%X\n", num1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "97.527824";
//	float num1;
//
//	num1 = atof(s1);
//
//	printf("%f\n", num1);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* s1 = "29.977213 4528.112305";
//	float num1;
//	float num2;
//	char* end;
//
//	num1 = strtof(s1, &end);
//	num2 = strtof(end, &end);
//
//	printf("%f\n", num1);
//	printf("%f\n", num2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[30];
//
//	float num1 = 98.415237f;
//	int num2 = 0x3fc31920;
//
//	sprintf(s1, "%f 0X%x", num1, num2);
//
//	printf("%s\n", s1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char s1[31];
//	int num1, num2;
//	float num3;
//	char* end;
//
//	scanf("%[^\n]", s1);
//
//	num1 = strtol(s1, &end, 16);
//	num2 = strtol(end, &end, 10);
//	num3 = strtof(end, NULL);
//
//	printf("0x%x\n", num1);
//	printf("%d\n", num2);
//	printf("%f\n", num3);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char s1[10];
//	char s2[20];
//	int num1;
//	float num2;
//
//	scanf("%d %f", &num1, &num2);
//
//	sprintf(s1, "%d", num1);
//	sprintf(s2, "%f", num2);
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//int main()
//{
//	char word[30];
//	int length;
//	bool isPalindrome = true;
//
//	printf("단어를 입력하세요: ");
//	scanf("%s", word);
//
//	length = strlen(word);
//
//	// 0부터 문자열 길이의 절반만큼 반복
//	for (int i = 0; i < length / 2; i++)
//	{
//		// 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르면
//		if (word[i] != word[length - 1 - i])
//		{
//			isPalindrome = false;
//			break;
//		}
//	}
//
//	printf("%d\n", isPalindrome);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char text[30] = "Hello";
//	int length;
//
//	length = strlen(text);
//
//	for (int i = 0; i < length - 1; i++)
//	{
//		printf("%c%c\n", text[i], text[i +1]);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char text[100] = "this is c language";
//	char* tokens[30] = { NULL, };
//	int count = 0;
//
//	char* ptr = strtok(text, " ");
//
//	while (ptr != NULL)
//	{
//		tokens[count] = ptr;
//		count++;
//
//		ptr = strtok(NULL, " ");
//	}
//
//	for (int i = 0; i < count - 1; i++)
//	{
//		printf("%s %s\n", tokens[i], tokens[i + 1]);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//int main()
//{
//	long long num1;
//	char text[30];
//
//	printf("정수를 입력하세요:  ");
//	scanf("%lld", &num1);
//
//	sprintf(text, "%lld", num1);
//
//	int length;
//	bool isPalindrome = true;
//
//	length = strlen(text);
//
//	int begin = 0;
//	int end = length - 1;
//
//	while (begin <end)
//	{
//		if (text[begin] != text[end])
//		{
//			isPalindrome = false;
//			break;
//		}
//
//		begin++;
//		end--;
//
//	}
//
//	printf("%d\n", isPalindrome);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char text[30];
//	int length, n = 4;
//
//	scanf("%s", text);
//
//	length = strlen(text);
//
//	if (length <= 3)
//	{
//		printf("wrong\n");
//	}
//
//	else
//	{
//		for (int i = 0; i < length - n + 1 ; i++)
//		{
//			for (int j = 0; j < n ; j++)
//				printf("%c", text[i + j]);
//
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//int main()
//{
//	char s1[31];
//	char s2[31] = {NULL,};
//	bool isPalindrome = true;
//
//	scanf("%[^\n]s", s1);
//
//	int length;
//
//	char* ptr = strtok(s1, " ");
//
//	while (ptr != NULL)
//	{
//		strcat(s2, ptr);
//		ptr = strtok(NULL, " ");
//	}
//
//	length = strlen(s2);
//
//	for (int i = 0
//		; i <= length / 2 - 1
//		; i++)
//	{
//		if (s2[i] != s2[length - 1 - i])
//		{
//			isPalindrome = false;
//			break;
//		}
//	}
//
//	printf("%d\n", isPalindrome);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int num;
//	char s1[11];
//	int length;
//
//	scanf("%d %s", &num, s1);
//
//	length = strlen(s1);
//
//	if (length < num)
//	{
//		printf("wrong\n");
//	}
//
//	else
//	{
//		for (int i = 0
//			; i < length - num + 1
//			; i++)
//		{
//			for (int j = 0
//				; j < num
//				; j++)
//			{
//				printf("%c", s1[i + j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//	
//}

/*48강 구조체 사용하기*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//};
//
//int main()
//{
//	struct Person p1;
//
//	//점으로 구조체 멤버에 접근
//	strcpy(p1.name, "홍길동");
//	p1.age = 30;
//	strcpy(p1.address, "서울시 용산구 한남동");
//
//	printf("이름: %s\n", p1.name);
//	printf("나이: %d\n", p1.age);
//	printf("주소: %s\n", p1.address);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//} p1;
//
//int main()
//{
//	struct Person p1;
//
//	//점으로 구조체 멤버에 접근
//	strcpy(p1.name, "홍길동");
//	p1.age = 30;
//	strcpy(p1.address, "서울시 용산구 한남동");
//
//	printf("이름: %s\n", p1.name);
//	printf("나이: %d\n", p1.age);
//	printf("주소: %s\n", p1.address);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct _Person {
//	char name[20];
//	int age;
//	char address[100];
//} Person;
//
//int main()
//{
//	Person p1;
//
//	strcpy(p1.name, "Minho");
//	p1.age = 30;
//	strcpy(p1.address, "Seoul");
//
//	printf("Name: %s\n", p1.name);
//	printf("Age: %d\n", p1.age);
//	printf("Address: %s\n", p1.address);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//	char name[20];
//	int age;
//	char address[100];
//} Person;
//
//int main()
//{
//	Person p1;
//
//	strcpy(p1.name, "Minho");
//	p1.age = 30;
//	strcpy(p1.address, "Seoul");
//	
//	printf("Name: %s\n", p1.name);
//	printf("Age: %d\n", p1.age);
//	printf("Address: %s\n", p1.address);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point2D {
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Point2D p1;
//
//	p1.x = 10;
//	p1.y = 20;
//
//	printf("%d %d\n", p1.x, p1.y);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//typedef struct _Point2D {
//	int x;
//	int y;
//} Point2D;
//
//int main()
//{
//	Point2D p1;
//
//	p1.x = 10;
//	p1.y = 20;
//	
//	printf("%d %d\n", p1.x, p1.y);
//
//	return 0;
//}

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//} Point2D;
//
//int main()
//{
//	Point2D p1;
//
//	p1.x = 10;
//	p1.y = 20;
//
//	printf("%d %d\n", p1.x, p1.y);
//
//	return 0;
//}
//#include <stdio.h>
//
//struct Dashboard {
//	int speed;
//	char fuel;
//	float mileage;
//	int engineTemp;
//	int rpm;
//};
//
//int main()
//{
//
//	struct Dashboard d1;
//
//	d1.speed = 80;
//	d1.fuel = 'F';
//	d1.mileage = 5821.442871f;
//	d1.engineTemp = 200;
//	d1.rpm = 1830;
//
//	printf("Speed: %dkm/h\n", d1.speed);
//	printf("Fuel: %c\n", d1.fuel);
//	printf("Mileage: %fkm\n", d1.mileage);
//	printf("Engine temp: %d℃\n", d1.engineTemp);
//	printf("RPM: %d\n", d1.rpm);
//
//	return 0;
//}

//#include <stdio.h>
//
//typedef struct _Dashboard {
//	int speed;
//	char fuel;
//	float mileage;
//	int engineTemp;
//	int rpm;
//} Dashboard;
//
//int main()
//{
//	Dashboard d1;
//
//	d1.speed = 80;
//	d1.fuel = 'F';
//	d1.mileage = 5821.442871f;
//	d1.engineTemp = 200;
//	d1.rpm = 1830;
//
//	printf("Speed: %dkm/h\n", d1.speed);
//	printf("Fuel: %c\n", d1.fuel);
//	printf("Mileage: %fkm\n", d1.mileage);
//	printf("Engine temp: %d℃\n", d1.engineTemp);
//	printf("RPM: %d\n", d1.rpm);
//
//	return 0;
//}