/*
** EPITECH PROJECT, 2020
** analyse_events
** File description:
** opening a window
*/

#include "my.h"

int events(int nb, int nb2, int a)
{
    if (nb >= 350 && nb2 >= 210 && nb <= 550 && nb2 <= 265)
        return (1);
    if (nb >= 280 && nb2 >= 330 && nb <= 620 && nb2 <= 375)
        return (2);
    if (nb >= 360 && nb2 >= 445 && nb <= 545 && nb2 <= 500)
        return (3);
    return (a);
}

int analyse_3(sfRenderWindow *windows, sfEvent event, int a)
{
    while (sfRenderWindow_pollEvent(windows, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            sfMouseButtonEvent envent = event.mouseButton;
            int nb = envent.x;
            int nb2 = envent.y;
            if (nb >= 95 && nb2 >= 40 && nb <= 205 && nb2 <= 70)
                return (0);
        } else if (event.type == sfEvtClosed)
            sfRenderWindow_close(windows);
        }
    return (a);
}

int analyse_2(sfRenderWindow *windows, sfEvent event, int a)
{
    while (sfRenderWindow_pollEvent(windows, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            sfMouseButtonEvent envent = event.mouseButton;
            printf("Mouse x = %d y = %d\n", envent.x, envent.y);
        } else if (event.type == sfEvtClosed)
            sfRenderWindow_close(windows);
        }
    return (a);
}

int analyse_1(sfRenderWindow *windows, sfEvent event, int a)
{
    while (sfRenderWindow_pollEvent(windows, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            sfMouseButtonEvent envent = event.mouseButton;
            int nb = envent.x;
            int nb2 = envent.y;
            a = events(nb, nb2, a);
        } else if (event.type == sfEvtClosed)
            sfRenderWindow_close(windows);
        }
    return (a);
}

int analyse_events(sfRenderWindow *windows, sfEvent event, int a)
{
    if (a == 0) {
        a = analyse_1(windows, event, a);
    } else if (a == 1) {
        a = analyse_2(windows, event, a);
    }
    if (a == 2) {
       a = analyse_3(windows, event, a);
    }
    return (a);
}