//Sum of squares of first N natural numbers.







#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the number of sum of natural numbers:\n");
	scanf("%d",&a);
	for(int i=1;i<(a+1);i++)
	{
		c+=(i*i);
		
	}	
	printf("the sum of N natural numbers are %d",c);	
}

