//
// Created by kieran on 8/5/2020.
//

#include "randomWord.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomWord(FILE *words, char *word){
    words = fopen(words, "r");
    srand(time(0));
    int randomNumber = rand();
    randomNumber = (randomNumber%10);
    for (int i=0; i<=randomNumber; i++){
        fscanf(words, "%s", word);
    }
}