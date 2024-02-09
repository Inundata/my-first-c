#include "calc.h"

void add(CALC_DATA* data)
{
	data->operator = '+';

	// 계산할 값 두 개를 더해서 결과 저장
	data->result = data->operand1 + data->operand2;
}

void sub(CALC_DATA* data)
{
	data->operator = '-';

	data->result = data->operand1 - data->operand2;
}