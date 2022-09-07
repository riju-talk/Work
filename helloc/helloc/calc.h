#pragma once
// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


int count();
void print1to20();
void oddnumber();
void evennumber();
void byfive();
void commonmultiple();
void byten();
void exercise();

int count()
{
	int x = 9;
	int y = 10;

	int z = x + y;
	return z;
}

//arithmatic  + - * /  %  ^
//increament operator ++ -- meaning i= i+1; i = i-1
//compare operator > < >= <= ! != ==   

//conditional operator 


void print1to20()
{
	for (int i = 0; i <= 20; i++)
	{
		printf("\n%d", i);
	}
}

void oddnumber()
{
	int quotient;
	int original;
	for (int i = 0; i <= 20; i++)
	{
		quotient = i / 2;
		original = quotient * 2;

		if (original != i)
		{
			printf("\nOdd = %d", i);

		}
	}
}

void evennumber()
{
	int y = 2;

	for (int u = 0; u <= 100; u++)

	{
		if (u % y == 0)
		{
			printf("\nEven=%d", u);

		}

	}

}
void byfive()
{
	int d;
	d = 5;

	for (int h = 0; h <= 100; h++)
	{
		if (h % d == 0)
		{
			printf("\nmultiple of 5 =%d", h);
		}

	}


}
void byten()
{
	int d;
	d = 10;

	for (int h = 0; h <= 100; h++)
	{
		if (h % d == 0)
		{
			printf("\nmultiple of 10 =%d", h);
		}

	}


}
void commonmultiple()
{	
	int r = 7;
	for (int g = 0; g <= 100; g = (g + 1) * g)
	{
		if ( (g % 5 == 0) || (g % 8 == 0) )
		{
			printf("\nNumber =%d", g);
		}
	}
}
void exercise()
{
	int i, j, k, w, x, y, z;
	i = 4;
	j = -1;
	k = 0;
	w = i || (j || k) ;
	x = i && (j && k);
	y = i || j && k;
	z = i && j || k;

	printf("w = %d x = %d z = %d y = %d\n", w, x, y, z);
}



//Next Program is print 1 to 20...


