//Check if a character is a vowel or consonant.



#include<stdio.h>
int main()
{
	char ap;
	printf("enter a alphabet");
	scanf("%c",&ap);
	if(ap=='A'||ap=='E'||ap=='I'||ap=='O'||ap=='U'||ap=='a'||ap=='e'||ap=='i'||ap=='o'||ap=='u')
	{
		printf("vowel");
	}
	else
	{	
		printf("constent");
	}
}
