#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "Object.hpp"


class Player : public Object {
   public:
      Player(float x, float y);
   private:
      void update() override;
      void render(sf::RenderTarget& target) override;
   private:
      sf::Color color; 
      int size;
      sf::CircleShape circle;
};

#endif
