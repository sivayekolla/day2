#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf(" a is bigger  ammong three");
	}
	else if(b>a && b>c)
	{
		printf("b is the bigger among three");
	}
	else
	{
		printf("c is the bigger among three");
}
	}
