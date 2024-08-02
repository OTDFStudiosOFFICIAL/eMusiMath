#include "Settings.h"
#include <fstream>
#include <iostream>

void Settings::load() {
    std::ifstream file("settings.cfg");
    if (file.is_open()) {
        file >> fullscreen >> borderless;
        file.close();
    } else {
        // Default settings
        fullscreen = false;
        borderless = false;
    }
}

void Settings::save() {
    std::ofstream file("settings.cfg");
    if (file.is_open()) {
        file << fullscreen << std::endl;
        file << borderless << std::endl;
        file.close();
    } else {
        std::cerr << "Unable to save settings" << std::endl;
    }
}
