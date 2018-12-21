/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Main file
*/
#include "head.h"

int main(int ac, char **av)
{
    init_test(ac, av);
    utility_t misc = util(av);

    (void)misc;
    misc.sokoban_map = copy_sokoban_map(av[1]);
    misc.original_map = copy_sokoban_map(av[1]);
    equal_test(&misc);
    error_test(&misc);
    display_sokoban_map(&misc);
    memory(&misc);

    return (0);
}