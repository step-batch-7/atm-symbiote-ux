#include <stdio.h>
#include "atm.h"

unsigned short int display_notes(int *note, unsigned short int *money) {
  if((*money / *note) && *money <= 31999) {
  printf("%d Note/Notes of Rs %d \n",*money / *note,*note);
  }
  return *money % *note;
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999,40000};
  int denominations[] = {1,5,10,20,50,100,500,2000};
  int *ptr = denominations;
  for (int i = 0; i < 7; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("Number of Notes in Rs %u are: in hex %08x\n", amounts[i], notes);
    unsigned short int money = amounts[i];
     for(int i = 7; i >= 0; i--) {
       money = display_notes(&ptr[i],&money);
     }
  }
  return 0;
}
