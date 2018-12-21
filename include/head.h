/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Header of my_sokoban
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <termios.h>
#include "structures.h"

utility_t util(char **av);

int error_test(utility_t *misc);
int my_strlen(char *str);
int init_test(int ac, char **av);
int equal_test(utility_t *misc);
int display_sokoban_map(utility_t *misc);
int pos_player(utility_t *misc, int pos_p);
int dim_map(utility_t *misc, int width);
int count_o(utility_t *misc);
int count_x(utility_t *misc);
char *copy_sokoban_map(char *file);
char *move_up(utility_t *misc, int pos_p, int width);
char *move_down(utility_t *misc, int pos_p, int width);
char *move_right(utility_t *misc, int pos_p);
char *move_left(utility_t *misc, int pos_p);
char *w_move(utility_t *misc, int key_pressed, int width);
char *check_o_up(utility_t *misc, int pos_p, int width);
char *check_o_down(utility_t *misc, int pos_p, int width);
char *check_o_right(utility_t *misc, int pos_p);
char *check_o_left(utility_t *misc, int pos_p);
void size_scr(utility_t *misc, int width);
void memory(utility_t *misc);
void check_win(utility_t *misc);
void check_loose(utility_t *misc, int width);

