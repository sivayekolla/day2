//ount number of 1s in a binary number.



#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter a number:\n");
	scanf("%d",&a);
	for(int i=31;i>=0;i--)
	{
		int r=((a>>i)&1);
		if(r==1)
		{
			count++;
			
		}
	}
	printf("%d",count);

}













