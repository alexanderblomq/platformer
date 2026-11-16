#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics.hpp>

class Object {
   public:
      Object(float x, float y) : x_Pos(x), y_Pos(y) {}
      virtual void update() = 0;
      virtual void render(sf::RenderTarget& target) = 0;
   public:
      float x_Pos;
      float y_Pos;
};

#endif
