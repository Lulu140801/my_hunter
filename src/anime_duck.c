/*
** EPITECH PROJECT, 2020
** anime_duck
** File description:
** opening a window
*/

#include "my.h"

sfSprite *anime_duck(sfSprite *duck, sfIntRect *rect)
{
    int *nb = &rect -> left;

    if (*nb + 110 == 330)
        *nb = 0;
    else
        *nb =  *nb + 110;
    sfTexture *texture;
    texture = sfTexture_createFromFile("image/d.png", rect);
    sfSprite_setTexture(duck, texture, sfFalse);
    free(texture);
    return (duck);
}

float move_duck(float x, sfSprite *duck)
{
    if (sfSprite_getPosition(duck).x < 910) {
        sfSprite_move(duck, (sfVector2f) {15, 0});
    } else {
        int i = rand() % 400;
        sfSprite_setPosition(duck, (sfVector2f) {-50, i});
    }
    return (x);
}