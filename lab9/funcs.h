#pragma once

#include <iostream>

// sample signature
std::string greet(std::string name);
class Coord3D;
double length(Coord3D *p);
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D createCoord3D( double x, double y, double z);
void deleteCoord3D(Coord3D *p);

// Write your function signatures / prototypes here
