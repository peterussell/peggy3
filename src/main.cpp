#include "Game/GameController.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Welcome to Peggy" << endl;
  GameController gc = GameController();
  gc.run();
};
