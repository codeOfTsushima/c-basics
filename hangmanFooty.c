    // HangmanGame.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 6
#define WORDS_COUNT 15

const char* words[] = {
    "Messi",
    "Ronaldo",
    "Neymar",
    "Suarez",
    "Ronaldinho",
    "Mbappe",
    "Zidane",
    "Kante",
    "Modric",
    "Haaland",
    "Pedri",
    "Levengoalski",
    "Lamine",
    "Rashford",
    "Iniesta"
};


const char* getRandomWord() {
    int randomIndex = rand() % WORDS_COUNT;
    return words[randomIndex];
}

int main() {
    srand(time(0));
    const char* wordToGuess = getRandomWord();
    int wordLength = strlen(wordToGuess);
    char guessedWord[wordLength];
    int attempts = 0;

    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    printf("Guess the footballer name\n");

    while (attempts < MAX_ATTEMPTS) {
        printf("Word to Guess: %s\n", guessedWord);
        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (wordToGuess[i] == guess) {
                guessedWord[i] = guess;
                found = 1;
            }
        }

        if (!found) {
            attempts++;
            printf("Incorrect guess. Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
        }

        if (strcmp(wordToGuess, guessedWord) == 0) {
            printf("Congratulations! You've guessed the word: %s\n", wordToGuess);
            break;
        }
    }

    if (attempts >= MAX_ATTEMPTS) {
        printf("You're out of attempts! The word was: %s\n", wordToGuess);
    }

    return 0;
}
    
    
   