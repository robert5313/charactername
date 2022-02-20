/*
character
Robert Kiptoo Kimaiyo
last updated on 20th feb, 2022
C89
MIT license
startup
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char characterName[] = "Robert";
    int characterAge = 22;
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);


    return 0;
}
