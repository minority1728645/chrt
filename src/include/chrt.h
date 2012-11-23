#ifndef _CHRT_H
#define _CHRT_H
#include <lib.h>
#include <unistd.h>
PRIVATE int chrt(long deadline)
{
	message m;
	if(deadline<0)return 1;
	alarm((int)deadline);
	m.m2_l1=deadline*1000;
	return _syscall(PM_PROC_NR,CHRT,&m);
}

#endif

