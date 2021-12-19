#include "Clickable.h"
#include "Singleton.h"

#ifndef BUTTON_H
#define BUTTON_H

class Button : public Clickable
{
public:
    Button(sf::Texture & texture, const std::string btnText);
    ~Button();
    void draw();

private:
    sf::Text text;
};

#endif
