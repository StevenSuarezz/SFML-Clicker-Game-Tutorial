#include "Texts.h"
#include <iostream>

Texts::Texts()
{
    endGameWonText.setString("You won!");
    endGameSpaceText.setString("Press SPACE to play again.");
}

void Texts::setUpText(sf::Text* text, sf::Vector2f position)
{
    text->setFont(font);
    text->setCharacterSize(50);
    text->setFillColor(sf::Color::White);
    text->setStyle(sf::Text::Bold);
    text->setPosition(position);
}

bool Texts::performSetup()
{
    if (!font.loadFromFile("assets/Arial.ttf"))
    {
        std::cout << "Could not load font file!" << std::endl;
        return false;
    }

    setUpText(&energyText, sf::Vector2f(650.f, 800.f));
    setUpText(&timeText, sf::Vector2f(650.f, 900.f));
    setUpText(&endGameWonText, sf::Vector2f(400.f, 600.f));
    setUpText(&endGameTimeText, sf::Vector2f(400.f, 700.f));
    setUpText(&endGameSpaceText, sf::Vector2f(200.f, 800.f));

    return true;
}

void Texts::drawInGameText(sf::RenderWindow* window, sf::Time time, int energy)
{
    energyText.setString("Energy: " + std::to_string(energy));
    timeText.setString("Time: " + std::to_string((int)time.asSeconds()) + "s");
    window->draw(energyText);
    window->draw(timeText);
}

void Texts::drawEndGameText(sf::RenderWindow* window, sf::Time time)
{
    endGameTimeText.setString("Energy: " + std::to_string((int)time.asSeconds()) + "s");
    window->draw(endGameWonText);
    window->draw(endGameTimeText);
    window->draw(endGameSpaceText);
}