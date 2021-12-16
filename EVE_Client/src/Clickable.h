#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
// #include <SFML/Mouse.hpp>
// #include <SFML/Vector2.hpp>
#include <stdio.h>

#ifndef CLICKABLE_H
#define CLICKABLE_H

class Clickable : public sf::Sprite
{

public:
    Clickable(sf::Texture & mainTex);
    ~Clickable();
    void setPressedTexture(sf::Texture & btnUpTex);
    bool isPressed(const sf::RenderWindow & window);
    bool isReleased(const sf::RenderWindow & window);

protected:
    bool containsCursor(sf::Vector2i mpos);

private:
  sf::Texture * txtPressed;
  sf::Texture * txtReleased;
  bool pressed;


};

#endif
