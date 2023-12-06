#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>


void signup();
void login();
void delete_account();

struct account{
    char username[30];
    char pass1[20];
};

void divider()
{
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
}

void takepassword(char pass[20])
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == 8)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if (ch == 9 || ch == 32)
        {
            continue;
        }
        else
        {
            pass[i++] = ch;
            printf("*");
        }
    }
}



void signup()
{
    struct account u;
    system("cls");
    char pass2[20];
    printf("CREATING NEW ACCOUNT \n");
    divider();
    printf("Enter your username : ");
    scanf("%s", u.username);
    fflush(stdin);
    printf("Enter password : ");
    takepassword(u.pass1);

conf_pass:
    printf("\nConfirm password : ");
    scanf("%s", pass2);

    if (strcmp(u.pass1, pass2))
    {
        printf("INCORRECT PASSWORD \n\n");
        goto conf_pass;
    }
    else
    {
        printf("ACCOUNT CREATED SUCCESSFULLY\n\n");
        getch();

        FILE *fp = fopen("coffeaccnt.txt", "w");
        fwrite(&u, sizeof(struct account), 1, fp);
        fclose(fp);
    }
}



void login()
{
    system("cls");
    char user[30], log_pass[20];

    struct account u;
    FILE *fp = fopen("coffeaccnt.txt", "r");
    fread(&u, sizeof(struct account), 1, fp);

name:
    printf("enter Username : ");
    scanf("%s", user);
    if (strcmp(u.username, user))
    {
        printf("\nPLEASE ENTER CORRECT USERNAME\n ");
        goto name;
    }

    else
    {
    logpass:
        printf("Enter password : ");
        takepassword(log_pass);
        if (strcmp(u.pass1, log_pass))
        {
            printf("\nINCORRET PASSWORD \n");
            goto logpass;
        }
        else
        {
            system("cls");
          // printf("\nWELCOME %s\n", u.first_name);
            divider();

            printf("\nYour Details \n");
            divider();
            printf("\nUsername     : %s\n", u.username);
            printf("Password     : %s\n", u.pass1);
        }
        getch();
    }
    fclose(fp);
}




void delete_account()
{

    FILE *fp = fopen("coffeaccnt.txt", "r");

    printf("ARE YOU SURE[Y/N] : ");
    char ch = getche();
    if (ch == 'Y' || ch == 'y')
    {
        fp = fopen("coffeaccnt.txt", "w");
        fprintf(fp, " ");
        printf("\nACCOUNT DELETED SUCCESSFULLY\n");
        getch();
    }

    else if (ch == 'N' || ch == 'n')
    {
        printf("\nACCOUNT DELETION STOPPED\n");
        getch();
    }
}







