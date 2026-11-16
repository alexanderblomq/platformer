#include "Platform.hpp"
#include <SFML/Graphics.hpp>

Platform::Platform(float x, float y, float width, float height) : 
   Object(x, y), mWidth(width), mHeight(height) {
      color = sf::Color::Yellow;
      rectangle = sf::RectangleShape( {mWidth, mHeight} );
      rectangle.setFillColor(color);
}

void Platform::update() {

}

void Platform::render(sf::RenderTarget& target) {
   target.draw(rectangle); 
}

