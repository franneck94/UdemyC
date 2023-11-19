#include <stdbool.h>
#include <stdio.h>

int main()
{
    int age_sarah = 28;
    int age_jan = 28;
    int age_marc = 28;

    bool is_jan_the_youngest = (age_jan < age_marc) && (age_jan < age_sarah);
    bool is_marc_the_youngest = (age_marc < age_jan) && (age_marc < age_sarah);
    bool is_sarah_the_youngest = (age_sarah < age_jan) && (age_sarah < age_marc);

    if (is_jan_the_youngest)
    {
        printf("Jan is the youngest person in the room.\n");
    }
    else if (is_marc_the_youngest)
    {
        printf("Marc is the youngest person in the room.\n");
    }
    else if (is_sarah_the_youngest)
    {
        printf("Sarah is the youngest person in the room.\n");
    }
    else
    {
        printf("All have the same age.\n");
    }

    return 0;
}
