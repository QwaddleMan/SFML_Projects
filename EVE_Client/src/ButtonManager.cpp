#include "ButtonManager.h"

void ButtonManager::update()
{
  for(int i = 0; i < buttons.size(); i++)
  {
    buttons.at(i)->check();
  }
}

void ButtonManager::draw()
{
  for(int i = 0; i < buttons.size(); i++)
  {
    buttons.at(i)->draw();
  }
}
