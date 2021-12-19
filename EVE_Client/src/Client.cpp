#include "Client.h"

void Client::setup()
{
  Singleton& s = Singleton::getInstance();
  s.window = this;
  btnUp.loadFromFile("resources/button.png", sf::IntRect(0, 0, 200, 200));
  btnDown.loadFromFile("resources/button.png", sf::IntRect(200, 0, 200, 200));
  std::shared_ptr<Button> myButton = std::make_shared<Button>(btnUp, "hello");
  myButton->pressed_signal.connect(sigc::ptr_fun(btn1Pressed));
  myButton->released_signal.connect(sigc::ptr_fun(btn1Released));
  myButton->hover_signal.connect(sigc::ptr_fun(btn1Hover));
  myButton->mouseout_signal.connect(sigc::ptr_fun(btn1Off));
  myButton->setPressedTexture(btnDown);
  myButton->setPosition(100.f, 100.f);

  btnManage.buttons.push_back(myButton);
  sf::Font myFont;
  myFont.loadFromFile("resources/fonts/DejaVuSansMono.ttf");
  s.font = myFont;

}


void Client::update()
{
  // b->check();
  btnManage.update();
}

void Client::visualize()
{
  // b->draw(*this);
  btnManage.draw();
}

void Client::btn1Pressed()
{
  printf("%s\n", "btn1 pressed...");
}

void Client::btn1Released()
{
  printf("%s\n", "btn1 released...");
}

void Client::btn1Hover()
{
  // printf("%s\n", "btn1 hovering...");
  return;
}

void Client::btn1Off()
{
  printf("%s\n", "btn1 mouse off...");
}
