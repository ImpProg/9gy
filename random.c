#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", (int)((rand() / (double) RAND_MAX) * 99 + 1));
	}
	
	return 0;
}