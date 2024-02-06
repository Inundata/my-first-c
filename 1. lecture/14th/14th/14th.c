/*55강*/

//#include <stdio.h>
//
//struct Phone {
//	int areacode;
//	unsigned long long number;
//};
//
//struct Person {
//	char name[20];
//	int age;
//	struct Phone phone;
//};
//
//int main()
//{
//	struct Person p1;
//
//	p1.phone.areacode = 82;
//	p1.phone.number = 3045671234;
//
//	printf("%d %llu\n", p1.phone.areacode, p1.phone.number);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Phone
//{
//	int areacode;
//	unsigned long long number;
//};
//
//struct Person
//{
//	char name[20];
//	int age;
//	struct Phone phone;
//};
//
//int main()
//{
//	struct Person* p1 = malloc(sizeof(struct Person));
//
//	p1->phone.areacode = 82;
//	p1->phone.number = 3045671234;
//
//	printf("%d %llu\n", p1->phone.areacode, p1->phone.number);
//
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Phone
//{
//	int areacode;
//	unsigned long long number;
//};
//
//struct Person
//{
//	char name[20];
//	int age;
//	struct Phone* phone;
//};
//
//int main()
//{
//	struct Person* p1 = malloc(sizeof(struct Person));
//
//	p1->phone = malloc(sizeof(struct Phone));
//
//	p1->phone->areacode = 82;
//	p1->phone->number = 3045671234;
//
//	printf("%d %llu\n", p1->phone->areacode, p1->phone->number);
//
//	free(p1->phone);
//	free(p1);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Vector3 {
//	union {
//		struct {
//			float x;
//			float y;
//			float z;
//		};
//		float v[3];
//	};
//};
//
//int main()
//{
//	struct Vector3 pos;
//
//	for (int i = 0
//		; i < 3
//		; i++)
//	{
//		pos.v[i] = 1.0f;
//	}
//
//	printf("%f %f %f\n", pos.x, pos.y, pos.z);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Stats
//{
//	float health, healthRegen;
//	unsigned int mana, movementSpeed;
//	float manaRegen, range, attackDamage, armor, attackSpeed, magicResist;
//};
//
//struct Champion
//{
//	char name[20];
//	struct Stats stats;
//	float abilityPower;
//};
//
//int main()
//{
//	struct Champion lux;
//
//	strcpy(lux.name, "Lux");
//	lux.stats.health = 477.72f;
//	lux.stats.healthRegen = 1.08f;
//	lux.stats.mana = 334;
//	lux.stats.manaRegen = 1.24f;
//	lux.stats.range = 550;
//	lux.stats.attackDamage = 55.5f;
//	lux.stats.attackSpeed = 0.625f;
//	lux.stats.armor = 18.72f;
//	lux.stats.magicResist = 30;
//	lux.stats.movementSpeed = 330;
//	lux.abilityPower = 0;
//
//	printf("%u %f\n", lux.stats.mana, lux.stats.manaRegen);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Stats
//{
//	float health, healthRegen;
//	unsigned int mana, movementSpeed;
//	float manaRegen, range, attackDamage, armor, attackSpeed, magicResist;
//};
//
//struct Champion
//{
//	char name[20];
//	struct Stats stats;
//	float abilityPower;
//};
//
//int main()
//{
//	struct Champion* lux = malloc(sizeof(struct Champion));
//	
//    strcpy(lux->name, "Lux");
//    lux->stats.health = 477.72f;
//    lux->stats.healthRegen = 1.08f;
//    lux->stats.mana = 334;
//    lux->stats.manaRegen = 1.24f;
//    lux->stats.range = 550;
//    lux->stats.attackDamage = 55.5f;
//    lux->stats.attackSpeed = 0.625f;
//    lux->stats.armor = 18.72f;
//    lux->stats.magicResist = 30;
//    lux->stats.movementSpeed = 330;
//    lux->abilityPower = 0;
//
//    printf("%u %f\n", lux->stats.mana, lux->stats.manaRegen);
//
//    free(lux);
//
//    return 0;
//
//}

