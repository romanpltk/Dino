#include "game.h"
#include "settings.h"
#include <iostream>

Game::Game() :
	window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,
		sf::Style::Titlebar | sf::Style::Close), map1(WINDOW_WIDTH, 0.f),
	map2(0.f, 0.f), cactus1(0.f, -barrier1.getHitBox().height),
	barrier2(200.f, -WINDOW_HEIGHT / 2), {
	window.setVerticalSyncEnabled(true);
}
void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		check_collisions();
		draw();
	}
}
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
		
	}
}
void Game::update() {
	map1.update();
	map2.update();
	player.update();
}
void Game::draw() {
	window.clear(sf::Color(204, 255, 255));

	window.draw(map1.getSprite());
	window.draw(map2.getSprite());
	player.draw(window);
	window.display();
}
void Game::check_collisions() {}
