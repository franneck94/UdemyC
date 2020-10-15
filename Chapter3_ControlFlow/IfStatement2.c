#include <stdio.h>

int main()
{
    int age_jan = 16;
    int age_marc = 16;
    int age_sarah = 16;

    // &&: Conjuction (Konjunktion), logical AND operator
    // ||: Disjunction (Disjunktion), logical OR operator
    // !: Negation (Negation), logical NOT operator

    // Who is the youngest person?
    if ((age_jan < age_marc) && (age_jan < age_sarah))
    {
        printf("Jan is the youngest person!");
    }
    else if ((age_marc < age_jan) && (age_marc < age_sarah))
    {
        printf("Marc is the youngest person!");
    }
    else if ((age_sarah < age_jan) && (age_sarah < age_marc))
    {
        printf("Sarah is the youngest person!");
    }
    else
    {
        if ((age_jan == age_sarah) && (age_jan == age_marc))
        {
            printf("All of the 3 persons have the same age!");
        }
        else
        {
            printf("There are 2 persons with the same age!");
        }
    }

    return 0;
}