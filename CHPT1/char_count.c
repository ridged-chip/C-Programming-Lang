#include <stdio.h>

int main() {
				long nc;

				nc = 0;
				while (getchar() != EOF) {
								++nc;								//Increment by 1
								printf("%ld\n",nc);
				}
				return 0;		
}
