//
// Created by Drakomire on 8/3/2020.
//

#include <stdio.h>
#include "guess.h"
#include "drawFunc.h"

int main(){
    while (1){
        int livesUsed = 0;
        int guessArr[26] = {0};
        char word[100] = "hello";

        //This is the main gameplay loop
        while (1) {
            makeGuess(guessArr, &livesUsed, word);
            if (drawSnowman(guessArr, livesUsed, word)){ //This is how to call the function. give it the guesses, number of guesses, and the correct string
                printf("You guessed the word!");
                break;
            }
            if (livesUsed>10){
                break;
            }
        }
        //This code executes when the player looses
        printf("You lost the game. The word was %s.", word);

        //End the game. Get rid of this so the player can retry.
        break;
    }
}