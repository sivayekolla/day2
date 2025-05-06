/* print the following pattern using `for` loop:
    *
    **
    ***
    ****
    *****
*/





#include<stdio.h>
int main()
{
	int a;
	printf("enter the number of rows required\n");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<(i+1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
