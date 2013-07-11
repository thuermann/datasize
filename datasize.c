/*
 * $Id: datasize.c,v 1.6 2013/07/11 23:50:04 urs Exp $
 */

#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

#define FMTSIZE(type) "%-12s %2zu\n", #type, sizeof(type)

int main(void)
{
	struct timeval  tv;
	struct timespec ts;
	struct stat     st;

	printf(FMTSIZE(char));
	printf(FMTSIZE(short));
	printf(FMTSIZE(int));
	printf(FMTSIZE(long));
	printf(FMTSIZE(long long));
	putchar('\n');

	printf(FMTSIZE(time_t));
	printf(FMTSIZE(clock_t));
	printf(FMTSIZE(suseconds_t));
	printf(FMTSIZE(size_t));
	printf(FMTSIZE(void *));
	printf(FMTSIZE(off_t));
	putchar('\n');

	printf(FMTSIZE(tv.tv_sec));
	printf(FMTSIZE(tv.tv_usec));
	printf(FMTSIZE(st.st_size));
	printf(FMTSIZE(st.st_atime));
	printf(FMTSIZE(ts.tv_sec));
	printf(FMTSIZE(ts.tv_nsec));
	putchar('\n');

	printf(FMTSIZE(float));
	printf(FMTSIZE(double));
	printf(FMTSIZE(long double));

	return 0;
}
