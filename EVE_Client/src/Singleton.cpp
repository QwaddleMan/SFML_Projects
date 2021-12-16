#include "Singleton.h"
Singleton& Singleton::getInstance()
{
  static Singleton s;
  return s;
}
