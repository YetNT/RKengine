// Tests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RKengine.h"
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "name");
    //sf::CircleShape point(5);  // A circle with radius of 5 (acts as a point)
    //point.setFillColor(sf::Color::Red);  // Set the point's color

    //point.setPosition(55, 500);

    sf::CircleShape point = RKengine::plotPoint(100, 10);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(point);
        window.display();
    }

    return 0;
}
