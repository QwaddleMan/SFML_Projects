#include <SFML/Graphics.hpp>
#include <string>
#ifndef GAME_H
#define GAME_H

class Game: public sf::RenderWindow{

public:
  Game(sf::VideoMode mode, const std::string & title);
  void run();
protected:
  virtual void setup() = 0;
  virtual void update() = 0;
  virtual void visualize() = 0;
};

#endif
