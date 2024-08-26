#include <stdio.h>

int main() {
				/* Note that we are using int here for c instead of char. This is because char cannot hold
				 * EOF characters */
				int c;

				c = getchar();
				while (c != EOF) {
								putchar(c);
								c = getchar();
				}

				return 0;
}
