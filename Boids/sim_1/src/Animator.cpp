#include "Animator.h"

Animator::Animator(const sf::Texture &copy, int w, int h, int r, int c) : sf::Texture(copy)
{

  width = w;
  height = h;
  r = rows;
  c = cols;
  position.x = 0;
  position.y = 0;

  sw = width/cols;
  sh = height/rows;

  size = cols * rows;
  
  rect = new sf::IntRect(position.x, position.y

}

