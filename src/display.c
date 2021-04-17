/*
** EPITECH PROJECT, 2020
** display_background
** File description:
** opening a window
*/

#include "my.h"

sfSprite *display_duck(void)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();

    texture = sfTexture_createFromFile("image/d.png", &(sfIntRect) {0, 0, 110, 110} );
    sfSprite_setTexture(sprite, texture, sfFalse);
    free(texture);
    return (sprite);
}

sfSprite *display_background(char *str)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();

    texture = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(sprite, texture, sfFalse);
    free(texture);
    return (sprite);
}