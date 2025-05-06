/*
Print Floyd’s triangle pattern:
    1
    2 3
    4 5 6
    7 8 9 10
*/



#include<stdio.h>
int main()
{
	int a,b=1;
	printf("enter no of roes required:\n");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",b);
			b++;
		}
	printf("\n");
	}




}












