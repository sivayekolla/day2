//Swap two numbers using XOR


#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values:\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("%d\t%d",a,b);		



}












