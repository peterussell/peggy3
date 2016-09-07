#include "GameController.h"

#include <iostream>
#include <string>

using namespace std;

GameController::GameController() {
  cout << "GameController initialized" << endl;
}

GameController::~GameController() {
  cout << "GameController destroyed" << endl;
}

int GameController::run() {
  cout << "Hello from GameController::run()!" << endl;
  return 0;
}
