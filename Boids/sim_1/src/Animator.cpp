#include "Animator.h"

Animator::Animator(const sf::Texture &copy, int w, int h, int r, int c) : sf::Texture(copy)
{

  width = w;
  height = h;
  r = rows;
  c = cols;

  sw = width/cols;
  sh = height/rows;

  size = cols * rows;
    
  rect = new sf::IntRect(0,0,sw,sh);

}

void Animator::animate()
{
  pos++;
  rect.left = (pos % cols)* sw;
  rect.top = (pos/cols)*sh;

}

