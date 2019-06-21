#include <stdio.h>


#include <stdio.h>
#include <stdlib.h>

#define ROULETTE_SIZE 36
 
int main(void){
 
  int i;
 
  srand(381);
	for (i=0;i<5;i++){
  long spin = (rand() % ROULETTE_SIZE)+1;
  printf("rand1:%lu\n",spin);
	}
  return 0;
}