#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_rounds = 5;
    int i = 0;
    int goal = rand(); // [0, RAND_MAX]
    goal = goal % 20;  // [0, 19]
    goal++;            // [1, 20]
    int selection;

    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to "
           "win this game!\n");

    do
    {
        printf("Pls enter a integer number in [1, 20]\n");
        scanf("%d", &selection);

        if ((selection > 20) || (selection < 1))
        {
            printf("You did not enter a valid number!\nPlease try again! You "
                   "have %d guesses left!\n\n",
                   n_rounds - (i + 1));
            i++;
            continue;
        }

        if (selection == goal)
        {
            printf("Correct!\n");
            break;
        }
        else if (selection < goal)
        {
            printf("Not correct, the right number is greater than "
                   "yours!\nPlease try again! You have %d guesses left!\n\n",
                   n_rounds - (i + 1));
        }
        else if (selection > goal)
        {
            printf("Not correct, the right number is less than yours!\nPlease "
                   "try again! You have %d guesses left!\n\n",
                   n_rounds - (i + 1));
        }

        i++;

    } while (i < n_rounds);

    return 0;
}
