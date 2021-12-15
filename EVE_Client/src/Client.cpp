#include "Client.h"

void Client::setup()
{
  shape = new sf::CircleShape(100.f);
  shape->setFillColor(sf::Color::Green);

  btnUp.loadFromFile("resources/button.png", sf::IntRect(0, 0, 200, 200));
  btnDown.loadFromFile("resources/button.png", sf::IntRect(200, 0, 200, 200));
  myButton = new Button(btnUp, "hello");
  myButton->setPressedTexture(btnDown);
  myButton->setPosition(100.f, 100.f);

}

void Client::update()
{
  bool a = myButton->isPressed(*this);
}

void Client::visualize()
{
  draw(*shape);
  // draw(*mySprite);
  draw(*myButton);
  // myButton->draw(*this);
}
