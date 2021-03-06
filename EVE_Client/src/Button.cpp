#include "Button.h"

Button::Button(sf::Texture & texture, const std::string btnText)
  : Clickable{texture}
{
  Singleton& s = Singleton::getInstance();
  text.setFont(s.font);
  text.setCharacterSize(12);
  text.setString(btnText);
  text.setFillColor(sf::Color::Black);

}

Button::~Button()
{
  // delete text;
}

void Button::draw()
{
  Singleton & s = Singleton::getInstance();
  s.window->draw(*this);
  sf::FloatRect bounds = getGlobalBounds();
  int x = bounds.left + (bounds.width/2);
  int y = bounds.top + (bounds.height/2);
  text.setPosition(x, y);
  s.window->draw(text);
}
