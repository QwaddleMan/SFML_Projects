#include "Button.h"

Clickable::Clickable(sf::Texture & mainTex)
{
  txtReleased = &mainTex;
  setTexture(*txtReleased);
  txtPressed = nullptr;
}

Clickable::~Clickable()
{
  delete txtPressed;
  delete txtReleased;
  printf("oogy boogy");
}

void Clickable::setPressedTexture(sf::Texture & pressedTex)
{
  txtPressed = &pressedTex;
}

// void Button::draw(sf::RenderWindow & window)
// {
//   window.draw(*this);
// }

bool Clickable::containsCursor(sf::Vector2i mpos)
{
  // sf::Vector2f position = getPosition();
  sf::FloatRect rect = getGlobalBounds();
  if((mpos.x >= rect.left && mpos.x <= rect.left + rect.width) &&
      (mpos.y >= rect.top && mpos.y <= rect.top+rect.height))
  {
    return true;
  }
  return false;
}

bool Clickable::isPressed(const sf::Window & window)
{
  sf::Vector2i mPos = sf::Mouse::getPosition(window);
  if(containsCursor(mPos) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
  {
    setTexture(*txtPressed);
    return true;
  }
  setTexture(*txtReleased);
  return false;
}