//#include <stdio.h>
//
//struct DeviceOption
//{
//	union
//	{
//		unsigned long long option;
//		struct {
//			unsigned char boot[4];
//			unsigned char interrupt[2];
//			unsigned char bus[2];
//		};
//	};
//};
//
//int main()
//{
//	struct DeviceOption opt;
//
//	opt.boot[0] = 0x01;
//	opt.boot[1] = 0x02;
//	opt.boot[2] = 0x03;
//	opt.boot[3] = 0x04;
//	opt.interrupt[0] = 0x05;
//	opt.interrupt[1] = 0x06;
//	opt.bus[0] = 0x07;
//	opt.bus[1] = 0x11;
//
//	printf("0x%llx\n", opt.option);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Stats
//{
//	float health, healthRegen, manaRegen, range, attackDamage, armor, attackSpeed, magicResist;
//	unsigned int mana, movementSpeed;
//};
//
//struct Champion
//{
//	char name[20];
//	struct Stats stats;
//	float abilityPower;
//};
//
//int main()
//{
//	struct Champion swain;
//
//	strcpy(swain.name, "Swain");
//	swain.stats.health = 463.0f;
//    swain.stats.healthRegen = 1.48f;
//    swain.stats.mana = 290;
//    swain.stats.manaRegen = 1.49f;
//    swain.stats.range = 500;
//    swain.stats.attackDamage = 52.0f;
//    swain.stats.attackSpeed = 0.625f;
//    swain.stats.armor = 20.0f;
//    swain.stats.magicResist = 30;
//    swain.stats.movementSpeed = 335;
//    swain.abilityPower = 0;
//
//    printf("%s %f\n", swain.name, swain.stats.health);
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Stats
//{
//	float health, healthRegen, manaRegen, range, attackDamage, armor, attackSpeed, magicResist;
//	unsigned int mana, movementSpeed;
//};
//
//struct Champion
//{
//	char name[20];
//	struct Stats* stats;
//	float abilityPower;
//};
//
//int main()
//{
//	struct Champion* swain = malloc(sizeof(struct Champion));
//	swain->stats = malloc(sizeof(struct Stats));
//
//    strcpy(swain->name, "Swain");
//	swain->stats->health = 463.0f;
//
//    swain->stats->healthRegen = 1.48f;
//    swain->stats->mana = 290;
//    swain->stats->manaRegen = 1.49f;
//    swain->stats->range = 500;
//    swain->stats->attackDamage = 52.0f;
//    swain->stats->attackSpeed = 0.625f;
//    swain->stats->armor = 20.0f;
//    swain->stats->magicResist = 30;
//    swain->stats->movementSpeed = 335;
//    swain->abilityPower = 0;
//
//    printf("%s %f\n", swain->name, swain->stats->health);
//
//    free(swain->stats);
//    free(swain);
//
//    return 0;
//
//}

//#include <stdio.h>
//
//struct DeviceOption
//{
//	union
//	{
//		unsigned short option;
//		struct {
//			unsigned char boot;
//			unsigned char interrupt;
//		};
//	};
//};
//
//int main()
//{
//	struct DeviceOption opt;
//	
//	opt.boot = 0x22;
//	opt.interrupt = 0x11;
//
//	printf("0x%x\n", opt.option);
//
//	return 0;
//}

/*56강*/

//#include <stdio.h>
//
//struct Flags
//{
//	unsigned int a : 32;
//	unsigned int b : 3;
//	unsigned int c : 7;
//};
//
//int main()
//{
//	struct Flags f1;
//
//	f1.a = 1;
//	f1.b = 15;
//	f1.c = 255;
//
//	printf("%u\n", f1.a);
//	printf("%u\n", f1.b);
//	printf("%u\n", f1.c);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Flags
//{
//	union
//	{
//		struct
//		{
//			unsigned short a : 3;
//			unsigned short b : 2;
//			unsigned short c : 7;
//			unsigned short d : 4;
//		};
//		unsigned short e;
//	};
//};
//
//int main()
//{
//	struct Flags f1 = { 0, };
//
//	f1.a = 4;
//	f1.b = 2;
//	f1.c = 80;
//	f1.d = 15;
//
//	printf("%u\n", f1.e);
//
//	return 0;
//}

