#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{ 
 // if(getsyscallinfo() != -1) {
  printf(1,"Number of system calls: %d\n", getsyscallinfo());
    // exit(); }
   // }
  exit();
}
