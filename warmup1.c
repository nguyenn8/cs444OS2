#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  //int count = 0;
  //int temp = getsyscallinfo();

  //int count2 = 0; 
  //if(getsyscallinfo() > 0){
 // count++;
 // printf(1, "Number of system calls: %d\n", count);
 // printf(1, "temp: %d\n", temp);
  //exit();
 // }

  //printf(1,"Num of syscall: %d\n", syscall()); 
  printf(1,"Number of system calls: %d\n", getsyscallinfo());
  exit();
}
