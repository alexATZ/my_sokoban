/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Error handling
*/
#include "head.h"

int error_test(utility_t *misc)
{
    if (misc->sokoban_map == NULL) {
            write(2, "Error, buffer is null\nFormat: ./my_sokoban [map]\n", 50);
            exit (84);
        }

    for (int y = 0; misc->sokoban_map[y] != '\0'; y++) {
        if (misc->sokoban_map[y] != '#'
            && misc->sokoban_map[y] != 'P' && misc->sokoban_map[y] != 'O'
            && misc->sokoban_map[y] != 'X' && misc->sokoban_map[y] != ' '
            && misc->sokoban_map[y] != '\n' && misc->sokoban_map[y] != '\0') {
    write(2, "Bad characters, invalid map\nFormat: ./my_sokoban [map]\n", 56);
            exit(84);
        }
    }
    if (misc->sokoban_map[0] == '\0') {
    write(2, "Empty map, invalid file\nFormat: ./my_sokoban [map]\n", 52);
            exit (84);
        }
    return (0);
}

int equal_test(utility_t *misc)
{
    int x = count_x(misc);
    int o = count_o(misc);

    if (x != o) {
    write(2, "Not enough items.\nFormat: ./my_sokoban [map]\n", 46);
        exit (84);
    }
    return (0);
}

int init_test(int ac, char **av)
{
    (void) av;
    if (ac != 2) {
        write(2, "Format: ./my_sokoban [map]\n", 28);
        exit(84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        write(2, "USAGE\n     ./my_sokoban map\nDESCRIPTION\n     map  file representing the warehouse map, containing '#' for walls,\n          'P' for the player, 'X' for the boxes and 'O' for storage locations.\n", 193);
        exit (84);
    }
    return (0);
}

void memory(utility_t *misc)
{
    free (misc->sokoban_map);
    free (misc->original_map);
}