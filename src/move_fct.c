/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Move with the key
*/
#include "head.h"

char *move_up(utility_t *misc, int pos_p, int width)
{
    if (misc->sokoban_map[pos_p - width] == 'X') {
        if (misc->sokoban_map[pos_p - (width * 2)] != '#'
        && misc->sokoban_map[pos_p - (width * 2)] != 'X') {
            misc->sokoban_map[pos_p] = ' ';
            misc->sokoban_map[pos_p - width] = 'P';
            misc->sokoban_map[pos_p - (width * 2)] = 'X';
        }
    }
    else if (misc->sokoban_map[pos_p - width] != '#') {
        misc->sokoban_map[pos_p] = ' ';
        misc->sokoban_map[pos_p - width] = 'P';
    }
    if (misc->sokoban_map[pos_p - width] != 'X')
        check_o_up(misc, pos_p, width);
    return (misc->sokoban_map);
}

char *move_down(utility_t *misc, int pos_p, int width)
{
    if (misc->sokoban_map[pos_p + width] == 'X') {
        if (misc->sokoban_map[pos_p + (width * 2)] != '#'
        && misc->sokoban_map[pos_p + (width * 2)] != 'X') {
            misc->sokoban_map[pos_p] = ' ';
            misc->sokoban_map[pos_p + width] = 'P';
            misc->sokoban_map[pos_p + (width * 2)] = 'X';
        }
    }
    else if (misc->sokoban_map[pos_p + width] != '#') {
        misc->sokoban_map[pos_p] = ' ';
        misc->sokoban_map[pos_p + width] = 'P';
    }
    if (misc->sokoban_map[pos_p + width] != 'X')
        check_o_down(misc, pos_p, width);
    return (misc->sokoban_map);
}

char *move_right(utility_t *misc, int pos_p)
{
    if (misc->sokoban_map[pos_p + 1] == 'X') {
        if (misc->sokoban_map[pos_p + 2] != '#'
        && misc->sokoban_map[pos_p + 2] != 'X') {
            misc->sokoban_map[pos_p] = ' ';
            misc->sokoban_map[pos_p + 1] = 'P';
            misc->sokoban_map[pos_p + 2] = 'X';
        }
    }
    else if (misc->sokoban_map[pos_p + 1] != '#') {
        misc->sokoban_map[pos_p] = ' ';
        misc->sokoban_map[pos_p + 1] = 'P';
    }
    if (misc->sokoban_map[pos_p + 1] != 'X')
        check_o_right(misc, pos_p);
    return (misc->sokoban_map);
}

char *move_left(utility_t *misc, int pos_p)
{
    if (misc->sokoban_map[pos_p - 1] == 'X') {
        if (misc->sokoban_map[pos_p - 2] != '#'
        && misc->sokoban_map[pos_p - 2] != 'X') {
            misc->sokoban_map[pos_p] = ' ';
            misc->sokoban_map[pos_p - 1] = 'P';
            misc->sokoban_map[pos_p - 2] = 'X';
        }
    }
    else if (misc->sokoban_map[pos_p - 1] != '#') {
        misc->sokoban_map[pos_p] = ' ';
        misc->sokoban_map[pos_p - 1] = 'P';
    }
    if (misc->sokoban_map[pos_p - 1] != 'X')
        check_o_left(misc, pos_p);
    return (misc->sokoban_map);
}