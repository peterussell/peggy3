#include "Location.h"

#include <iostream>
#include <string>

using namespace std;

Location::Location( const string& i,
                    const string& n,
                    const string& d,
                    const string& dn,
                    const string& de,
                    const string& ds,
                    const string& dw ) :
id( i ),
name( n ),
description( d ),
northId( dn ),
eastId( de ),
southId( ds ),
westId( dw ) {
  // Location initialization
}

Location::~Location() {
  // Location destruction
}

void Location::printName() {
  cout << name << endl;
}
