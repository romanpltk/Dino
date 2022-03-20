#pragma once
#include "SFML/Graphics.hpp"
class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f speed{ sf::Vector2f(0.f,-5.f) };
public:
	Player();
	void update();
	void draw(sf::RenderWindow& window);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();

};