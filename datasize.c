/*
 * $Id: datasize.c,v 1.1 2000/08/03 12:11:58 urs Exp $
 */

#include <stdio.h>

int main(void)
{
	printf("sizeof(char)        = %2lu\n"
	       "sizeof(short)       = %2lu\n"
	       "sizeof(int)         = %2lu\n"
	       "sizeof(long)        = %2lu\n"
	       "sizeof(long long)   = %2lu\n"
	       "sizeof(void *)      = %2lu\n"
	       "sizeof(float)       = %2lu\n"
	       "sizeof(double)      = %2lu\n"
	       "sizeof(long double) = %2lu\n",
	       sizeof(char), sizeof(short), sizeof(int),
	       sizeof(long), sizeof(long long), sizeof(void*),
	       sizeof(float), sizeof(double), sizeof(long double));

	return 0;
}
