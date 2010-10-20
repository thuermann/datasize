/*
 * $Id: datasize.c,v 1.4 2010/10/20 11:09:13 urs Exp $
 */

#include <stdio.h>
#include <time.h>
#include <sys/types.h>

#define FMTSIZE(type) "%-12s %2zu\n", #type, sizeof(type)

int main(void)
{
	printf(FMTSIZE(char));
	printf(FMTSIZE(short));
	printf(FMTSIZE(int));
	printf(FMTSIZE(long));
	printf(FMTSIZE(long long));
	putchar('\n');

	printf(FMTSIZE(time_t));
	printf(FMTSIZE(size_t));
	printf(FMTSIZE(off_t));
	printf(FMTSIZE(void *));
	putchar('\n');

	printf(FMTSIZE(float));
	printf(FMTSIZE(double));
	printf(FMTSIZE(long double));

	return 0;
}
