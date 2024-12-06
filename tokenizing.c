#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing(void) {
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE];
	char* nextWord = NULL; // Pointer to the current token
	int wordsCounter; 
	do {
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin); // Get user input
		words[strlen(words) - 1] = '\0'; // Remove newline
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " "); // Tokenize input (space delimiter)
			wordsCounter = 1;
			while (nextWord) { // Process each token
				printf("Words #%d is \'%s'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); // Get next token
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");

// V2
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter;
	do {
		printf("Type a few phraes separated by comma(q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin); //Get user input
		phrases[strlen(phrases) - 1] = '\0'; // Remove newline 
		if (strcmp(phrases, "q" != 0)) {
			nextPhrase = strtok(phrases, ","); // Tokenize the input by commas
			phrasesCounter = 1;
			while (nextPhrase) { // Process each token
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ","); // Get the next token
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}