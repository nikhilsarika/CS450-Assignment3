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
   *test = 10; 
   printf(1,"Pointer Inside Parent : %d\n", test);

   printf(1,"Inside Parent : %d", *test);

   int q =0;
   int* testSys;
   q = getSharedPage(0,3);
   testSys = (int *)q;
   printf(1,"Inside Parent after syscall: %d\n", testSys);
   printf(1,"Pointer Inside Parent after syscall : %d\n", *testSys);

  exit();
}
