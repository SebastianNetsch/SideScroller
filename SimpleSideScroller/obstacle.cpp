#include "obstacle.hpp"

#include <cstdlib>

obstacle::obstacle()
	:alive(true) // set the dead/alive flag to alive (true)
	, rect() // set obstacles' rectangle
	, touched(false)
{
	get_rect().setSize(sf::Vector2f(40, 20)); // set rectangles size
	get_rect().setOutlineThickness(1);  // everything can be read/seen easier with a black outline (black text excluded for it doesn't matter)
	get_rect().setOutlineColor(sf::Color::Black); // everything can be read/seen easier with a black outline (black text excluded for it doesn't matter)
	get_rect().setFillColor(sf::Color(rand()%255 + 1, rand()%255 + 1, rand()%255 + 1, 255)); // set a random color to make the game more colorful
}

bool obstacle::is_alive()
{
	return alive; // return the dead/alive flag
}

void obstacle::set_dead()
{
	alive = false; // set the dead/alive flag
}

sf::RectangleShape& obstacle::get_rect()
{
	return rect; // return the obstacles' sf::RectangleShape as a reference --> no copy!
}

void obstacle::set_touched()
{
	touched = true;
}

bool obstacle::get_touched()
{
	return touched;
}
