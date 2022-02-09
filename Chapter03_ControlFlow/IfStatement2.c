#include <stdio.h>

int main()
{
    int age_jan = 26;
    int age_marc = 26;
    int age_sarah = 30;

    // &&: Conjunction, logical AND operator
    // ||: Disjunction, logical OR operator
    // !: Negation, logical NOT operator

    if ((age_jan < age_marc) && (age_jan < age_sarah))
    {
        printf("Jan is the youngest!");
    }
    else if ((age_marc < age_jan) && (age_marc < age_sarah))
    {
        printf("Marc is the youngest!");
    }
    else if ((age_sarah < age_marc) && (age_sarah < age_jan))
    {
        printf("Sarah is the youngest!");
    }
    else
    {
        printf("At least two persons have the same age!");
    }

    return 0;
}
