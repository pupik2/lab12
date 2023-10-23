#include"rafik.h"


int main()
{
    int y,x;
    sf::VertexArray linesy(sf::Lines, 16);
    sf::VertexArray myLines(sf::Lines, 50);

    sf::VertexArray linesx(sf::Lines, 16);
    sf::VertexArray myLines1(sf::Lines, 40);

    rafik raf(linesx, myLines1, linesy, myLines);

   
    raf.graf();
    
    raf.start();

   
    return 0;
}