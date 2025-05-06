//Verify if a year is a leap year



#include<stdio.h>
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);
	if(year%100 != 0)
	{
		if(year%4 == 0)
		{
			printf("leap year");
		}
		else
		{
			printf("not a leap year");
		}
	}
	else
	{
		if(year%400 ==0)
		{
			printf("leap year");
		}
		else
		{
			printf("not a leap year");
		}
	}
}
