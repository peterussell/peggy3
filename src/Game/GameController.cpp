#include "GameController.h"

#include <iostream>
#include <string>

using namespace std;

GameController::GameController() {
  // GameController initialization
}

GameController::~GameController() {
  // GameController destruction
}

int GameController::run() {
  theWorld = World();
  theWorld.loadMap("data/maps/peggy-world.json");
  return 0;
}
