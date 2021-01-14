#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1,"Number of system calls: %d\n", getsyscallinfo());
  exit();
}
