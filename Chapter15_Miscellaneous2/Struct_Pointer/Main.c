#include <stdio.h>

// 48byte
typedef struct
{
    char* name;
} s_user_data;

// s_user_data als stack variable -> lokale Kopie der 48byte
// s_user_data als pointer -> wird nur der Pointer erstellt, der benötigt 4 oder 8byte
// s_account.user_data->name
typedef struct
{
    int ID;
    s_user_data* user_data;
} s_account;

int main()
{
    s_user_data user_data_jan = { "Jan Schaffranek" };
    s_account account_jan = { 2402, &user_data_jan };

    s_user_data user_data_peter = { "Peter Polkow" };
    s_account account_peter = { .user_data=&user_data_peter, .ID=1337 };

    printf("User id %d with name %s\n", account_jan.ID, account_jan.user_data->name);
    printf("User id %d with name %s\n", account_peter.ID, account_peter.user_data->name);

    return 0;
}