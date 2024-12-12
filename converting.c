#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V1
void converting(void) {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char intString[BUFFER_SIZE];
	int intNumber; // Converted integer
	do {
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin); // Get numeric string
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0) {
			intNumber = atoi(intString); // Convert string to int
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");

// V2
	printf("*** Start of Converting Strings to double Demo ***\n");
	char doubleString[BUFFER_SIZE];
	int doubleNumber; // Converted double
	do {
		printf("Type a double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin); // Get numeric string
		doubleString[strlen(doubleString) - 1] = '\0';
		if (strcmp(doubleString, "q") != 0) {
			doubleNumber = atoi(doubleString); // Convert string to double
			printf("Converted number is %d\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");

// V3
	printf("*** Start of Converting Strings to long Demo ***\n");
	char longString[BUFFER_SIZE];
	long longNumber; // Converted long
	do {
		printf("Type the long numeric string (q - to quit):\n");
		fgets(longString, BUFFER_SIZE, stdin); // Get long string
		longString[strlen(longString) - 1] = '\0'; // Remove newline
		if (strcmp(longString, "q") != 0) {
			longNumber = atol(longString); // Convert string to long 
			printf("Converted number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);
	printf("*** End of Converting Strings to long Demo***\n\n");
} 

