#ifndef ANIMATOR_H
#define ANIMATOR_H
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Animator : public sf::Texture
{

  public:
    Animator(int w, int h, int r, int c);
    ~Animator();
    void animate();
  private:
  public:
    sf::IntRect * rect;
    sf::Vector2<float> center;

  protected:
    int width, height;
    int rows, cols;
    int sw, sh;
    int pos;
    int size;
    sf::Clock clock;

};


#endif
