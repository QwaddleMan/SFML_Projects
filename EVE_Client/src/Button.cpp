#include "Button.h"

Button::Button(sf::Texture & btnUpTex, sf::Texture & btnDownTex,
      const std::string text)
{
  btnUp = &btnUpTex;
  btnDown = &btnDownTex;
  setTexture(*btnUp);
}

void Button::draw(sf::RenderWindow & window)
{
  window.draw(*this);
}

void update();
bool isClicked();
