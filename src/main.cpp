#include <SFML/Graphics.hpp>

int main()
{
   float circleRadius = 10.f;

	sf::RenderWindow window( sf::VideoMode( { 200, 200 } ), "SFML works!",
         sf::Style::Default, sf::State::Fullscreen);
	sf::CircleShape shape( circleRadius );
	shape.setFillColor( sf::Color::Red);

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
         else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if(keyPressed->scancode == sf::Keyboard::Scancode::A) {
               circleRadius += 10;
            }
            else if(keyPressed->scancode == sf::Keyboard::Scancode::D) {
               if(circleRadius - 10 >= 0){
                  circleRadius -= 10;

               }
            }
            shape.setRadius(circleRadius);
         }
		}

		window.clear();
		window.draw( shape );
		window.display();
	}
}
