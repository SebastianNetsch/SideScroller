#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__

#include <SFML/Graphics.hpp>

class
	obstacle
{
public:
	obstacle(); // constructor of obstacle class

	bool is_alive(); // return the dead/alive flag
	void set_dead(); // set the dead/alive flag
	sf::RectangleShape& get_rect(); // return the obstacles' sf::RectangleShape as a reference --> no copy!
	void set_touched(); // activate "touched" variable to identify obstacles the player jumped on
	bool get_touched(); // return "touched" variable to identify obstacles the player jumped on
private:
	bool alive; // dead/alive flag
	sf::RectangleShape rect; // the obstacles' sf::RectangeShape
	bool touched;
};

#endif
