struct madlibs {char *store; int number; char *item;};

struct madlibs makeMadlibs(char *sto, int num, char *ite);

struct madlibs initMadlibs();

void chstoreMadlibs(struct madlibs *p, char *sto);

void chnumMadlibs(struct madlibs *p, int num);

void chitemMadlibs(struct madlibs *p, char *item);

void printMadlibs(struct madlibs *p);
