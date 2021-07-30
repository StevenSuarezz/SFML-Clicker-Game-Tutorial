#include <SFML/Graphics.hpp>

#ifndef TEXTS_H
#define TEXTS_H

class Texts
{
public:
    sf::Text energyText;
    sf::Text timeText;
    sf::Text endGameWonText;
    sf::Text endGameTimeText;
    sf::Text endGameSpaceText;

    Texts();

    bool performSetup();

    void drawInGameText(sf::RenderWindow*, sf::Time, int);
    
    void drawEndGameText(sf::RenderWindow*, sf::Time);

private:
    sf::Font font;

    void setUpText(sf::Text*, sf::Vector2f);
};

#endif