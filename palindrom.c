#include <stdio.h>
#include <string.h>

int main() {
	char text[50] = "indul a gorog aludni";
	if (strcmp(text, strrev(text)) == 0) {
		printf("Palindrom!\n");
	}
	
	return 0;
}