#include <stdio.h>
#include <conio.h>
int main()
{
	char *s;
	int len,i;
	
	printf("\nENTER A STRING: ");
	gets(s);
	len=(*s);
	printf("\nTHE REVERSE OF THE STRING IS:");
	for(i=len;i>=0;i--)
		printf("%c",*(s+i));
	getch();
}