/**/

#include<stdio.h>

int main(void) {
  int a, b, c, median, temp;
  median = 0;
  temp = 0;
  printf("Please enter 3 numbers separated by spaces > ");
  scanf ("%d%d%d", &a, &b, &c);

  if (a>=b) {
    temp = b;
    b = a;
    a = temp;
  }
  if (c>b)
    median = b;
  else if (c<b && c>a)
    median = c;
  else 
    median = a;

  printf("%d is the median\n", median);

  return(0);

}
