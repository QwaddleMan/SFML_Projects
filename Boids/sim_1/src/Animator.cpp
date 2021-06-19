#include "Animator.h"

Animator::Animator(int w, int h, int r, int c) : sf::Texture()
{
  
  width = w;
  height = h;
  rows = r;
  cols = c;

  sw = width/cols;
  sh = height/rows;
  center.x = sw/2;
  center.y = sh/2;

  size = cols * rows;
    
  rect = new sf::IntRect(0,0,sw,sh);
  pos=0;
  clock.restart();

}

Animator::~Animator()
{
  delete rect;
}

void Animator::animate()
{
  if(clock.getElapsedTime().asSeconds() > .1F)
  {
    pos++;
    if(pos > size-1)
      pos = 0;
    rect->left = (pos % cols)* sw;
    rect->top = (pos/cols)*sh;
    clock.restart();
  }
}

