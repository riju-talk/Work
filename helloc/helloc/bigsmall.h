#pragma once


#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include <time.h>

void big();
void ibig();

void gotoxy(int x, int y);
void count200();

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//
//void wait(unsigned timeout)
//{
//	timeout += std::clock();
//	while (std::clock() < timeout) continue;
//}

void big()
{
	int x = 10;
	int y = 6;
	int z = 7;
	//let me find out which one is the greatest number

	if (x > y)
	{
		if (x > z)
		{
			printf("\n x is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
	else
	{
		if (y > z)
		{
			printf("\n y is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}

}
void ibig()
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("\nEnter Value Of x:");
	scanf_s("%d", &x);
	printf("\nEnter Value Of y:");
	scanf_s("%d", &y);
	printf("\nEnter Value Of z:");
	scanf_s("%d", &z);
	//let me find out which one is the greatest number

	if (x > y)
	{
		if (x > z)
		{
			printf("\n x is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
	else
	{
		if (y > z)
		{
			printf("\n y is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
}


void count200(int width,int height, int w, int h)
{
	

	/*for (int i = 0; i <= 255; i++)
	{
		printf("\n [%d = %c ]",i, i);
	}*/

	char tl = 201;
	char tr = 187;
	char bl = 188;
	char br = 200;
	char eq = 205;
	char pipe = 186;

	//clrscr();

	gotoxy(w, h);
	

	printf("%c", tl);
	//putchar(tl);
	for (int i = w+1; i < (width + w) ; i++)
	{
		gotoxy(i, h);
		printf("%c", eq);

		gotoxy(i, h + height);
		printf("%c", eq);

	}

	gotoxy(width + w, h);
	printf("%c",tr);
	
	
	gotoxy(width + w, height +h );
	//putchar(200);
	printf("%c", bl);

	gotoxy(w , height + h );	
	printf("%c", br);


	for (int i = h +1; i < height + h; i++)
	{
		gotoxy(w, i);
		//putchar(205);
		printf("%c", pipe);

		gotoxy(width + w, i);
		//putchar(205);
		printf("%c", pipe);

	}

	


}
