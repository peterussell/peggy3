#include "World.h"
#include "Location.h"

#include "../../include/json/json.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

World::World() {
  // World initialization
}

World::~World() {
  // World destruction
}

int World::loadMap(const string& path) {
  cout << "loading from " << path << endl;

  ifstream inFile( path );
  if( !inFile.good() ) { // TODO: unit test
    cout << "Error loading Map file '" << path << "'" << endl;
    return 1;
  }

  Json::Value mapData;
  inFile >> mapData;

  for( Json::Value::iterator it = mapData["locations"].begin();
                             it != mapData["locations"].end();
                             ++it ) {
    cout << ( *it )["name"].asString() << endl;
  }

  inFile.close();

  return 0;
}
