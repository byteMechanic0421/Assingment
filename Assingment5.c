#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayWord(char word[], int guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int main() {
    char word[] = "PROGRAM"; // The word to guess
    int guessed[strlen(word)]; // Array to track guessed letters
    int remainingChances = 3; // Number of allowed wrong guesses
    int correctGuesses = 0; // Number of correctly guessed letters

    // Initialize guessed array to 0 (none of the letters are guessed initially)
    for (int i = 0; i < strlen(word); i++) {
        guessed[i] = 0;
    }

    printf("Welcome to Hangman!\n");
    printf("You have %d chances to guess the word.\n\n", remainingChances);

    while (remainingChances > 0 && correctGuesses < strlen(word)) {
        printf("Word: ");
        displayWord(word, guessed);
        printf("Guess a letter: ");
        
        char guess;
        scanf(" %c", &guess);
        guess = toupper(guess); // Convert guess to uppercase for case insensitivity

        int found = 0;
        for (int i = 0; word[i] != '\0'; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correctGuesses++;
                found = 1;
            }
        }

        if (found) {
            printf("Good guess!\n");
        } else {
            remainingChances--;
            printf("Wrong guess! Remaining chances: %d\n", remainingChances);
        }
    }

    if (correctGuesses == strlen(word)) {
        printf("Congratulations! You guessed the word: %s\n", word);
    } else {
        printf("Out of chances! The word was: %s\n", word);
        printf("The man is hanged!\n");
    }

    return 0;
}
