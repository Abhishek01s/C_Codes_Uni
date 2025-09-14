// Program to demonstrate use of post-increment and pre-increment operators.

#include <stdio.h>

int main(){
  int i;
  printf("Enter number: ");
  scanf("%d", &i);
  printf("using ++i: %d\n", ++i);
  printf("using i++: %d\n", i++);
  printf("printing i after i++: %d", i);
  return 0;
}
