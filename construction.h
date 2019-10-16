struct currency {char country[100]; char name[]; int conversion};

void makeCurrency(char *country, char *name, int conversion);

void changeCurrency(currency c, char *country, char*name, int conversion);

void printCurrency(currency c);
