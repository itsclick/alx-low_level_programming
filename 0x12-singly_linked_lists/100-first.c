#include <stdlib.h>
#include <stdio.h>

/**
 * first - prints before main
 */
void __attribute__ ((constructor)) first()
{
	printf("A tortoise, having pretty good sense of a her's, challenges one to a race\n");

}
