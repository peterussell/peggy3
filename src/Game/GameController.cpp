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
  theWorld.loadMap("../data/peggy1.map");
  return 0;
}
