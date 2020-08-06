//
// Created by Jake on 8/3/2020.
//

#include <stdio.h>
#include <ctype.h>
#include "guess.h"
#include "drawFunc.h"
#include "titleScreen.h"
#include "randomWord.h"

int main(int argc, char* argv[]){
    while (1){
        int livesUsed = 0; //The amount of failed guesses
        int guessArr[26] = {0}; //Array of characters that where guessed
        char word[100]; //The word that the player has to guess
        randomWord ((FILE *) argv[1], word);
        printf("%s\n", word);
        drawTitle();
        //This is the main gameplay loop
        //draw snowman before first input
        drawSnowman(guessArr, livesUsed, word);
        while (1) {
            printf("\nGuess a letter:");
            makeGuess(guessArr, &livesUsed, word);
            if (drawSnowman(guessArr, livesUsed, word)){
                //This code executes when the player wins
                printf("You guessed the word!");
                break;
            }
            if (livesUsed>=10){
                //This code executes when the player looses
                printf("You lost the game. The word was %s.", word);
                break;
            }
        }

        //End the game. Get rid of this so the player can retry.
        printf("\nPress E to exit. Press R to play again.");
        int end = 1;
        while (1){
            int result = getchar();
            if (tolower(result) == (int) 'r'){
                getchar();
                end = 0;
                break;
            }
            if (tolower(result) == (int) 'e'){
                end = 1;
                getchar();
                break;
            }
            printf("\nInvalid Input. Press E or R.");


        }
        if (end)
            break;
    }
    return 0;
}