//
//#include <stdio.h>
//
//struct Flags
//{
//	union
//	{
//		struct
//		{
//			unsigned int a : 4;
//			unsigned int b : 2;
//			unsigned int c : 2;
//			unsigned int d : 8;
//
//		};
//		unsigned short e;
//	};
//};
//
//int main()
//{
//	struct Flags f1 = { 0, };
//
//	f1.a = 8;
//	f1.b = 2;
//	f1.c = 2;
//	f1.d = 128;
//
//	printf("%u\n", f1.e);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Flags
//{
//	unsigned a : 4;
//	unsigned b : 7;
//	unsigned c : 3;
//};
//
//int main()
//{
//	struct Flags f1;
//	f1.a = 0xffffffff;
//	f1.b = 0xffffffff;
//	f1.c = 0xffffffff;
//
//	printf("%u %u %u\n", f1.a, f1.b, f1.c);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Flags
//{
//	union
//	{
//		struct {
//			unsigned int a : 3;
//			unsigned int b : 4;
//			unsigned int c : 7;
//			unsigned int d : 2;
//
//		};
//		unsigned short e; // 2바이트 -> 16비트
//	};
//};
//
//int main()
//{
//	struct Flags f1 = { 0, };
//
//	f1.a = 4;
//	f1.b = 8;
//	f1.c = 64;
//	f1.d = 3;
//
//	printf("%u\n", f1.e);
//
//	return 0;
//}

//#include <stdio.h>
//
//enum DayOfWeek
//{
//	Sunday = 0,
//	Monday,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday
//};
//
//int main()
//{
//	enum DayOfWeek week;
//
//	week = Tuesday;
//
//	printf("%d\n", week);
//
//	return 0;
//}

//#include <stdio.h>
//
//enum LuxSkill
//{
//	LightBinding = 1
//	, PrismaticBarrier
//	, LucentSingularity
//	, FinalSpark
//};
//
//int main()
//{
//	enum LuxSkill skill;
//
//	skill = LightBinding;
//
//	switch (skill)
//	{
//	case LightBinding:
//		printf("LightBinding\n");
//		break;
//
//	case PrismaticBarrier:
//		printf("PrismaticBarrier\n");
//		break;
//
//	case LucentSingularity:
//		printf("LucentSingularity\n");
//		break;
//	
//	case FinalSpark:
//		printf("FinalSpark\n");
//		break;
//
//	default:
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//typedef enum _DayOfWeek {
//	Sunday = 0
//	, Monday
//	, Tuesday
//	, Wednesday
//	, Thursday
//	, Friday
//	, Saturday
//	, DayofWeekCount
//} DayOfWeek;
//
//int main()
//{
//	for (DayOfWeek i = Sunday
//		; i < DayofWeekCount
//		; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//enum DEVICE_TYPE
//{
//	DEVICE_PCI_EX = 2
//	, DEVICE_IEEE1394
//	, DEVICE_USB
//};
//
//int main()
//{
//	enum DEVICE_TYPE type;
//
//	type = DEVICE_IEEE1394;
//	printf("%d\n", type);
//
//	return 0;
//}

//#include <stdio.h>
//
//enum VayneSkill
//{
//	Tumble = 1
//	, SilverBolts
//	, Condemn
//	, FinalHour
//};
//
//int main()
//{
//	enum VayneSkill skill;
//
//	skill = Tumble;
//
//	switch (skill)
//	{
//	case Tumble:
//		printf("구르기\n");
//		break;
//	case SilverBolts:
//		printf("은화살\n");
//		break;
//	case Condemn:
//		printf("선고\n");
//		break;
//	case FinalHour:
//		printf("결전의 시간\n");
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//enum PROTOCOL_TYPE
//{
//	PROTOCOL_IP = 4
//	, PROTOCOL_UDP
//	, PROTOCOL_TCP
//};
//
//int main()
//{
//	enum PROTOCOL_TYPE p1, p2, p3;
//
//	p1 = PROTOCOL_TCP;
//	p2 = PROTOCOL_UDP;
//	p3 = PROTOCOL_IP;
//
//	printf("%d %d %d\n", p1, p2, p3);
//
//	return 0;
//}

