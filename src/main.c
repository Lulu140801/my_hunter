/*
** EPITECH PROJECT, 2020
** main
** File description:
** opening a window
*/

#include "my.h"

int display_3(sfRenderWindow *windows, int a, sfEvent event)
{
    sfSprite *background_option = display_background("image/image3.png");

    sfRenderWindow_display(windows);
    sfRenderWindow_drawSprite(windows, background_option, NULL);
    a = analyse_events(windows, event, a);
    sfSprite_destroy(background_option);
    return (a);
}

void display_2(sfRenderWindow *windows, int a, sfEvent event, sfIntRect rect)
{
    sfSprite *background_game = display_background("image/image.png");

    sfRenderWindow_display(windows);
    sfRenderWindow_drawSprite(windows, background_game, NULL);
    a = analyse_events(windows, event, a);
    sfSprite_destroy(background_game);
}

int display_1(sfRenderWindow *windows, int a, sfEvent event)
{
    sfSprite *background_menu = display_background("image/image2.png");

    sfRenderWindow_display(windows);
    sfRenderWindow_drawSprite(windows, background_menu, NULL);
    a = analyse_events(windows, event, a);
    sfSprite_destroy(background_menu);
    return (a);
}

void display(sfRenderWindow *windows, sfIntRect rect, sfEvent event)
{
    sfSprite *duck = display_duck();
    float x = 0;

    for (int n = 90000, a = 0; sfRenderWindow_isOpen(windows);) {
        if (a == 0)
            a = display_1(windows, a, event);
        if (a == 1) {
            display_2(windows, a, event, rect);
            sfRenderWindow_drawSprite(windows, duck, NULL);
            duck = anime_duck(duck, &rect);
            x = move_duck(x, duck);
            clock(n);
        } else if (a == 2)
            display_3(windows, a, event);
        if (a == 3)
            sfRenderWindow_close(windows);
        sfRenderWindow_setFramerateLimit(windows, 30);
    }
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("The goal of the game is to kill the most pigeon without ");
        my_putstr("dying.\nTo reload right click and to dash left click.\n");
        my_putstr("The score is written at the top left.\n");
        my_putstr("Creator of the game the talented.\n");
        return (0);
    }
    sfRenderWindow  *windows;
    sfEvent event;
    sfVideoMode video = {900, 700, 32};
    sfIntRect rect =  {0, 0, 110, 110};

    windows = sfRenderWindow_create(video, "Hunter", sfDefaultStyle, NULL);
    display(windows, rect, event);
    sfRenderWindow_destroy(windows);
    return (0);
}