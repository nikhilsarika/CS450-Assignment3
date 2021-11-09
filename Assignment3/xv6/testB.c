#include "types.h"
#include "stat.h"
#include "user.h"
int
main(int argc, char *argv[])
{
   int p =0;
   int* test;
   p = getSharedPage(0,3);
   test = (int *)p;
   printf(1,"Pointer Inside Child : %d\n", test);
   printf(1,"Inside Child : %d", *test);

  exit();
}
