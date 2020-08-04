//
// Created by Drakomire on 8/3/2020.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int makeGuess(int* charactersGuessed[26]){
    int guess = ' ';
    while (1){
        guess = getchar();
        guess = tolower(guess);
        if (guess < 97 || guess > 122){
            printf("Invalid Input");
            continue;
        }else{
            if (charactersGuessed[guess-97]){
                printf("You already guessed this letter");
                getchar();
            }else{
                (charactersGuessed[guess-97]) = (int *) 1;
                getchar();
                return 1;
            }

            break;
        }


    }
}
