#include <SFML/Graphics.hpp>
#include "Settings.h"
#include "Title.h"
#include "Game.h"

int main() {
    Settings settings;
    settings.load();  // Load settings (e.g., fullscreen, borderless)

    sf::VideoMode videoMode(1366, 768);
    sf::Uint32 style = settings.fullscreen ? sf::Style::Fullscreen : 
                       (settings.borderless ? sf::Style::None : sf::Style::Default);

    sf::RenderWindow window(videoMode, "eMusiMath", style);
    window.setVerticalSyncEnabled(true);

    Title titleScreen(window);
    if (titleScreen.show()) {
        Game game(window);
        game.start();
    }
    return 0;
}
