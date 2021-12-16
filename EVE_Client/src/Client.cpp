#include "Client.h"

void Client::setup()
{
  btnUp.loadFromFile("resources/button.png", sf::IntRect(0, 0, 200, 200));
  btnDown.loadFromFile("resources/button.png", sf::IntRect(200, 0, 200, 200));
  myButton = new Button(btnUp, "hello");
  myButton->setPressedTexture(btnDown);
  myButton->setPosition(100.f, 100.f);
  Singleton& s = Singleton::getInstance();
  sf::Font myFont;
  myFont.loadFromFile("resources/fonts/DejaVuSansMono.ttf");
  s.font = myFont;

}

void Client::update()
{
  if(myButton->isReleased(*this))
  {
    printf("%s\n", "hahaha fuck this works");
  }
}

void Client::visualize()
{
  // sf::View view = getDefaultView();
  // setView(view);
  // draw(*text);
  myButton->draw(*this);
}
