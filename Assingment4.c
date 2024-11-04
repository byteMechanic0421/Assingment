#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoice(int choice) {
    switch (choice) {
        case 0: printf("Rock"); break;
        case 1: printf("Paper"); break;
        case 2: printf("Scissors"); break;
    }
}

int determineWinner(int userChoice, int computerChoice) {
    // 0: Rock, 1: Paper, 2: Scissors
    if (userChoice == computerChoice) return -1; // Tie
    if ((userChoice == 0 && computerChoice == 2) || 
        (userChoice == 1 && computerChoice == 0) || 
        (userChoice == 2 && computerChoice == 1)) {
        return 1; // User wins
    } else {
        return 0; // Computer wins
    }
}

int main() {
    int userChoice, computerChoice;
    srand(time(0)); // Seed the random number generator

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose:\n0 for Rock\n1 for Paper\n2 for Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    // Generate computer choice based on random number
    int randomNum = rand() % 101;
    if (randomNum <= 33) computerChoice = 0; // Rock
    else if (randomNum <= 66) computerChoice = 1; // Paper
    else computerChoice = 2; // Scissors

    printf("You chose: ");
    displayChoice(userChoice);
    printf("\nComputer chose: ");
    displayChoice(computerChoice);
    printf("\n");

    int result = determineWinner(userChoice, computerChoice);
    if (result == -1) {
        printf("It's a tie!\n");
    } else if (result == 1) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
