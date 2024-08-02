#ifndef SETTINGS_H
#define SETTINGS_H

class Settings {
public:
  bool fullscreen;
  bool borderless;

  void load();
  void save();
};

#endif
