/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Check o
*/
#include "head.h"

char *check_o_up(utility_t *misc, int pos_p, int width)
{
    if (misc->sokoban_map[pos_p - width] != '#') {
        if (misc->original_map[pos_p] == 'O')
            misc->sokoban_map[pos_p] = 'O';
    }
    return (misc->sokoban_map);
}

char *check_o_down(utility_t *misc, int pos_p, int width)
{
    if (misc->sokoban_map[pos_p + width] != '#') {
        if (misc->original_map[pos_p] == 'O')
            misc->sokoban_map[pos_p] = 'O';
    }
    return (misc->sokoban_map);
}

char *check_o_right(utility_t *misc, int pos_p)
{
    if (misc->sokoban_map[pos_p + 1] != '#') {
        if (misc->original_map[pos_p] == 'O')
            misc->sokoban_map[pos_p] = 'O';
    }
    return (misc->sokoban_map);
}

char *check_o_left(utility_t *misc, int pos_p)
{
    if (misc->sokoban_map[pos_p - 1] != '#') {
        if (misc->original_map[pos_p] == 'O')
            misc->sokoban_map[pos_p] = 'O';
    }
    return (misc->sokoban_map);
}