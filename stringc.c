#include <stdio.h>

int main() 
{
	char s[100], s1[100];
	int i,j ;
	printf("Enter first string : ");
	scanf("%s", s);

	printf("Enter second string :");
	scanf("%s", s1);
	for (i=0  ; s[i] ! = '\0'; i++ );
	for (j=0 ; s1[j] ! = '\0'; j++)
	{
		s[i] = s1[j];
	}
	s[i]= '\0';
	printf("string : %s",s);


	return 0;

}
