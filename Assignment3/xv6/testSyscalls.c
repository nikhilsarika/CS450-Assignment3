#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{	
  int key = atoi(argv[1]);
  int noOfPages = atoi(argv[2]);
  int i;
  for(i = 1; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");

  printf(1," %d  %d %s ",key, noOfPages,"inside main method\n");
  getSharedPage(key,noOfPages);
  freeSharedPage(key);
  exit();
}

