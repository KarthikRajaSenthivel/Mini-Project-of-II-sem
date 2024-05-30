#include <stdio.h>
struct Player {
    char name[20];
    int runs;
    int balls;
    int fours;
    int sixes;
    float strike_rate;
};
int main() {
    struct Player players[2];
 char team_name[50];
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Runs: ");
        scanf("%d", &players[i].runs);
        printf("Balls: ");
        scanf("%d", &players[i].balls);
        printf("4s: ");
        scanf("%d", &players[i].fours);
        printf("6s: ");
        scanf("%d", &players[i].sixes);
        players[i].strike_rate = (float)(players[i].runs) / players[i].balls * 100.0;
    }
printf("Team name: ");
    scanf("%s",team_name);
    printf("\nPlayer\tRuns\tBalls\t4s\t6s\tS.R\n");
    for (int i = 0; i < 2; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", players[i].name, players[i].runs, players[i].balls, 
               players[i].fours, players[i].sixes, players[i].strike_rate);
    }
    return 0;
}
