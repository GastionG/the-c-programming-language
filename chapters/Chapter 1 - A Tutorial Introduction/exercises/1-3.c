#include <stdio.h>

int main()
{
  float far, cel;
  float max = 200.0, min = 0.0, step = 20.0;

  printf("\nCelsius to Fahrenheit Table\n\n");

  cel = min;
  while (cel <= max)
  {
    far = cel * 9.0 / 5.0 + 32.0;
    printf("%3.0f %6.1f \n", cel, far);

    cel = cel + step;
  }
}
