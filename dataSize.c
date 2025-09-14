// Program to print size (in bytes) of various data types.

#include <stdio.h>

int main(){
  printf("Size of char is: %u bytes\n", sizeof(char));
  printf("Size of short is: %u bytes\n", sizeof(short));
  printf("Size of int is: %u bytes\n", sizeof(int));
  printf("Size of float is: %u bytes\n", sizeof(float));
  printf("Size of double is: %u bytes\n", sizeof(double));
  return 0;
}
