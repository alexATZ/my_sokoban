/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Init the struct file
*/
#include "head.h"

utility_t util(char **av)
{
    utility_t misc;

    misc.sokoban_map = copy_sokoban_map(av[1]);
    misc.original_map = copy_sokoban_map(av[1]);

    return (misc);
}