#include <stdio.h>

int main()
{
  float far, cel;
  float max = 200.0, min = 0.0, step = 20.0;

  printf("\nFahrenheit to Celsius Table\n\n");

  far = min;
  while (far <= max)
  {
    cel = (far - 32.0) * (5.0 / 9.0);
    printf("%3.0f %6.1f \n", far, cel);

    far = far + step;
  }
}
