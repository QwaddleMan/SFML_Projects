#include "Game.h"
#include "Button.h"
#include <cstdio>

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
  sf::CircleShape * shape;
  Button * myButton;

  sf::Texture btnUp;
  sf::Texture btnDown;
};

#endif
