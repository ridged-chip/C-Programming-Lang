#include <stdio.h>

/* print Fahrenheit-Celsius table from 0...300 */

int main()
{
				int f, c;
				int lowest, highest, step;

				lowest = 0;
				highest = 300;
				step = 20;

				f = lowest;

				printf("F => C Conversion Table\n");
				printf("F\tC\n");

				while (f <= highest) {
								c = 5 * (f-32) / 9;
								printf("%d\t%d\n", f, c);
								f = f + step;
				}

				printf("\n\n");
				printf("C => F Conversion Table\n");
				printf("C\tF\n");
				
				c = lowest;
				while (c <= highest) {
								f = (9/5)*c + 32;
								printf("%d\t%d\n", c, f);
								c = c + step;
				}

 return 0;
}
