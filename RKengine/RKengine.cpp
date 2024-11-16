// RKengine.cpp : Defines the functions for the static library.
//
#include <SFML/Graphics.hpp>

#include "pch.h"
#include "framework.h"
#include "RKengine.h"

namespace RKengine {
	sf::CircleShape plotPoint(int x, int y) {
		sf::CircleShape point(5);
		point.setFillColor(sf::Color::Red);
		point.setPosition(x, y);
		return point;
	}
}