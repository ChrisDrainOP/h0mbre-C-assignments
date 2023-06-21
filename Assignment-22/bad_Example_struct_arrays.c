#include <stdio.h>
#include <stdlib.h>

/*
The goal here is to create a program that takes input for five player's point totals 
This array of structs should look like this in pseudo code:

struct stats {
  int points;
  int games;
};

struct stats player[5];*/

struct stats {
    int points;
    int games;
};

struct stats player{
    struct stats players[5];
}, *new_player;

new_player = &player;

int main() {
    
    printf("Enter Player 1's point total: \n");
    scanf("%d", (new_player->players[0]).points);
    printf("Enter Player 1's game total: \n");
    scanf("%d", (new_player->players[0]).games);

    printf("Enter Player 2's point total: \n");
    scanf("%d", (new_player->players[1]).points);
    printf("Enter Player 2's game total: \n");
    scanf("%d", (new_player->players[1]).games);

    printf("Player 1's scoring average was: %.2f", ((new_player->players[0]).points / (new_player->players[0]).games));
    printf("Player 2's scoring average was: %.2f", ((new_player->players[1]).points / (new_player->players[1]).games));
}