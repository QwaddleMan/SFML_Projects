#include "Game.h"
#include "Button.h"
#include "Singleton.h"
#include <stdio.h>

#ifndef CLIENT_H
#define CLIENT_H

class Client : public Game{

public:
  using Game::Game;
protected:
  void setup();
  void update();
  void visualize();
private:

  Button * myButton;
  sf::Texture btnUp;
  sf::Texture btnDown;
  sf::Text * text;
};

#endif
