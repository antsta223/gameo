#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "title");
    window.setFramerateLimit(60);

    sf::RectangleShape rect(sf::Vector2f(50,50));
    rect.setFillColor(sf::Color::Cyan);
    rect.setOrigin(sf::Vector2f(25, 25));
    rect.setPosition(sf::Vector2f(50, 50));

    while (window.isOpen())
    {
        //handle events
        sf::Event event;

        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::EventType::Closed)
                window.close();
        }

        //Update scene
        rect.rotate(1.5f);
        rect.move(sf::Vector2f(1,0.5));

        //Render cycle
        window.clear(sf::Color::Black);
        window.draw(rect);
        window.display();
    }
    return 0;
}