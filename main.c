//
// Created by Jake on 8/3/2020.
//

#include <stdio.h>
#include "guess.h"
#include "drawFunc.h"
#include "titleScreen.h"

int main(){
    while (1){
        int livesUsed = 0; //The amount of failed guesses
        int guessArr[26] = {0}; //Array of characters that where guessed
        char word[100] = "hello"; //The word that the player has to guess
        drawTitle();
        //This is the main gameplay loop
        //draw snowman before first input
        drawSnowman(guessArr, livesUsed, word);
        while (1) {
            makeGuess(guessArr, &livesUsed, word);
            if (drawSnowman(guessArr, livesUsed, word)){
                //This code executes when the player wins
                printf("You guessed the word!");
                break;
            }
            if (livesUsed>10){
                //This code executes when the player looses
                printf("You lost the game. The word was %s.", word);
                break;
            }
        }

        //End the game. Get rid of this so the player can retry.
        break;
    }
}