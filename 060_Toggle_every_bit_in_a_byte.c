//Toggle every bit in a byte at specific position .



#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     int pos1,pos2;
     scanf("%d %d",&pos1,&pos2);
     for(int i=0;i<32;i++)
     {
      if(i>=pos1 && i<=pos2)
      { 
       int m=((a>>i)&1);
       m=~(m);
      // printf("%d",m);
      }
          printf("%d",((a>>i)&1));
     }
     
}