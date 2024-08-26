#include <stdio.h>

/* Prints the Fahrenheit-Celsius table, just like temp_conversion_while.c
 * except using a slightly different syntax. */
int main()
{
				int f;

				for (f = 300; f >= 0; f = f - 20)
								printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
}
