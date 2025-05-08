#include<stdio.h>
int main()
{
     int a;
     printf("enter a value to swap nibbles:\n");
     scanf("%d",&a);
     int b=a&(0x0f);
     int c=a&(0xf0);
     a=(b<<4)|(c>>4);
     printf("%d",a);
}
