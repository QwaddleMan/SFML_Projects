#include "Game.h"
#include "ButtonManager.h"
#include "Button.h"
#include "Singleton.h"
#include <sigc++/sigc++.h>
#include <stdio.h>
#include <memory>

#ifndef CLIENT_H
#define CLIENT_H

class Client : public Game{

public:
  using Game::Game;
  static void btn1Pressed();
  static void btn1Released();
  static void btn1Hover();
  static void btn1Off();
protected:
  void setup();
  void update();
  void visualize();
private:
  // Button * b;
  ButtonManager btnManage;
  sf::Texture btnUp;
  sf::Texture btnDown;
  sf::Text * text;
};

#endif
