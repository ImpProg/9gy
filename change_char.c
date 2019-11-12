#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Letters {
	int numberOfLetters;
	const int maxSize;
	char* letters;
} Letters;

int checkLetter(char letter, Letters letters) {
	int i = 0;
	while (i < letters.numberOfLetters && letters.letters[i] != letter) {
		++i;
	}
	
	return i < letters.numberOfLetters;
}

void change(char* text) {
	Letters letters = {.numberOfLetters = 0, .maxSize = strlen(text), .letters = calloc(strlen(text), sizeof(char))};
	for (char* ch = text; *ch != '\0'; ++ch) {
		if (!checkLetter(*ch, letters)) {
			letters.letters[letters.numberOfLetters++] = *ch;
		}
	}
	
	for (int i = 0; i < letters.numberOfLetters; ++i) {
		char* ch = strchr(text, letters.letters[i]);
		if (isdigit(*ch)) {
			*ch = '!';
		} else if (islower(*ch)) {
			*ch = toupper(*ch);
		} else {
			*ch = tolower(*ch);
		}
	}
	free(letters.letters);	
}

int main(int argc, char** argv) {
	char input[50];
	strcpy(input, argv[1]);
	change(input);
	printf("%s\n", input);
	
	return 0;
}