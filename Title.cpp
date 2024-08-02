#include "Title.h"
#include <SFML/Graphics.hpp>

Title::Title(sf::RenderWindow& win) : window(win) {}

bool Title::show() {
  sf::Font font;
  if (!font.loadFromFile("arial.ttf")) {
    return false;
  }

  sf::Text text("Welcome to eMusiMath!\nPress ENTER to start", font, 30);
  text.setFillColor(sf::Color::White);
  text.setPosition(200, 300);

  while (window.isOpen()) {
    sf:: Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();

      if (event.type == sf::Event::Keypressed && event.key.code == sf::Keyboard::Enter) {
        return true;
      }
    }

    window.clear();
    window.draw(text);
    window.display();
  }
  return false;
}
