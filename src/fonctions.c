/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** A lot of usefull fonctions
*/
#include "head.h"

int pos_player(utility_t *misc, int pos_p)
{
    refresh();
    for (int x = 0; misc->sokoban_map[x] != '\0'; x++) {
        pos_p++;
        if (misc->sokoban_map[x] == 'P')
            break;
    }
    return (pos_p);
}

char *w_move(utility_t *misc, int key_pressed, int width)
{
    int pos_p = -1;
    pos_p = pos_player(misc, pos_p);

    if (key_pressed == KEY_RIGHT)
        move_right(misc, pos_p);
    if (key_pressed == KEY_LEFT)
        move_left(misc, pos_p);
    if (key_pressed == KEY_UP)
        move_up(misc, pos_p, width);
    if (key_pressed == KEY_DOWN)
        move_down(misc, pos_p, width);
    if (key_pressed == ' ')
        for (int i = 0; misc->sokoban_map[i] != '\0'; i++)
            misc->sokoban_map[i] = misc->original_map[i];
    return (misc->sokoban_map);
}

int dim_map(utility_t *misc, int width)
{
    for (int x = 0; misc->sokoban_map[x] != '\n'; x++)
        width++;
    return (width);
}

void size_scr(utility_t *misc, int width)
{
    (void)width;
    int height = 1;
    char txt[] = "Please resize your window. Not enough space.";
    int size = my_strlen(txt);

    for (int y = 0; misc->sokoban_map[y] != '\0'; y++) {
        if (misc->sokoban_map[y] == '\n')
            height++;
    }
    if (LINES < height || COLS < width) {
            clear();
            attron(A_BLINK);
            mvprintw(LINES / 2, (COLS / 2) - (size / 2), txt);
            attroff(A_BLINK);
            refresh();
    }
}

int display_sokoban_map(utility_t *misc)
{
    int width = 0;
    int key_pressed = 0;

    initscr();
    keypad(stdscr, TRUE);
    width = dim_map(misc, width) + 1;
    while (1) {
        clear();
        mvprintw(0, 0, misc->sokoban_map);
        refresh();
        size_scr(misc, width);
        key_pressed = getch();
        w_move(misc, key_pressed, width);
        check_win(misc);
        check_loose(misc, width);
    }
    endwin();
    return (0);
}