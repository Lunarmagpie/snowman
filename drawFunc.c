//
// Created by Ander on 8/5/2020.
//
#include "stdio.h"
#include "string.h"

int drawSnowman(const int guessedLetters[26], int numberOfGuesses, char correctString[100]){
    if(numberOfGuesses == 10){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |   ' > '   |        |\n"
               "|         |   \\___/   |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/     *     \\-----<  |\n"
               "|        |      *      |       |\n"
               "|        |      *      |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 9){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |   '   '   |        |\n"
               "|         |   \\___/   |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/     *     \\-----<  |\n"
               "|        |      *      |       |\n"
               "|        |      *      |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 8){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |   '   '   |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/     *     \\-----<  |\n"
               "|        |      *      |       |\n"
               "|        |      *      |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 7){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |           |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/     *     \\-----<  |\n"
               "|        |      *      |       |\n"
               "|        |      *      |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 6){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |           |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/           \\-----<  |\n"
               "|        |             |       |\n"
               "|        |             |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 5){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |           |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|   >-----/           \\        |\n"
               "|        |             |       |\n"
               "|        |             |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 4){
        printf("+------------------------------+\n"
               "|             _____            |\n"
               "|            |     |           |\n"
               "|            |     |           |\n"
               "|         =============        |\n"
               "|          /         \\         |\n"
               "|         |           |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|         /           \\        |\n"
               "|        |             |       |\n"
               "|        |             |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 3){
        printf("+------------------------------+\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|           ___---___          |\n"
               "|          /         \\         |\n"
               "|         |           |        |\n"
               "|         |           |        |\n"
               "|          \\         /         |\n"
               "|          /         \\         |\n"
               "|         /           \\        |\n"
               "|        |             |       |\n"
               "|        |             |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 2){
        printf("+------------------------------+\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|           ___---___          |\n"
               "|          /         \\         |\n"
               "|         /           \\        |\n"
               "|        |             |       |\n"
               "|        |             |       |\n"
               "|         \\           /        |\n"
               "|         /           \\        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 1){
        printf("+------------------------------+\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|         ____-----____        |\n"
               "|        /             \\       |\n"
               "|       /               \\      |\n"
               "|      |                 |     |\n"
               "|      |                 |     |\n"
               "|       \\               /      |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    if(numberOfGuesses == 0){
        printf("+------------------------------+\n"
               "|     *                        |\n"
               "|                              |\n"
               "|                              |\n"
               "|                        *     |\n"
               "|        *                     |\n"
               "|                              |\n"
               "|                              |\n"
               "|                   *          |\n"
               "|                              |\n"
               "|                              |\n"
               "|       *                      |\n"
               "|            *                 |\n"
               "|                              |\n"
               "|                              |\n"
               "|     *                         |\n"
               "|                       *      |\n"
               "|                              |\n"
               "|                              |\n"
               "|                              |\n"
               "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
               "+------------------------------+\n");
    }
    printf("| ");
    int isAllCorrect = 1;
    for (int i = 0; i < strlen(correctString); i++){
        if(guessedLetters[correctString[i]-97]){
            printf("%c ", correctString[i]);
        }else{
            printf("_ ");
            isAllCorrect = 0;
        }
    }
    for(int i =0; i < (30 - strlen(correctString) * 2) - 1; i++){
        printf(" ");
    }
    printf("|\n"
           "+------------------------------+\n");
    return isAllCorrect;
}