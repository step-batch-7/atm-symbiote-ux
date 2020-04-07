#include<math.h>
#include "atm.h"

unsigned int get_money(unsigned short int money) {
  unsigned int notes = 0;
  int denominations[] = {1,5,10,20,50,100,500,2000};
  int *ptr = denominations;
  if(money > 31999) return notes;
  for(int i = 7; i >= 0; i--) {
    notes += pow(16,i) * (money / ptr[i]);
    money = money % ptr[i];
  }
  return notes;
}