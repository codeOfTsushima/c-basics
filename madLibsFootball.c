#include <stdio.h>

int main() {
    char player[30];
    char adjective[20];
    int number;
    char food[20];
    char bodyPart[20];
    char noise[20];
    char verb[20];
    char animal[20];
    char place[30];

    printf("Welcome to Football Mad Libs!\n");
    printf("Enter a football player's name: ");
    scanf("%s", player);

    printf("Enter an adjective: ");
    scanf("%s", adjective);

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a type of food: ");
    scanf("%s", food);

    printf("Enter a body part: ");
    scanf("%s", bodyPart);

    printf("Enter a funny noise: ");
    scanf("%s", noise);

    printf("Enter a verb: ");
    scanf("%s", verb);

    printf("Enter an animal: ");
    scanf("%s", animal);

    printf("Enter a place: ");
    scanf("%s", place);

    printf("     Football story    \n");
    printf("Yesterday, the legendary football player %s played in the most %s match ever!\n", player, adjective);
    printf("The score was tied %d to %d, and everyone was eating %s in the stands.\n", number, number, food);
    printf("Suddenly, the ball hit %s right on the %s, and the crowd shouted '%s!'\n", player, bodyPart, noise);
    printf("Instead of kicking the ball, %s decided to %s like a %s across the field.\n", player, verb, animal);
    printf("Finally, the referee sent everyone to %s, and that's how the match ended.\n", place);

    return 0;
}
