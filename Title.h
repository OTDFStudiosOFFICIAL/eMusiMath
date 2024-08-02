#infdef TITLE_H
#define TITLE_H

#include <SFML/Graphics.hpp>

class Title {
public:
  Title(sf::RenderWindow& win);
  bool show();

private:
  sf::RenderWindow& window;
}
