#include "cactus.h"
#include "settings.h"

std::string Cactus::cactus_file_names[] = {
	"cactus.png","2cactus.png","3cactus.png"
};
Cactus::Cactus() {
	size_t num = rand() % CACTUS_TYPE_QTY;
	texture.loadFromFile(IMAGES_FOLDER + cactus_file_names[num]);
	sprite.setTexture(texture);
	spawn();
}
void Cactus::update() {
	
	{
		spawn();
	}
}
void Cactus::draw(sf::RenderWindow& window) { window.draw(sprite); }
void Cactus::spawn() {
	sf::FloatRect g_bound = sprite.getGlobalBounds();
	float x = rand() % (static_cast<size_t>(WINDOW_WIDTH) -
		static_cast<size_t>(g_bound.width));
	
	sprite.setPosition(x, WINDOW_HEIGHT / 1.3 - g_bound.height);
	speedx = rand() % 5 - 2;
	
}
sf::FloatRect Cactus::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Cactus::getPosition() { return sprite.getPosition(); }