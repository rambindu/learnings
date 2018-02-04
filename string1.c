#include <stdio.h>
int main()
{
	char str[100], ch;
	int frequency=0, i ;
	printf("Enter a string : " );
	scanf("%s", str);

	printf("Enter the char : " );
	scanf("%c", &ch);
	while(str[i]! = '\0')
//	for ( i = 0 ; str[i]! ='\0' ; i++)
	{
		if(ch == str[i])
		frequency++ ;

	}
	
	printf("char frequency : %d", frequency);
return 0;
}
