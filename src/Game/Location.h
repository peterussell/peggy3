#ifndef GAME_LOCATION_H
#define GAME_LOCATION_H

#include <string>

using namespace std;

class Location {
  public:
    Location( const string& i,
              const string& n,
              const string& d,
              const string& dn,
              const string& de,
              const string& ds,
              const string& dw );
    ~Location();

    void printName();

  private:
    const string& id;
    const string& name;
    const string& description;
    const string& northId;
    const string& eastId;
    const string& southId;
    const string& westId;
};

#endif
