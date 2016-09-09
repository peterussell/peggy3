#ifndef GAME_WORLD_H
#define GAME_WORLD_H

#include <string>

using namespace std;

class World {
  public:
    World();
    ~World();

    int loadMap(const string& path);
};

#endif
