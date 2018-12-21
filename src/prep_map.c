/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Take the sokoban map
*/
#include "head.h"

char *copy_sokoban_map(char *file)
{
    int len = 0;
    int fd;
    char *sokoban_map = NULL;
    struct stat buffer;

    stat(file, &buffer);
    fd = open(file, O_RDONLY);

    if (fd == -1) {
        write(2, "No such file or directory\n", 27);
        write(2, "Format: ./my_sokoban [file]\n", 29);
        exit (84);
    }
    len = buffer.st_size;
    sokoban_map = malloc(sizeof(char) * (len + 1));
    read(fd, sokoban_map, len);
    close(fd);

    return (sokoban_map);
}