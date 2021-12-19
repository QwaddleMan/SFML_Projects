#include "Button.h"

Clickable::Clickable(sf::Texture & mainTex)
{
  txtReleased = &mainTex;
  setTexture(*txtReleased);
  txtPressed = nullptr;
  buttonDown = false;
}

Clickable::~Clickable()
{
}

void Clickable::setPressedTexture(sf::Texture & pressedTex)
{
  txtPressed = &pressedTex;
}

bool Clickable::containsCursor(sf::Vector2i mpos)
{
  sf::FloatRect rect = getGlobalBounds();

  if((mpos.x >= rect.left && mpos.x <= rect.left + rect.width) &&
      (mpos.y >= rect.top && mpos.y <= rect.top+rect.height))
  {
    hover_signal.emit();
    return true;
  }
  return false;
}

void Clickable::check()
{
  Singleton& s = Singleton::getInstance();
  sf::Vector2i mPos = sf::Mouse::getPosition(*s.window);
  sf::Vector2f mPosCon = s.window->mapPixelToCoords(mPos);
  if(containsCursor(mPos))
  {
    wasHovering = true;
    if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
    {
      if(txtPressed != nullptr)
        setTexture(*txtPressed);
      pressed_signal.emit();
      buttonDown = true;
    }
    else
    {
      if(buttonDown)
      {
          released_signal.emit();
          buttonDown = false;
      }
      setTexture(*txtReleased);
    }
  }
  else
  {
    if(wasHovering)
    {
      wasHovering = false;
      mouseout_signal.emit();
    }
  }
}
