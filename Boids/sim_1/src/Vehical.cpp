#include "Vehical.h"
#include <math.h>

Vehical::Vehical(const sf::Texture &texture , const sf::IntRect &rectangle) :
  sf::Sprite(texture, rectangle)
{
  mass = .5F;
  max_force = 1.0F;
  max_speed = 3.0F;

  velocity.x = 0.0F;
  velocity.y = 0.0F;

  acc.x = 0.0F;
  acc.y = 0.0F;
}

void Vehical::update()
{
  acc.x = .1;

  if(mag(velocity) < max_speed)
    velocity += acc;

  sf::Vector2<float> position = getPosition();
  position += velocity;
  

  position.x + position.x * cos(getRotation());
  position.y + position.y * sin(getRotation());


  setPosition(position);


  if(position.x < 500)
    setRotation(0.0F);
  else
    setRotation(180.0F);

  if(getRotation() > 90 || getRotation() < -90)
    setScale(-0.3F, 0.3F * -1);
  else
    setScale(-0.3F, 0.3F);


}


float Vehical::mag(sf::Vector2<float> vec)
{
  return abs(sqrt((vec.x*vec.x) + (vec.y*vec.y)));
}
