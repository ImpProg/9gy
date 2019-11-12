#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("Missing parameter!\n");
		return -1;
	}
	
	char* value = getenv(argv[1]);
	if (value) {
		printf("%s: %s\n", argv[1], value);
	} else {
		printf("%s: NOT FOUND!\n", argv[1]);
	}
	
	return 0;
}