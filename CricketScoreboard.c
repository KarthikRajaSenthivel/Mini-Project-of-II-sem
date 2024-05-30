#include <stdio.h>

// Structure to represent a player's scorecard
struct Player {
    char name[20];
    int runs;
    int balls;
    int fours;
    int sixes;
    float strike_rate;
};

int main() {
    // Array to hold scorecards of two players
    struct Player players[2];
 char team_name[50];

    // Input team name
    
    // Input scorecard details for each player
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
        
        // Calculate strike rate
        players[i].strike_rate = (float)(players[i].runs) / players[i].balls * 100.0;
    }
printf("Team name: ");
    scanf("%s",team_name);
    // Print scorecard header
    printf("\nPlayer\tRuns\tBalls\t4s\t6s\tS.R\n");

    // Print scorecard details for each player
    for (int i = 0; i < 2; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", players[i].name, players[i].runs, players[i].balls, 
               players[i].fours, players[i].sixes, players[i].strike_rate);
    }

    return 0;
}
