#include <stdio.h>
#include <math.h>

int main(void) {
    int sekunder;

    // Starter med at spørge brugeren hvor mange sekunder der skal omregnes
    printf("Hvor mange sekunder vil du gerne omregne?");
    scanf("%d", &sekunder);

    // Der er 604800 sekunder i en uge
    int uger = sekunder / 604800;

    // % (modolu) giver de sekunder, der er tilbage i rest efter heltalsdivision
    int uge_rest = sekunder % 604800;

    // Der er 86400 sekunder i et døgn, så vi beregner antal hele dage ud fra resten
    int dage = uge_rest / 86400;

    //Så finder jeg de sekunder, der er tilbage efter dagene
    int dage_rest = uge_rest % 86400;

    // Der er 3600 sekunder i en time så:
    int timer = dage_rest / 3600;

    // Finder resten efter timerne
    int timer_rest = dage_rest % 3600;

    // Der er 60 sekunder i et minut
    int minutter = timer_rest / 60;

    // Resten er det endelige antal sekunder
    int minutter_rest = timer_rest % 60;

    //Til sidst printer jeg så resultatet:
    printf("%d uger %d dage %d timer %d minutter %d sekunder\n", uger, dage, timer, minutter, minutter_rest);


}
