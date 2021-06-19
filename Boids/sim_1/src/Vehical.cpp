#include "Vehical.h"

Vehical::Vehical(const sf::Texture &texture , const sf::IntRect &rectangle) :
  sf::Sprite(texture, rectangle)
{
  mass = .5F;
  max_force = 1.0F;
  max_speed = 10.0F;

  velocity.x = 0.0F;
  velocity.y = 0.0F;

  direction.x = 0.0F;
  direction.y = 0.0F;

  acc.x = 0.0F;
  acc.y = 0.0F;
}

void Vehical::update()
{
  velocity += acc;
  sf::Vector2<float> position = getPosition();
  position += velocity;
}



