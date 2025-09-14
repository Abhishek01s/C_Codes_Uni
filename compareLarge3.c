// Program to input 3 values and find the largest out of them.

#include <stdio.h>

int main(){
  int a, b, c, d;
  printf("Enter the numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  d=a>b?(b>c?a:(a>c?a:c)):(b>c?b:c);
  printf("%d is largest\n", d);
  return 0;
}
