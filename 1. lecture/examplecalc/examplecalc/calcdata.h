#ifndef CALC_DATA_H // CALC_DATA_H가 정의되어 있지 않다면
#define CALC_DATA_H // CALC_DATA_H 매크로 정의

typedef struct _CALC_DATA
{
	int operand1;
	int operand2;
	char operator;
	int result;
} CALC_DATA;

#endif