//#include <stdio.h>
//
//enum MasterYiSkill
//{
//	AlphaStrike = 1
//	, Meditation
//	, WujuStyle
//	, Highlander
//};
//
//int main()
//{
//	enum MasterYiSkill skill;
//
//    skill = Meditation;
//
//    switch (skill)
//    {
//    case AlphaStrike:
//        printf("일격 필살\n");
//        break;
//    case Meditation:
//        printf("명상\n");
//        break;
//    case WujuStyle:
//        printf("우주류 검술\n");
//        break;
//    case Highlander:
//        printf("최후의 전사\n");
//        break;
//    default:
//        break;
//    }
//    return 0;
//}

//#include <stdio.h>
//
//typedef enum _INTERFACE_TYPE
//{
//	InterfaceTypeUndefined = -1,
//    Internal,
//    Isa,
//    Eisa,
//    MicroChannel,
//    TurboChannel,
//    PCIBus,
//    VMEBus,
//    NuBus,
//    PCMCIABus,
//    CBus,
//    MPIBus,
//    MPSABus,
//    ProcessorInternal,
//    InternalPowerBus,
//    PNPISABus,
//    PNPBus,
//    MaximumInterfaceType
//} INTERFACE_TYPE, *PINTERFACE_TYPE;
//
//int main()
//{
//    for (INTERFACE_TYPE i = Internal
//        ; i < MaximumInterfaceType
//        ; i++)
//    {
//        printf("%d ", i);
//    }
//
//    return 0;
//}

/* 58강 */

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 32;
//	int num2 = 7;
//	float num3;
//
//	num3 = num1 / num2;
//	printf("%f\n", num3);
//
//	num3 = (float)num1 / num2;
//	printf("%f\n", num3);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* numPtr = malloc(sizeof(int));
//
//	char* cPtr;
//
//	*numPtr = 0x12345678;
//
//	cPtr = (char*)numPtr;
//	printf("0x%x\n", *cPtr);
//
//	free(numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 10;
//	float num2 = 3.5f;
//	char c1 = 'a';
//	void* ptr;
//
//	ptr = &num1;
//	printf("%d\n", *(int*)ptr);
//
//	ptr = &num2;
//	printf("%f\n", *(float*)ptr);
//
//	ptr = &c1;
//	printf("%c\n", *(char*)ptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Data
//{
//	char c1;
//	int num1;
//};
//
//int main()
//{
//	struct Data* d1 = malloc(sizeof(struct Data));
//	void* ptr;
//
//	d1->c1 = 'a';
//	d1->num1 = 10;
//
//	ptr = d1;
//
//	printf("%c\n", ((struct Data*)ptr)->c1);
//	printf("%d\n", ((struct Data*)ptr)->num1);
//
//	free(d1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _Data
//{
//	char c1;
//	int num1;
//} Data, *Pdata;
//
//int main()
//{
//	Pdata d1 = malloc(sizeof(Data));
//	void* ptr;
//
//	d1->c1 = 'a';
//	d1->num1 = 10;
//
//	ptr = d1;
//
//	printf("%c\n", ((Data*)ptr)->c1);
//	printf("%d\n", ((Pdata)ptr)->num1);
//
//	free(d1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int base = 21;
//	int height = 13;
//	float area;
//
//	area = (float)base * height * (1.0/2.0);
//	printf("%f\n", area);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* numPtr1 = malloc(sizeof(int));
//	short* numPtr2;
//
//	*numPtr1 = 0x11223344;
//
//	numPtr2 = (short *)numPtr1;
//
//	printf("0x%x\n", *numPtr2);
//
//	free(numPtr1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdint.h>
//
//int main()
//{
//	uint64_t* numPtr1 = malloc(sizeof(uint64_t));
//	void* ptr;
//
//	*numPtr1 = 12;
//
//	ptr = numPtr1;
//
//	printf("%llu\n", *(unsigned long long*)ptr);
//
//	free(numPtr1);
//
//	return 0;
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
//};
//
//int main()
//{
//	struct Person* p1 = malloc(sizeof(struct Person));
//	void* ptr;
//
//	strcpy(p1->name, "고길동");
//	p1->age = 40;
//
//	ptr = p1;
//
//	printf("%s %d\n", ((struct Person*)ptr)->name, ((struct Person*)ptr)->age);
//
//	free(p1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	float num1;
//	int num2;
//	
//	scanf("%f", &num1);
//
//	num2 = (int)num1;
//	printf("%d\n", num2);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	unsigned long long* numPtr1 = malloc(sizeof(unsigned long long));
//	unsigned int* numPtr2;
//
//	scanf("%llx", numPtr1);
//	numPtr2 = numPtr1;
//	printf("0x%x\n", *numPtr2);
//
//	free(numPtr1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	long double* numPtr1 = malloc(sizeof(long double));
//	void* ptr;
//
//	scanf("%Lf", numPtr1);
//
//	ptr = numPtr1;
//
//	printf("%Lf\n",  *(long double*)ptr);
//
//	free(numPtr1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Stats
//{
//	float health;
//	float healthRegen;
//	unsigned int mana;
//	float manaRegen;
//	float range;
//	float attackDamage;
//	float armor;
//	float attackSpeed;
//	float magicResist;
//	unsigned int movementSpeed;
//};
//
//int main()
//{
//	void* ptr = malloc(sizeof(struct Stats));
//	struct Stats st;
//
//	scanf("%u %u", &st.mana, &st.movementSpeed);
//
//	memcpy(ptr, &st, sizeof(struct Stats));
//
//	st.mana = 0;
//	st.movementSpeed = 0;
//
//	printf("%d\n", ((struct Stats*)ptr)->mana);
//	printf("%d", ((struct Stats*)ptr)->movementSpeed);
//
//	free(ptr);
//
//	return 0;
//}

