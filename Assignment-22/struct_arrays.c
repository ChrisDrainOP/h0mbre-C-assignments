#include <stdio.h>
#include <stdlib.h>

struct stats {
    int points;
    int games;
};

struct players{
    struct stats player[5];
} *new_player;

int main() {
    struct players player_instance;
    new_player = &player_instance;

    printf("Enter Player 1's point total: \n");
    scanf("%d", &(new_player->player[0].points));
    printf("Enter Player 1's game total: \n");
    scanf("%d", &(new_player->player[0].games));

    printf("Enter Player 2's point total: \n");
    scanf("%d", &(new_player->player[1].points));
    printf("Enter Player 2's game total: \n");
    scanf("%d", &(new_player->player[1].games));

    printf("Player 1's scoring average was: %.2f\n", (float)new_player->player[0].points / (float)new_player->player[0].games);
    printf("Player 2's scoring average was: %.2f\n", (float)new_player->player[1].points / (float)new_player->player[1].games);
    
    return 0;
}