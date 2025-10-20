//Program to check whether a number is even or odd using if-else statement

#include <stdio.h>

int main(){
  int num;
  printf("Enter num: ");
  scanf("%d", &num);
  if(num%2){
    printf("Odd");
  }
  else{
    printf("Even");
  }
  return 0;
}
