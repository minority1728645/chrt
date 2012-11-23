chrt-for-minix
==============

Add a system call chrt - change a process to realtime in minix 3.1.8

The schedular for normal process had been switched to SCHED service since minix 3.1.7.

Read [this](http://www.minix3.org/docs/scheduling/report.pdf) for details.

So, to change a process's schedular, we only need to add a handler in SCHED, and a system call to invoke it.

Since we can not communicate with SCHED directly, forwarding by PM is needed.

