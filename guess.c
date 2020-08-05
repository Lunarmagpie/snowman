//
// Created by Jake on 8/3/2020.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*** Run this when a player makes a geuss
 *   params: int charactersGuessed[26] - Characters Guessed Array
 *         int *livesUsed - Pointer to lives used
 *         char word[100] - word the player is trying to guess
 ***/

int makeGuess(int* charactersGuessed[26], int *livesUsed, char word[100]){
    int guess = ' ';
    //Continue guessing letter until valid input
    while (1){
        guess = getchar();
        guess = tolower(guess);
        if (guess < 97 || guess > 122){
            printf("Invalid Input");
            continue;
        }else{
            if (charactersGuessed[guess-97]){
                //When player has already guesed letter
                printf("You already guessed this letter\n");
                getchar();
                continue;
            }else{
                //When a new letter is guessed
                (charactersGuessed[guess-97]) = (int *) 1;
                getchar();
                if (strchr(word, guess)){

                }else{
                    //Incorrect guess
                    printf("Incorrect Guess\n");
                    (*livesUsed)++;
                }


                return 1;
            }

            break;
        }


    }
}
