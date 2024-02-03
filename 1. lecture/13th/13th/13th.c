/*48강*/

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

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//} p1;
//
//int main()
//{
//	//struct Person p1;
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

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//	char name[30];
//	int age;
//	char address[100];
//} Person;
//
//int main()
//{
//
//	Person p1;
//
//	strcpy(p1.name, "Minho");
//	p1.age = 30;
//	strcpy(p1.address, "Minho");
//
//	printf("Name: %s\n", p1.name);
//	printf("Age: %d\n", p1.age);
//	printf("Address: %s\n", p1.address);
//
//	return 0;
//}

/* 49강 */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//};
//
//int main()
//{
//	struct Person* p1 = malloc(sizeof(struct Person));
//
//	strcpy(p1->name, "Minho");
//	p1->age = 30;
//	strcpy(p1->address, "Seoul");
//
//	printf("Name: %s", p1->name);
//	printf("Age: %d", p1->age);
//	printf("Address: %s", p1->address);
//
//	free(p1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct _Person
//{
//	char name[20];
//	int age;
//	char address[100];
//} Person;
//
//int main()
//{
//	Person* p1 = malloc(sizeof(Person));
//
//	strcpy(p1->name, "Minho");
//	p1->age = 30;
//	strcpy(p1->address, "Seoul");
//
//	printf("Name: %s\n", p1->name);
//	printf("Age: %d\n", p1->age);
//	printf("Address: %s\n", p1->address);
//
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//int main()
//{
//	struct Person p1;
//	struct Person* ptr;
//
//	ptr = &p1;
//
//	ptr->age = 30;
//
//	printf("Age: %d\n", p1.age);
//	printf("Age: %d\n", ptr->age);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Student {
//	char name[20];
//	int grade;
//	int class;
//	float average;
//};
//
//int main()
//{
//	struct Student* s1 = malloc(sizeof(struct Student));
//
//	strcpy(s1->name, "Minho");
//	s1->grade = 1;
//	s1->class = 2;
//	s1->average = 85.4f;
//
//	printf("Name: %s\n", s1->name);
//	printf("Grade: %d\n", s1->grade);
//	printf("Class: %d\n", s1->class);
//	printf("Average: %f\n", s1->average);
//
//	free(s1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _Point3D
//{
//	float x, y, z;
//} Point3D;
//
//int main()
//{
//	Point3D* p1 = malloc(sizeof(Point3D));
//
//	p1->x = 10.0f;
//	p1->y = 20.0f;
//	p1->z = 30.0f;
//
//	printf("%f %f %f\n", p1->x, p1->y, p1->z);
//
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//struct Item
//{
//	char name[100];
//	int price;
//	bool limited;
//};
//
//int main()
//{
//	struct Item item = { "베를린 필하모닉 베토벤 교향곡 전집", 100000, false };
//
//	struct Item * ptr = &item;
//
//	ptr->limited = true;
//
//	if (ptr->limited == true)
//	{
//		printf("한정판\n");
//	}
//
//	else
//	{
//		printf("일반판\n");
//	}
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//	char address[100];
//};
//
//typedef struct {
//	char name[20];
//	int number;
//	int displacement;
//} Car;
//
//int main()
//{
//	struct Person* p1 = malloc(sizeof(struct Person));
//	Car *c1 = malloc(sizeof(Car));
//
//	strcpy(p1->name, "고길동");
//	p1->age = 40;
//	strcpy(p1->address, "서울시 서초구 반포동");
//
//	strcpy(c1->name, "스텔라");
//	c1->number = 3421;
//	c1->displacement = 2000;
//
//	printf("이름: %s\n", p1->name);
//	printf("나이: %d\n", p1->age);
//	printf("주소: %s\n", p1->address);
//
//	printf("자동차 이름: %s\n", c1->name);
//	printf("자동차 번호: %d\n", c1->number);
//	printf("배기량: %dcc\n", c1->displacement);
//
//	free(p1);
//	free(c1);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point3D
//{
//	float x;
//	float y;
//	float z;
//};
//
//int main()
//{
//	struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
//	struct Point3D* ptr;
//
//	ptr = &p1;
//
//	printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);
//
//	return 0;
//}

/*50강*/
//#include <stdio.h>
//#include <math.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Point2D p1;
//	struct Point2D p2;
//
//	p1.x = 30;
//	p1.y = 20;
//
//	p2.x = 60;
//	p2.y = 50;
//
//	int a = p2.x - p1.x;
//	int b = p2.y - p1.y;
//
//	double c = sqrt((a * a) + (b * b));
//
//	printf("%f\n", c);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//struct Rectangle {
//	int x1, y1;
//	int x2, y2;
//};
//
//int main()
//{
//	struct Rectangle rect;
//	int area;
//
//	rect.x1 = 20;
//	rect.y1 = 20;
//	rect.x2 = 40;
//	rect.y2 = 30;
//
//	int a = rect.x2 - rect.x1;
//	int b = rect.y2 - rect.y1;
//	area = a * b;
//
//	printf("%d\n", area);
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//struct Point2D {
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Point2D p1;
//	struct Point2D p2;
//	double distance;
//
//	scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
//
//	int a = abs(p1.x - p2.x);
//	int b = abs(p1.y - p2.y);
//
//	distance = sqrt(pow(a, 2) + pow(b, 2));
//
//	printf("%f\n", distance);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct PacketHeader {
//	char flags;
//	int seq;
//};
//
//int main()
//{
//	struct PacketHeader header;
//
//	printf("%d\n", sizeof(header.flags));
//	printf("%d\n", sizeof(header.seq));
//	printf("%d\n", sizeof(header));
//	printf("%d\n", sizeof(struct PacketHeader));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stddef.h>
//
//struct PacketHeader {
//	char flags;
//	int seq;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct PacketHeader, flags));
//	printf("%d\n", offsetof(struct PacketHeader, seq));
//
//	return 0;
//}
//
//#include <stdio.h>
//
//#pragma pack(push, 1)
//
//struct PacketHeader
//{
//	char flags;
//	int seq;
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	struct PacketHeader header;
//
//	printf("%d\n", sizeof(header.flags));
//	printf("%d\n", sizeof(header.seq));
//	printf("%d\n", sizeof(header));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stddef.h>
//
//#pragma pack(push, 1)
//struct PacketHeader {
//	char flags;
//	int seq;
//};
//
//#pragma pack(pop)
//
//int main()
//{
//	printf("%d\n", offsetof(struct PacketHeader, flags));
//	printf("%d\n", offsetof(struct PacketHeader, seq));
//
//	return 0;
//
//}

//#include <stdio.h>
//
//struct CompressHeader {
//	char flags;
//	int version;
//};
//
//int main()
//{
//	struct CompressHeader header;
//
//	printf("%d\n", sizeof(header));
//
//	return 0;
//}

#include <stdio.h>

#pragma pack(push, 1)

struct Packet {
	short length;
	int seq;
};

#pragma pack(pop)
int main()
{
	struct Packet pkt;
	printf("%d\n", sizeof(pkt));

	return 0;
}