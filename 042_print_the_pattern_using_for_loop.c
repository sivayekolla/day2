/*
Print inverted right triangle pattern:
    *****
    ****
    ***
    **
    *
*/



#include<stdio.h>
int main()
{
        int a;
        printf("enter the number of rows required\n");
        scanf("%d",&a);
        for(int i=0;i<=a;i++)
        {
                for(int j=(a-i);j>=0;j--)
                {
                        printf("*");
                }
                printf("\n");
        }
}

