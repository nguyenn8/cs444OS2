#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
printf("Number of system calls: %d\n", getsyscallinfo());
}
