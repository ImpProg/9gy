#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* find(char* text, char* delimiter) {
	char* token = strtok(text, delimiter);
	while (token) {
		if (isupper(token[0])) {
			for (char* ch = token; *ch != '\0'; ++ch) {
				if (isdigit(*ch)) {
					return token;
				}
			}
		}
		token = strtok(NULL, delimiter);
	}
	
	return NULL;
}

int main() {
	
	char input[] = "Alma:korte:B4r4ck:szilva:D10";
	printf("%s\n", find(input, ":"));
	
	return 0;
}