#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#include"construction.h"

char *stores[10] = {
  "Best Buy",
  "Whole Foods",
  "McDonalds",
  "CVS",
  "the train station",
  "Dollar Tree",
  "the laundromat",
  "Modells",
  "American Eagle",
  "IKEA"
};

char *items[10] = {
  "ipads",
  "french fries",
  "bottles of water",
  "phones",
  "shirts",
  "closets",
  "apples",
  "boxes of paper",
  "pencils",
  "earbuds"
};

struct madlibs initMadlibs() {
  char *store = stores[rand() % 8];
  char *item = items[rand() % 8];
  int number = rand() % 15;
  return makeMadlibs(store, number, item);
}

struct madlibs makeMadlibs(char *sto, int num, char *ite) {
  struct madlibs final;
  final.store = sto;
  final.number = num;
  final.item = ite;
  return final;
}

void chstoreMadlibs(struct madlibs *p, char *sto) {
  p->store = sto;
}

void chnumMadlibs(struct madlibs *p, int num) {
  p->number = num;
}

void chitemMadlibs(struct madlibs *p, char *ite) {
  p->item = ite;
}

void printMadlibs(struct madlibs *p) {
  printf("Jack went to %s in order to buy %d %s\n", p->store, p->number, p->item);
}
