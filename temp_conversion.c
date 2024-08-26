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
				while (f <= highest) {
								c = 5 * (f-32) / 9;
								printf("%d\t%d\n", f, c);
								f = f + step;
				}
 return 0;
}
