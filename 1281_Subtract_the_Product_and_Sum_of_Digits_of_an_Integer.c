#include <stdio.h>


int subtract_product_and_sum (int n) {
  int prod = 1;
  int sum = 0;
  for (int i = n; i != 0; i = i / 10) {
    int d = i % 10;
    prod = prod * d;
    sum = sum + d;
  }
  return prod - sum;
}

int main (void) {
  printf("%d\n", subtract_product_and_sum(234));

  for (;;) {
    puts("123");
  }
  return 0;
}
