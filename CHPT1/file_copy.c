#include <stdio.h>

int main() {
				/* Note that we are using int here for c instead of char. This is because char cannot hold
				 * EOF characters */
				int c;

				/* Note here too c = getchar() is surrounded by parenthesis.
				 * This is necessary, because the precedence of an inequality operator (!=) 
				 * is higher than that of assignment (=). Without the paranthesis, 
				 * c would either be assigned 0 or 1 depending on if EOF was hit. */

				while ((c = getchar()) != EOF) {
								putchar(c);
				}

				return 0;
}
