#include <stdio.h>

int nuts;
int cornprice= 100;
int total;

int main(void){
  printf("insert the kilograms of nuts \n");
  scanf("%d", &corn);



  if (nuts >= 1 && nuts <= 300 ){
    total = nuts * cornprice;

    printf("the price of the nuts is %d", total);
  }

  else if (nuts > 300){
    total = nuts * 90;
    printf("the price of the nuts is %d", total);
  }
	return 0;
}
