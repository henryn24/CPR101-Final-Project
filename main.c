#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

void displayMenu(); // Function prototype for displaying the menu

int main() {
    int option; // Variable to store the user's menu choice

    do {
        displayMenu(); // Display the menu to the user
        printf("Choose an option (1-4, 0 to quit): ");
        if (scanf("%d", &option) != 1) {
            while (getchar() != '\n'); // Clear the input buffer
            printf("Invalid input. Please try again.\n");
            continue;
        }

        while (getchar() != '\n'); // Clear any extra characters from the input buffer

        switch (option) { // Handle the user's choice using switch statements
        case 1:
            fundamentals();
            break;
        case 2:
            manipulating();
            break;
        case 3:
            converting();
            break;
        case 4:
            tokenizing();
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }

    } while (option != 0);

    return 0;
}

void displayMenu() { // Function to display the main menu
    printf("\n--- String Operations Program ---\n");
    printf("1. Fundamentals Module\n");
    printf("2. Manipulating Module\n");
    printf("3. Converting Module\n");
    printf("4. Tokenizing Module\n");
    printf("0. Exit\n");
    printf("---------------------------------\n");
}