/* 59강 */

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//	int* numPtrB;
//	int* numPtrC;
//
//	numPtrA = numArr;
//
//	numPtrB = numPtrA + 1;
//	numPtrC = numPtrA + 2;
//
//	printf("%p\n", numPtrA);
//	printf("%p\n", numPtrB);
//	printf("%p\n", numPtrC);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char* cPtr1 = NULL;
//	char* numPtr1 = NULL;
//	long long* numPtr2 = NULL;
//
//	printf("%p\n", cPtr1 + 1);
//	printf("%p\n", numPtr1 + 1);
//	printf("%p\n", numPtr2 + 1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//
//	numPtrA = numArr;
//
//	printf("%d\n", *(numPtrA + 1));
//
//	printf("%d\n", *(numPtrA + 2));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	void* ptr = malloc(100);
//
//	printf("%p\n", ptr);
//	printf("%p\n", (int*)ptr + 1);
//	printf("%p\n", (int*)ptr - 1);
//	
//	void* ptr2 = ptr;
//	printf("%p\n", ++(int*)ptr2);
//	printf("%p\n", --(int*)ptr2);
//
//	printf("%p\n", ((int*)ptr2)++);
//	printf("%p\n", ((int*)ptr2)--);
//
//	free(ptr);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	void* ptr = &numArr[2];
//
//	printf("%d\n", *(int*)ptr);
//
//	printf("%d\n", *((int*)ptr + 1));
//	printf("%d\n", *((int*)ptr - 1));
//
//	printf("%d\n", *(++(int*)ptr));
//	printf("%d\n", *(--(int*)ptr));
//
//	printf("%d\n", *((int*)ptr)++);
//	printf("%d\n", *((int*)ptr)--);
//
//	free(ptr);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//struct Data
//{
//	int num1;
//	int num2;
//};
//
//int main()
//{
//	struct Data d[3] = { {10, 20}
//						, {30, 40}
//						, {50, 60} };
//
//	struct Data* ptr;
//
//	ptr = d;
//
//	printf("%d %d\n", (ptr + 1)->num1, (ptr + 1)->num2);
//
//	printf("%d %d\n", (ptr + 2)->num1, (ptr + 2)->num2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Data
//{
//	int num1;
//	int num2;
//};
//
//int main()
//{
//	void* ptr = malloc(sizeof(struct Data) * 3);
//	struct Data d[3];
//
//	((struct Data*)ptr)->num1 = 10;
//	((struct Data*)ptr)->num2 = 20;
//
//	((struct Data*)ptr + 1)->num1 = 30;
//	((struct Data*)ptr + 1)->num2 = 40;
//	
//	((struct Data*)ptr + 2)->num1 = 50;
//	((struct Data*)ptr + 2)->num2 = 60;
//
//	memcpy(d, ptr, sizeof(struct Data) * 3);
//
//	printf("%d %d\n", d[1].num1, d[1].num2);
//	printf("%d %d\n", ((struct Data*)ptr + 2)->num1, ((struct Data*)ptr + 2)->num2);
//
//	free(ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtrA = NULL;
//
//	printf("%p\n", numPtrA + 2);
//	printf("%p\n", numPtrA + 5);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numPtrA + 2));
//	printf("%d\n", *((int*)ptr + 1));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Point2D
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Point2D p[3] = { {10, 20}, {30, 40}, {50, 60} };
//	struct Point2D* ptr;
//
//	ptr = p;
//
//	printf("%d %d\n", (((struct Point2D*)ptr + 1)->x), (((struct Point2D*)ptr + 2)->y));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	short* numPtrA;
//	short* numPtrB;
//	short* numPtrC;
//
//	scanf("%p", &numPtrA);
//
//	numPtrB = numPtrA + 3;
//	numPtrC = numPtrA + 5;
//
//	printf("%X\n", numPtrB);
//	printf("%X\n", numPtrC);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int numArr1[3] = { 0, };
//	long long numArr2[3] = { 0, };
//	int* numPtr = malloc(sizeof(int) * 3);
//	void* ptr = malloc(sizeof(long long) * 3);
//	int num1;
//	long long num2;
//
//	scanf("%d %d %d %lld %lld %lld"
//		, &numArr1[0], &numArr1[1], &numArr1[2]
//		, &numArr2[0], &numArr2[1], &numArr2[2]);
//
//	memcpy(numPtr, numArr1, sizeof(int) * 3);
//	memcpy(ptr, numArr2, sizeof(long long) * 3);
//
//	numArr1[0] = numArr1[1] = numArr1[2] = 0;
//	numArr2[0] = numArr2[1] = numArr2[2] = 0;
//
//	num1 = ((int*)numPtr)[2];
//	num2 = ((long long*)ptr)[1];
//
//	printf("%d %lld\n", num1, num2);
//
//	free(ptr);
//	free(numPtr);
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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
//	void* ptr = malloc(sizeof(struct Point3D) * 3);
//	struct Point3D p[3];
//	float result1, result2;
//
//	scanf("%f %f %f %f %f %f %f %f %f"
//		, &p[0].x, &p[0].y, &p[0].z
//		, &p[1].x, &p[1].y, &p[1].z
//		, &p[2].x, &p[2].y, &p[2].z);
//
//	memcpy(ptr, p, sizeof(struct Point3D) * 3);
//	memset(p, 0, sizeof(struct Point3D) * 3);
//
//	result1 = ((struct Point3D*)ptr + 1)->x;
//	result2 = ((struct Point3D*)ptr + 2)->z;
//
//	printf("%.1f %.1f\n", result1, result2);
//
//	free(ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//void hello()
//{
//	printf("Hello, world!\n");
//}
//
//int main()
//{
//	hello();
//	return 0;
//}

