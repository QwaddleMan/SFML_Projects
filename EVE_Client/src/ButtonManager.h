#include "Button.h"
#include <vector>
#include <memory>

#ifndef BUTTONMANAGER_H
#define BUTTONMANAGER_H

class ButtonManager
{
  public:
    void update();
    void draw(sf::RenderWindow & window);
  public:
    std::vector< std::shared_ptr<Button> > buttons;
};

#endif
