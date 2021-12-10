#include "Game.h"

Game::Game(sf::VideoMode mode, const std::string & title) : sf::RenderWindow{mode, title}
{
}

void Game::run()
{
  setup();
  while (isOpen())
  {

    sf::Event event;
    while (pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
          close();
    }

    update();

    clear();
    visualize();
    display();
  }
}
