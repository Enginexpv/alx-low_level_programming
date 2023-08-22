#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a random password
 *
 * Return: Always 0.
 */
int main(void)
{
    int password_length = 12;
    char password[13];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    int charset_size = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < password_length; i++)
    {
        int index = rand() % charset_size;
        password[i] = charset[index];
    }

    password[password_length] = '\0';

    printf("Generated Password: %s\n", password);

    return (0);
}

