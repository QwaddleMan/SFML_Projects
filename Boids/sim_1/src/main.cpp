#include <SFML/Graphics.hpp>
#include "Vehical.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000,1000), "SFML works!");

    sf::Texture bird_fly;
    bird_fly.loadFromFile("resources/__black_flying_bird_2_flying.png");

    int w = 662, h = 683;

    Vehical bird(bird_fly, sf::IntRect(w*3,0,w, h));


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(bird);
        window.display();
    }

    return 0;
}
