//Print powers of 2 from 2^0 to 2^15.






#include<stdio.h>
#include<math.h>
int main()
{
	printf("Printing powers of 2 from 2^0 to 2^15\n");
	int a=0;
	for(int i=0;i<16;i++)
	{
		a=pow(2,i);
	printf("%d is the power of 2^%d\n",a,i);
	}
}
