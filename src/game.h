#pragma once

typedef struct yourney {
    char* yourney_name; // Name der Reise (gruppe) ?
    unsigned short settlers; // Siedler - Max: 65536

} Yourney;

void game_init();
char* get_game_name();