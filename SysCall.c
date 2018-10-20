#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
printf("Thread id %ld \n",syscall(SYS_gettid));
printf("i changed syscall file");
return 0;
}
