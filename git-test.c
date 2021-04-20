#include <stdio.h>

void testFunction(void){
  printf("test_test.");
  int x=0;
  for(int i=0; i<10; i++){
    x += (i+1);
  }
  printf("1から10までの和は... %dです。\n", x);

  return 0;
}
