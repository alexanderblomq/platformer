#ifndef PLATFORM_H 
#define PLATFORM_H

#include <SFML/Graphics.hpp>
#include "Object.hpp"


class Platform : public Object {
   public:
      Platform(float x, float y, float width, float height);
   private:
      void update() override;
      void render(sf::RenderTarget& target) override;
   private:
      float mWidth;
      float mHeight;
      sf::RectangleShape rectangle;
      sf::Color color; 
};

#endif

