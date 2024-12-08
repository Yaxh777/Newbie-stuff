#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int upp_check(char[20]);
int upp_check(char pass[20])
{
    int i = 0;

    while (pass[i] != '\0')
    {
        if (isupper(pass[i]))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int digit_check(char[20]);
int digit_check(char pass[20])
{
    int i = 0;

    while (pass[i] != '\0')
    {
        if (isdigit(pass[i]))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int special_check(char[20]);
int special_check(char pass[20])
{
    int i = 0;

    while (pass[i] != '\0')
    {
        if (ispunct(pass[i]))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char ch, pass[20];
    printf("Enter Password(Max 20)\n");
    int i = 0;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            pass[i] = '\0';
            if (upp_check(pass) == 0)
            {
                printf("\nContains Upper case\n");
            }
            else
                printf("\nPassword must contain atleat one upper case character\n");
            if (digit_check(pass) == 0)
            {
                printf("\nContains digit\n");
            }
            else
                printf("\nPassword must contain atleast one digit\n");
            if (special_check(pass) == 0)
            {
                printf("\nCountains special character\n");
            }
            else
                printf("\nPassword must contain atleast one spacial charecter( !, @, #, $, ^, &, *, (, ))\n");
            if (upp_check(pass) == 0 && digit_check(pass) == 0 && special_check(pass) == 0)
            {
                break;
            }
            i = 0;
        }
        else
        {
            pass[i] = ch;
            printf("*");
            i++;
        }
    }
    FILE *fptr;
    fptr = fopen("C:\\Users\\Yash Verma\\Documents\\pass.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        fprintf(fptr, "%s", pass);
        printf("Password successfully saved\n");
    }
    fclose(fptr);
    return 0;
}