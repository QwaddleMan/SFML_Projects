#include "Clickable.h"

#ifndef BUTTON_H
#define BUTTON_H

class Button : public Clickable
{
public:
    Button(sf::Texture & texture, const std::string text);

private:
    sf::Text * text;
};

#endif
