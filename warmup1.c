#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{ 
  printf(1,"Number of system calls: %d\n", getsyscallinfo());
  exit();
}
