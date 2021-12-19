#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <sigc++/sigc++.h>
// #include <SFML/Mouse.hpp>
// #include <SFML/Vector2.hpp>sigc++-2.0
#include <stdio.h>

#ifndef CLICKABLE_H
#define CLICKABLE_H

class Clickable : public sf::Sprite
{

public:
    Clickable(sf::Texture & mainTex);
    ~Clickable();
    void check();
    void setPressedTexture(sf::Texture & btnUpTex);
    sigc::signal<void> pressed_signal;
    sigc::signal<void> released_signal;
    // sigc::signal<void> clicked_signal;
    sigc::signal<void> hover_signal;
    sigc::signal<void> mouseout_signal;
    // sigc::signal<void> focus_signal;
    // sigc::signal<void> blur_signal;


protected:
    bool containsCursor(sf::Vector2i mpos);

private:
  sf::Texture * txtPressed;
  sf::Texture * txtReleased;
  bool buttonDown;
  bool wasHovering;
};

#endif
