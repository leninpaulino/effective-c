#include <stdio.h>

void swap(int *pa, int *pb)
{
  int t = *pa;

  *pa = *pb;
  *pb = t;
  printf("swap: a = %d, b = %d\n", *pa, *pb);
};

int main(void)
{
  int a = 21;
  int b = 17;

  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);
  return 0;
}
