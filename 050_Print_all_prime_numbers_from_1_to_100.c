//Print all prime numbers from 1 to 100.




#include<stdio.h>
int main()
{
	int a,b,val;
	printf("enter the range to get prime numbers :\n");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		for(int j=2;j<=i;j++)
		{	
			if(i%j==0)
			{	
				val++;
			}
	
		}
		if(val==1)
		{	
			printf("%d is a prime number\n",i);
		}
		val=0;
	}


}
