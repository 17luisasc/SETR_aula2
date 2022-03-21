/*
* This is vAvg.c
* Version is: 2 
*/ 
#include <stdio.h>
#include <string.h>
#include "vAvg.h"

int vAvg(int *val, int sum) 
{
	int Avg=0, size=0;
	size=strlen(val);
	Avg=sum/size;
	printf("Average is %d.\n", Avg);
	return Avg;
}