//#include <stdio.h>
//
//void hello();
//
//int main()
//{
//	hello();
//
//	return 0;
//}
//
//void hello()
//{
//	printf("Hello, world!\n");
//}

//#include <stdio.h>
//
//void hello()
//{
//	printf("Hello, world!\n");
//}
//
//int main()
//{
//	hello();
//
//	return 0;
//}

//#include <stdio.h>
//
//void printName()
//{
//	printf("Beethoven\n");
//}
//
//void printOrdinal()
//{
//	printf("9th\n");
//}
//
//int main()
//{
//	printName();
//	printOrdinal();
//
//	return 0;
//}

//#include <stdio.h>
//
//void printHostname();
//void printIPAddress();
//
//int main()
//{
//	printHostname();
//	printIPAddress();
//
//	return 0;
//}
//
//void printHostname()
//{
//	printf("Saturn\n");
//}
//
//void printIPAddress()
//{
//	printf("192.168.10.6\n");
//}

//#include <stdio.h>
//
//void printIPAddress()
//{
//	printf("192.168.10.5\n");
//}
//
//void printHostname()
//{
//	printf("Jupiter\n");
//}
//
//int main()
//{
//	printIPAddress();
//	printHostname();
//
//	return 0;
//}


#include <stdio.h>

void printName();
void printOrdinal();

int main()
{
	printName();
	printOrdinal();

	return 0;
}

void printName()
{
	printf("Beethoven\n");
}

void printOrdinal()
{
	printf("9th Sympony\n");
}