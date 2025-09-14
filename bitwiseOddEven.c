// Program to input an int and check whether it's even or odd using bitwise and (&) and ternary operator.

#include <stdio.h>

int main(){
  int i;
  printf("Enter the number: ");
  scanf("%d", &i);
  i&1?printf("%d is Odd\n", i):printf("%d is Even\n", i);
  return 0;
}
