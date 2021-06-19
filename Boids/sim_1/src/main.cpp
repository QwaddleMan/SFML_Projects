#include <SFML/Graphics.hpp>
#include "Vehical.h"
#include "Animator.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(1000,1000), "SFML works!");

  Animator bird_fly(2650, 1275,2,4);
  bird_fly.loadFromFile("resources/__black_flying_bird_2_flying.png");
  
  Vehical bird(bird_fly, *bird_fly.rect);
  bird.setOrigin(bird_fly.center.x, bird_fly.center.y);
  bird.setPosition(100,100);
  bird.setScale(-0.3F, 0.3F);

  while (window.isOpen())
  {
      
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
          window.close();
    }
    
    bird_fly.animate();
    bird.setTextureRect(*bird_fly.rect);

    window.clear();
    window.draw(bird);
    window.display();
  }

  return 0;
}
