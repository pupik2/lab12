#include "rafik.h"

void rafik::draw()
{
    window->clear();
    prorisovka();
    window->draw(linesy);
    window->draw(linesx);
    window->draw(lines);
    window->draw(lines1);
    window->draw(graf1);
    window->draw(graf2);
    window->display();
}

void rafik::prorisovka()
{
    for (int i = 0, y = 0; i < 50; i += 2, y += 20)
    {
        lines[i].position = sf::Vector2f(190, 580 - y);
        lines[i + 1].position = sf::Vector2f(210, 580 - y);
    }

    for (int i = 0, y = 0; i < 40; i += 2, y += 20)
    {
        lines1[i].position = sf::Vector2f(220 + y, 590);
        lines1[i + 1].position = sf::Vector2f(220 + y, 610);
    }


}

void rafik::start()
{
    while (window->isOpen())
    {
        update();
        draw();
    }
}

void rafik::graf()
{
   sf::VertexArray graf1(sf::Lines, 40);

    for (int i = 0, y = 0, x = 1; i < 40; i += 2, x++)
    {

        y = double(pow((x + 3.14), 0.15) * 10 - 5) * 10;
        y = 600 - (y % 10) * 2 - ((y / 10) * 20);
        graf1[i].position = sf::Vector2f(200 + x * 20, y);
        graf1[i].color = sf::Color::Red;

        y = double(pow((x + 1 + 3.14), 0.15) * 10 - 5) * 10;
        y = 600 - (y % 10) * 2 - ((y / 10) * 20);
        graf1[i + 1].position = sf::Vector2f(200 + (x + 1) * 20, y);
        graf1[i + 1].color = sf::Color::Red;

    }
    this->graf1 = graf1;
    //grafik2
    sf::VertexArray graf2(sf::Lines, 40);

    for (int i = 0, y = 0, x = 1; i < 40; i += 2, x++)
    {

        y = double(pow((x + 3.14), 0.35) * 10 - 5) * 10;
        y = 600 - (y % 10) * 2 - ((y / 10) * 20);
        graf2[i].position = sf::Vector2f(200 + x * 20, y);
        graf2[i].color = sf::Color::Blue;

        y = (pow((x + 1 + 3.14), 0.35) * 10 - 5) * 10;
        y = 600 - (y % 10) * 2 - ((y / 10) * 20);
        graf2[i + 1].position = sf::Vector2f(200 + (x + 1) * 20, y);
        graf2[i + 1].color = sf::Color::Blue;
    }
    this->graf2 = graf2;

}

void rafik::update()
{
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
    }
}

rafik::rafik(sf::VertexArray& linesx, sf::VertexArray& lines1, sf::VertexArray& linesy, sf::VertexArray& lines)
{
    this->lines = lines;
    this->linesx = linesx;
    this->linesx[0].position = sf::Vector2f(200, 600);
    this->linesx[1].position = sf::Vector2f(600, 600);
    this->linesy = linesy;
    this->linesy[0].position = sf::Vector2f(200, 100);
    this->linesy[1].position = sf::Vector2f(200, 600);
    this->lines1 = lines1;
    window = new sf::RenderWindow(sf::VideoMode(800, 800), L"График");

    
}

rafik::~rafik()
{
    delete window;
}
