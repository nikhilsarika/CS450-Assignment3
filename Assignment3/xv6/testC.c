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
   printf(1,"Address allocated the shared memory : %d\n", test);

   printf(1,"Value Stored in the shared memory : %d", *test);

   int q =0;
   int* testSys;
   q = getSharedPage(0,3);
   testSys = (int *)q;
   printf(1,"Address retrieved from the shared memory: %d\n", testSys);
   printf(1,"Value retrieved from the shared memory : %d\n", *testSys);


   int* testFree;
   freeSharedPage(0);
   testFree = (int *)q;
   printf(1,"Address after the memory is freed: %d\n", testFree);
   printf(1,"Value after the memory is freed : %d\n", *testFree);
  exit();
}

