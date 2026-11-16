#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include <vector>
#include <memory>

#include "Object.hpp"

class Game {
   public:
      Game();
      void run();
   private:
      void update();
      void processEvents();
      void render();
   private:
      sf::RenderWindow mWindow;
      std::vector<std::unique_ptr<Object>> objects; 
};

#endif
