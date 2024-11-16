#pragma once

#include <SFML/Graphics.hpp>

// lovely
namespace RKengine {
	struct point { double x, y; };		// This should be a 2d point of course
	struct vector { double x, y, z; };	// 3d point in 3d space of course

	sf::CircleShape plotPoint(int x, int y);
}