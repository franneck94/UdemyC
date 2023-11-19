#include <stdio.h>

typedef struct
{
    char *name;
} s_user_data;

typedef struct
{
    int ID;
    s_user_data *user_data;
} s_account;

int main()
{
    s_user_data user_data_jan = {"Jan Schaffranek"};
    s_account account_jan = {2402, &user_data_jan};

    s_account *account_jan_p = &account_jan;

    printf("User id %d with name %s\n",
           account_jan.ID,
           account_jan.user_data->name);

    printf("User id %d with name %s\n",
           account_jan_p->ID,
           account_jan_p->user_data->name);

    return 0;
}
