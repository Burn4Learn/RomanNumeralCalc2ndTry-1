#include <stdlib.h>
#include <stdio.h>
#include "convert.h"
#include "romanNumeralCalc.h"

void romanAdd(char *firstNumeral, char *secondNumeral, char *sum, int bufferSz)
{
	if ((bufferSz < sizeof(char) * 16))
		{
			sum = NULL;
			return;
		}
	int firstInt = convertRomanNumeralStringToInt(firstNumeral);
	int secondInt = convertRomanNumeralStringToInt(secondNumeral);
	convertIntToRomanNumeralString(firstInt + secondInt, sum);
}
