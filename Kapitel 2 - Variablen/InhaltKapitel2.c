#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    unsigned char alter;
    unsigned int tage;
    unsigned int stunden;
    unsigned int minuten;
    unsigned int sekunden;

    printf("Bitte gebe dein Alter ein!\n");
    scanf("%d", &alter);

    tage = alter * 365;
    stunden = tage * 24;
    minuten = stunden * 60;
    sekunden = minuten * 60;

    printf("Du lebst bereits %d viele Tage (Schaltjahre ausgenommen)!\n", tage);
    printf("Du lebst bereits %d viele Stunden (Schaltjahre ausgenommen)!\n", stunden);
    printf("Du lebst bereits %d viele Minuten (Schaltjahre ausgenommen)!\n", minuten);
    printf("Du lebst bereits %d viele Sekunden (Schaltjahre ausgenommen)!\n", sekunden);

    return 0;
}