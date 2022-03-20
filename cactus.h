#pragma once

#include "SFML/Graphics.hpp"

class Cactus {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	static std::string cactus_file_names[];
	float speedx, speedy;

public:
	Cactus();
	void update();
	void draw(sf::RenderWindow&);
	void spawn();
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
};