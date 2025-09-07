// Program to calculate the area and perimeter of a rectangle based on its length and width

#include <stdio.h>

int main(){
  float len, wid;
  printf("Enter length: ");
  scanf("%f", &len);
  printf("Enter width: ");
  scanf("%f", &wid);
  printf("Area is: %f, Perimeter is %f\n", len*wid, 2*(len+wid));
  return 0;
}
