#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //Declaring Variables
  double width;
  double height;
  double perimeter=0.0;
  double area=0.0;

  //Taking Inputs From User
  scanf("%lf", &width);
  printf("Enter The Width Of The Rectangle");
  scanf("%lf", &height);
  printf("Enter The Height Of The Rectangle");

  //Calculating The Area And Perimeter
  area=width*height;
  perimeter=2.0 * (width+height);

  //Displaying The Results
  printf("The Area Is Calculated As%lf",area);
  printf("The Perimeter Is Calculated As%lf",perimeter);
  return 0;
}
