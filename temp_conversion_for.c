#include <stdio.h>

/* Prints the Fahrenheit-Celsius table, just like temp_conversion_while.c
 * except using a slightly different syntax. */

#define LOWER 0
#define UPPER 300
#define STEP  20

int main()
{
				int f;

				for (f = UPPER; f >= LOWER; f = f - STEP)
								printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
}
