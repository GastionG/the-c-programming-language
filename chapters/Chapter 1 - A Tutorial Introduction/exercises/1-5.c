#include <stdio.h>

int main()
{
  printf("\nFahrenheit to Celsius Table\n\n");

  for (int far = 200; far >= 0; far = far - 20)
  {
    printf("%3d %6.1f \n", far, (far - 32.0) * (5.0 / 9.0));
  }
}
