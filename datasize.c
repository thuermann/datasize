/*
 * $Id: datasize.c,v 1.3 2010/10/20 11:09:03 urs Exp $
 */

#include <stdio.h>

#define FMTSIZE(type) "%-12s %2zu\n", #type, sizeof(type)

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
