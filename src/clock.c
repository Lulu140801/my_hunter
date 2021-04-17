/*
** EPITECH PROJECT, 2020
** clock
** File description:
** opening a window
*/

#include "my.h"

void clock(int nb)
{
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconds;

    while (seconds < 0.2) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / nb;
    }
}