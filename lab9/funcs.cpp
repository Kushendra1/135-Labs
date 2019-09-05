#include "funcs.h"
#include <iostream>
#include "Coord3D.h"
#include <cmath>


// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}

double length(Coord3D *p) {
  double newx = p -> x;
  double newy = p -> y;
  double newz = p -> z;
  double answer = sqrt((newx * newx) + (newy * newy) + (newz * newz));
  return answer;
}

Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
  double value1 = length(p1);
  double value2 = length(p2);
  if (value1 > value2) {
    return p1;
  }
  else {
    return p2;
  }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  double newx;
  newx = ((ppos -> x) + (pvel ->x) * dt);
  ppos -> x = newx;
  double newy;
  newy = ((ppos -> y) + (pvel ->y) * dt);
  ppos -> y = newy;
  double newz;
  newz = ((ppos -> z) + (pvel ->z) * dt);
  ppos -> z = newz;
  std::cout<< newx << " " << newy << " " << newz << std::endl;
}

Coord3D createCoord3D( double x, double y, double z) {
  Coord3D *p = new Coord3D;
  p -> x = x;
  p -> y = y;
  p -> z = z;

  return p;
}

void deleteCoord3D(Coord3D *p) {
  delete p;
  p = nullptr;
}
// Write all your functions in here
