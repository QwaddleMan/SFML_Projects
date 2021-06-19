#ifndef ANIMATOR_H
#define ANIMATOR_H
#include <SFML/Graphics.hpp>

class Animator : public sf::Texture
{

  public:
    Animator(const sf::Texture &copy, int w, int h, int r, int c);
    void animate();
  private:
    sf::IntRect * rect;
    int width, height;
    int rows, cols;
    int sw, sh;
    int pos;
    int size;

};


#endif
