/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Check if you win or loose
*/
#include "head.h"

int count_x(utility_t *misc)
{
    int num_x = 0;

    for (int i = 0; misc->sokoban_map[i] != '\0'; i++) {
        if (misc->sokoban_map[i] == 'X')
            num_x++;
    }
    return (num_x);
}

int count_o(utility_t *misc)
{
    int num_o = 0;

    for (int i = 0; misc->sokoban_map[i] != '\0'; i++) {
        if (misc->sokoban_map[i] == 'O')
            num_o++;
    }
    return (num_o);
}

void check_win(utility_t *misc)
{
    int win = 0;
    int must = count_x(misc);

    for (int index = 0; misc->sokoban_map[index] != '\0'; index++) {
        if (misc->sokoban_map[index] == 'X') {
            if (misc->original_map[index] == 'O')
                win++;
        }
    }
    if (win == must) {
        clear();attron(A_BLINK);printw("\n\nYOU WIN !\n\n\n");
        attroff(A_BLINK);refresh();
        exit (0);
    }
}

void check_loose(utility_t *misc, int width)
{
    int loose = 0;
    int must = count_x(misc);

    for (int i = 0; misc->sokoban_map[i] != '\0'; i++) {
        if (misc->sokoban_map[i] == 'X') {
    if (misc->sokoban_map[i - 1] == '#' && misc->sokoban_map[i - width] == '#')
                loose++;
    if (misc->sokoban_map[i + 1] == '#' && misc->sokoban_map[i - width] == '#')
                loose++;
    if (misc->sokoban_map[i + 1] == '#' && misc->sokoban_map[i + width] == '#')
                loose++;
    if (misc->sokoban_map[i - 1] == '#' && misc->sokoban_map[i + width] == '#')
                loose++;
        }
    }
    if (loose == must) {
        clear();attron(A_BLINK);printw("\n\nGAME OVER !\n\n\n");
        attroff(A_BLINK);refresh();
        exit (1);
    }
}
