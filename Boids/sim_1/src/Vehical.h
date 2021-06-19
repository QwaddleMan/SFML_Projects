#ifndef VEHICAL_H
#define VEHICAL_H
#include <SFML/Graphics.hpp>

class Vehical : public sf::Sprite
{
  public:
    Vehical(const sf::Texture &texture , const sf::IntRect &rectangle);
    void update();
  private:
    float mass;
    float max_force;
    float max_speed;
    sf::Vector2<float> acc;
    sf::Vector2<float> velocity;
    sf::Vector2<float> direction;

};


#endif
