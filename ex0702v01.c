#include <stdio.h>

int main()
{
	int c;

	printf("I'm waiting for a character: ");
	c = getchar();
	printf("I waited for the '%c' character, which is ASCII code %d.\n",c,c);
	return(0);
}