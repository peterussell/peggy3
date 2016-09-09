#ifndef GAME_GAMECONTROLLER_H
#define GAME_GAMECONTROLLER_H

#include "World.h"

class GameController {
  public:
    GameController();
    ~GameController();
    int run();

  private:
    World theWorld;
};

#endif
