#include <SFML/Graphics.hpp>

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
  static Singleton& getInstance();
private:
  Singleton() {}
public:
  Singleton(Singleton const&) = delete;
  void operator=(Singleton const&) = delete;

public:
  sf::Font font;
};

#endif
