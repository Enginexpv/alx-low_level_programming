#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int pass[100];
    int i, sum, n;
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?:,{}[]";

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = valid_chars[rand() % 77];
        sum += pass[i];
        putchar(pass[i]);

        if (sum >= 2772)
        {
            n = 2772 - (sum - pass[i]);
            pass[i] = n;
            putchar(n);
            break;
        }
    }

    return (0);
}
