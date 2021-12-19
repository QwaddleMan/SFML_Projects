#include "ButtonManager.h"

void ButtonManager::update()
{
  for(int i = 0; i < buttons.size(); i++)
  {
    buttons.at(i)->check();
  }
}

void ButtonManager::draw(sf::RenderWindow & window)
{
  for(int i = 0; i < buttons.size(); i++)
  {
    buttons.at(i)->draw(window);
  }
}
