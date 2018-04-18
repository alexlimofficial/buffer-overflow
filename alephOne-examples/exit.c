/*
*  In the shellcode.c file, the execve() system call is called. However, 
*  what happens if execve() call fails ofr some reason? The program will
*  continue to fetch instructions from the stack, which may contain 
*  random data. The program will most likely core dump. An exit syscall 
*  added after the execve syscall is necessary in order to have the 
*  program exit cleanly if the execve syscall fails. 
*
*  Compiled: gcc -o exit -static exit.c
*  Debug/disassemble: gdb exit
* 		      disassemble _exit
*/

#include <stdlib.h>

void main() {
	exit(0);
}
