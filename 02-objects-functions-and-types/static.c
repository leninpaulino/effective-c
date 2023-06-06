#include <stdio.h>

void increment(void)
{
  static unsigned int counter = 0;
  counter++;
  printf("%d ", counter);
}

int main(void)
{
  for (int i = 0; i < 5; i++)
  {
    increment();
  }

  return 0;
}

int *func(int i)
{
  const int j = i;  // ok
  static int k = j; // error

  return &k;
}
