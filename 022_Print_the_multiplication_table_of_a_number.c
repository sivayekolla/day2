//Print the multiplication table of a number.




#include<stdio.h>
int main()
{
	int a,c;
	printf("enter a number\n:");
	scanf("%d",&a);
	for(int i=1;i<11;i++)
	{
		c=i*a;
		printf("%d x %d=%d\n",a,i,c);
	}

}
