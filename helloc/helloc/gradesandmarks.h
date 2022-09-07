#pragma once

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void grades();

void grades()
{
	float marks;
		printf("Please Enter Your Marks");
	scanf_s("\n%f", &marks);

	if (marks > 90)
	{
		printf("\nYour Grade is A");

	}
	else
	{
		if (marks > 80)

		{
			printf("\n Your Grade is B");
		}
		else
		{
			if (marks > 70)
			{
				printf("\n Your Grade is C");

            }
			else
			{
				if (marks > 60)
				{
					printf("\n your grade is D");
                }
				else
				{
					printf("\n failed In Exams");
				}
			}
		}

	}
	
}
