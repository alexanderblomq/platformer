#include <SFML/Graphics.hpp>

#include "Game.hpp"
#include "Player.hpp"
#include "Platform.hpp"

Game::Game() {
   mWindow = sf::RenderWindow( sf::VideoMode( { 200, 200 } ), "platformer",
         sf::Style::Default, sf::State::Fullscreen);
   objects.push_back(std::make_unique<Player>(0.f, 0.f));
   objects.push_back(std::make_unique<Platform>(0.f, 0.f, 10.f, 5.f));
}

void Game::run() {
   while(mWindow.isOpen()) {
      processEvents();
      update();
      render();
   }
}

void Game::update() {
   for(std::unique_ptr<Object>& object : objects) {
      object->update();
   }
}

void Game::processEvents() {
   //Existence check
   if(const std::optional event = mWindow.pollEvent()) { 
      if (event->is<sf::Event::Closed>())
      {
         mWindow.close();
      }
   }
}

void Game::render() {
   mWindow.clear();
   for(std::unique_ptr<Object>& object : objects) {
      object->render(mWindow);
   }
   mWindow.display();
}
