#include<math.h>
#include<stdio.h>
#include "atm.h"

void display_notes(unsigned int notes) {
  unsigned  int denominations[] = DENOMINATIONS;
  unsigned int count = 0;
  for(int i = 0; i < 8; i++) {
    count = notes << i * 4;
    count = count >> 28;
    count && printf("%u %s of Rs %u \n",count,count > 1 ? "Notes" :"Note",denominations[i]);
  }
}

unsigned int get_money(unsigned short int money) {
  unsigned int notes = 0;
  unsigned int denominations[] = DENOMINATIONS;
  if(money > 31999) return notes;
  for(int i = 0; i < 8; i++) {
    notes <<=4;
    notes |=money/denominations[i];
    money %= denominations[i];
  }
  return notes;
}