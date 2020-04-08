#include<math.h>
#include "atm.h"

unsigned int get_money(unsigned short int money) {
  unsigned int notes = 0;
  int denominations[] = {2000,500,100,50,20,10,5,1};
  if(money > 31999) return notes;
  for(int i = 0; i < 8; i++) {
    notes <<=4;
    notes |=money/denominations[i];
    money %= denominations[i];
  }
  return notes;
}