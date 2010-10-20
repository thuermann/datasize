/*
 * $Id: datasize.c,v 1.2 2010/10/20 11:08:53 urs Exp $
 */

#include <stdio.h>

#define FMTSIZE(type) "%-12s %2lu\n", #type, sizeof(type)

int main(void)
{
	printf(FMTSIZE(char));
	printf(FMTSIZE(short));
	printf(FMTSIZE(int));
	printf(FMTSIZE(long));
	printf(FMTSIZE(long long));
	printf(FMTSIZE(void *));
	printf(FMTSIZE(float));
	printf(FMTSIZE(double));
	printf(FMTSIZE(long double));

	return 0;
}
