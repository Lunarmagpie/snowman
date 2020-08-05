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
        //drawSnowman(guessArr, 9, "test"); This is how to call the function. give it the guesses, number of guesses, and the correct string
        while (1)
            makeGuess(guessArr);



        //end the code when the game is over
       break;
    }
}