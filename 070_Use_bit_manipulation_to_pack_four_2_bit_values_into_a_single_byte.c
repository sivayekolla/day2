//Use bit manipulation to pack four 2-bit values into a single byte.




#include<stdio.h>
int main()
{
     char a;
     char b;
     printf("enter 2 nibbles:\n");
     scanf("%c %c",&a,&b);
     int c=(a|b);
     printf("%c",c);
}