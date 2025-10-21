// Program to take a person's age as input and check if they are eligible to vote using nested ifs

#include <stdio.h>

int main(){
  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  if(age>=0){
    if(age>=18){
      printf("Eligible to vote");
    }
    else{
      printf("Not eligible to vote");
    }
  }
  else{
    printf("Invalid age");
  }
  return 0;
}
