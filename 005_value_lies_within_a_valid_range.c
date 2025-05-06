//value lies within a valid range(1-100)



#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a<101 && a>0)
	{
		printf("number within the range");
	}
	else
	{
		printf("number out of range");
	}
}
