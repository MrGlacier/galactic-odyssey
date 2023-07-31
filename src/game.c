#include <stdio.h>

#include "game.h"

const char* game_name = "Galatic Odyssey";

void game_init() {
    printf("Willkommen zu %s !!!\n\n", get_game_name());
    
    printf("Willst du ein neues Spiel beginnen? (J/N): \n");

    int input_char = getchar();
    
    if (input_char == 'j' || input_char == 'J') {
        printf("Du hast folgendes eingegeben: '%c'\n", input_char);
    }
}

char* get_game_name() {
    return (char*)game_name;
}
