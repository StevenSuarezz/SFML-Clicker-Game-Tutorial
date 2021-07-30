#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Enemy.h"
#include "Texts.h"

#ifndef GAMEWORLD_H
#define GAMEWORLD_H

class GameWorld
{
public:
    GameWorld();

    bool performSetup();

    bool runGame();
    
private:
    bool isGameOver;

    int damage;

    sf::Texture backgroundTexture;

    sf::Sprite background;

    sf::Time time;

    Enemy enemy;

    Texts texts;

    bool loadBackground();
};

#endif