#include "Player.hpp"
#include <SFML/Graphics.hpp>

Player::Player(float x, float y) : Object(x, y) {
   color = sf::Color::Yellow;
   size = 1;
   circle = sf::CircleShape(50.f);
   circle.setFillColor(color);
}

void Player::update() {

}

void Player::render(sf::RenderTarget& target) {
   target.draw(circle); 
}
