#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#include"construction.h"

int main() {
  srand(time(0));
  struct madlibs test0 = initMadlibs();
  struct madlibs *p0 = &test0;
  printMadlibs(p0);
  chstoreMadlibs(p0, "his mother's house");
  printMadlibs(p0);
  printf("\n");

  struct madlibs test1 = initMadlibs();
  struct madlibs *p1 = &test1;
  printMadlibs(p1);
  chnumMadlibs(p1, 121);
  printMadlibs(p1);
  printf("\n");

  struct madlibs test2 = initMadlibs();
  struct madlibs *p2 = &test2;
  printMadlibs(p2);
  chitemMadlibs(p2, "cows");
  printMadlibs(p2);
}
