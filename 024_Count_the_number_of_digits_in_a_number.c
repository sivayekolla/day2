//Count the number of digits in a number






#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter the number:\n");
	scanf("%d",&a);
	if(a<0)
	{
		a=-a;
	}
	while(a != 0)
	{
		a/=10;
		count++;
	}
	printf("%d",count);
}
