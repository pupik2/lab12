#pragma once
#include <SFML/Graphics.hpp>

class rafik
{
	sf::VertexArray graf1;
	sf::VertexArray graf2;
	sf::VertexArray linesx;
	sf::VertexArray lines1;
	sf::VertexArray linesy;
	sf::VertexArray lines;
	sf::RenderWindow* window;
	
	void update();
	void draw();
	
public:
	void prorisovka();
	void start();
	void graf();
	rafik(sf::VertexArray& linesx, sf::VertexArray& lines1, sf::VertexArray& linesy, sf::VertexArray& lines);
	~rafik();
};

