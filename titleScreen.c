//
// Created by Ander on 8/5/2020.
//

#include "stdio.h"

void drawTitle(){
    printf("+---------------------SNOWMAN----------------------+\n"
           "|     *               ___                          |\n"
           "| *                  |   |                         |\n"
           "|                  __|___|__ WWWWW          *      |\n"
           "|          *       / o >o \\   \\=/                  |\n"
           "| *                \\   u  /    |         PRESS     |\n"
           "|             >---/    .   \\---|>        ANY KEY   |\n"
           "|                 |    .   |   | *       TO        |\n"
           "|   *             \\    .   /   |         CONTINUE  |\n"
           "|                 /        \\   |                   |\n"
           "|                |          |  |      *            |\n"
           "|    *      *     \\________/   |                   |\n"
           "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
           "+--------------------------------------------------+\n");
    char dummyVar;
    while(getchar()!='\n');
}