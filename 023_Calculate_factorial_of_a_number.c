//Calculate factorial of a number




#include<stdio.h>
int main()
{
	int a,s=1;
	printf("enter the value:\n");
	scanf("%d",&a);
	for(int i=a;i>=1;i--)
	{
		s*=i;
	}
	printf("%d is the factorial of %d",s,a);
}
