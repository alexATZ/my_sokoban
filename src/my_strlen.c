/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** Found the length of a string
*/

#include "head.h"

int my_strlen(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;
    return (len);
}