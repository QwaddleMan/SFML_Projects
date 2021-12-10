#include <SFML/Graphics.hpp>

#ifndef BUTTON_H
#define BUTTON_H

class Button : public sf::Sprite
{

public:
  Button(sf::Texture & btnUpTex, sf::Texture & btnDownTex, const std::string text);
  void draw(sf::RenderWindow & window);
  void update();
  bool isClicked();

private:
  sf::Texture * btnUp;
  sf::Texture * btnDown;
  sf::Text * text;

};

#endif
