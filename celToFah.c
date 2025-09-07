// Program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main(){
  float cel;
  printf("Enter Temperature in Celsius: ");
  scanf("%f", &cel);
  printf("Temperature in Fahrenheit: %f", cel*9/5+32);
  return 0;
}
