/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header
*/



#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include<SFML/System/Clock.h>
#include <stdlib.h>

sfSprite *display_duck(void);
sfSprite *anime_duck(sfSprite *duck, sfIntRect *rect);
sfSprite *display_background(char *str);
int analyse_events(sfRenderWindow *windows, sfEvent event, int a);
void clock(int nb);
void my_putstr(char const *str);
float move_duck(float x, sfSprite *duck);

#endif /* !MY_H_ */