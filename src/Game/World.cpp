#include "World.h"
#include "Location.h"

#include <iostream>
#include <string>

using namespace std;

World::World() {
  // World initialization
}

World::~World() {
  // World destruction
}

int World::loadMap(const string& path) {
  cout << "loading from " << path << endl;

  Location l = Location( "room1",
                         "The First Room",
                         "This is the first room you see",
                         "room2",
                         "room3",
                         "room4",
                         "room5" );
  cout << "Location created: ";
  l.printName();
  cout << endl;

  return 0;
}
